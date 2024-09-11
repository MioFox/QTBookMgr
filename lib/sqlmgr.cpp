#include "sqlmgr.h"
#include<QCoreApplication>
#include<QSqlQuery>
#include<QSqlError>
#include<QSqlRecord>>
#include <QDateTime>

SqlMgr *SqlMgr::instance = nullptr;

SqlMgr::SqlMgr()
{

}

SqlMgr::~SqlMgr()
{

}

SqlMgr *SqlMgr::getInstance()
{
    if(instance==nullptr)
    {
        instance = new SqlMgr();
    }
    return instance;
}

void SqlMgr::init()
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    QString strPath = QCoreApplication::applicationDirPath()+"/db/book.db";
    m_db.setDatabaseName(strPath);
    qDebug()<<m_db.open();
}

bool SqlMgr::login(QString strUser, QString strPass,int &userid)
{
    QSqlQuery q(m_db);
    QString strSql = QString("Select * from user where username='%1' and passward='%2'").arg(strUser).arg(strPass);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        ret = q.next();
        if(ret)
        {
            userid = q.value(0).toInt();
        }
    }
    return ret;
}

QVector<QStringList> SqlMgr::getUser(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql = QString("Select * from user %1").arg(strCondition);

    QVector<QStringList> vec;

    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        int iCols = q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i=0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void SqlMgr::addUser(QVector<QStringList> v)
{
    m_db.transaction();
    QSqlQuery q(m_db);
    for(auto it:v)
    {
        QString strSql = QString("INSERT INTO user VALUES(NULL,'%1','%2','%3','%4','%5','%6');")
            .arg(it[0])
            .arg(it[1])
            .arg(it[2])
            .arg(it[3])
            .arg(it[4])
            .arg(it[5]);
        bool ret = q.exec(strSql);
        if(!ret)
        {
            qDebug()<<q.lastError().text();
        }
    }
    m_db.commit();
}

void SqlMgr::delUser(QString strId)
{
    QSqlQuery q(m_db);
    QString strSql = QString("Delete from user where userid='%1'").arg(strId);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}

QVector<QStringList> SqlMgr::getBooks(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql = QString("Select * from book %1").arg(strCondition);

    QVector<QStringList> vec;

    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        int iCols = q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i=0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void SqlMgr::addBooks(QVector<QStringList> vec)
{
    if(vec.size() == 0)
    {
        return;
    }
    auto ldate = vec[0];
    QSqlQuery q(m_db);
    QString strSql = QString("INSERT INTO book values(null,'%1','%2','%3','%4','%5',%6,'');")
                         .arg(ldate[1]).arg(ldate[2]).arg(ldate[3]).arg(ldate[4]).arg(ldate[5]).arg(ldate[6]);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}

void SqlMgr::updateBooks(QStringList ldate)
{
    QSqlQuery q(m_db);
    QString strSql = QString("UPDATE book set name = '%1',price = '%2',type1 = '%3',type2 = '%4',type3 = '%5',cnt = %6 where bookid = '%7';")
                            .arg(ldate[1]).arg(ldate[2]).arg(ldate[3]).arg(ldate[4]).arg(ldate[5]).arg(ldate[6]).arg(ldate[0]);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
}

QString SqlMgr::delBook(QString strId)
{
    QString strRet;
    QSqlQuery q(m_db);
    QString strSql = QString("Delete from book where bookid='%1'").arg(strId);
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
        strRet = "Delete Error! Check Record PLS!";
    }
    return strRet;
}

QString SqlMgr::returnBook(QString strUserId, QString strBookId)
{
    QSqlQuery q(m_db);
    QString strSql = QString("update book set cnt = cnt+1 where bookid = %1;").arg(strBookId.toInt());
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    strSql = QString("delete from record where bookid = %1 and userid = %2;").arg(strBookId.toInt()).arg(strUserId.toInt());
    ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    return QString("");
}

QString SqlMgr::borrowBook(QString strUserId, QString strBookId)
{
    QSqlQuery q(m_db);
    QString strSql = QString("update book set cnt = cnt-1 where bookid = %1;").arg(strBookId.toInt());
    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    strSql = QString("insert into record VALUES(null,%1,%2,'%3','%4');")
                 .arg(strUserId.toInt())
                 .arg(strBookId.toInt())
                 .arg(QDateTime::currentDateTime().toString("yyyy-MM-dd"))  // 当前日期
                 .arg(QDateTime::currentDateTime().addDays(10).toString("yyyy-MM-dd"));  //10天后归还
    ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    return QString("");
}

QVector<QStringList> SqlMgr::getRecord(QString strCondition)
{
    QSqlQuery q(m_db);
    QString strSql = QString("Select * from record join user using(userid) join book using(bookid) %1").arg(strCondition);
    QVector<QStringList> vec;

    bool ret = q.exec(strSql);
    if(!ret)
    {
        qDebug()<<q.lastError().text();
    }
    else
    {
        int iCols = q.record().count();
        QStringList l;
        while(q.next())
        {
            l.clear();
            for(int i=0;i<iCols;i++)
            {
                l<<q.value(i).toString();
            }
            vec.push_back(l);
        }
    }
    return vec;
}

void SqlMgr::clearRecord()
{
    QSqlQuery q(m_db);

    // 第一个 SQL 语句: 删除 book 表中的所有记录
    QString strSql1 = QString("DELETE FROM record;");
    bool ret1 = q.exec(strSql1);
    if(!ret1)
    {
        qDebug() << "Error deleting from book: " << q.lastError().text();
        return;
    }

    // 第二个 SQL 语句: 重置 sqlite_sequence 中的 book 表的自增计数器
    QString strSql2 = QString("DELETE FROM sqlite_sequence WHERE name = 'record';");
    bool ret2 = q.exec(strSql2);
    if(!ret2)
    {
        qDebug() << "Error resetting sqlite_sequence: " << q.lastError().text();
        return;
    }
}



