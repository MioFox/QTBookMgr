#ifndef SQLMGR_H
#define SQLMGR_H

#include<QtDebug>
#include<QSqlDatabase>

//单例模式
class SqlMgr
{
private:
    SqlMgr();
    ~SqlMgr();
    static SqlMgr *instance;
    QSqlDatabase m_db;
public:
    static SqlMgr *getInstance();    //获取实例
    void init();     //初始化数据库

    //用户管理部分
    //登录
    bool login(QString strUser,QString strPass,int &userid);

    //获取所有用户
    QVector<QStringList> getUser(QString strCondition="");

    //添加用户
    void addUser(QVector<QStringList>);

    //删除用户
    void delUser(QString strId);


    //图书管理部分
    //获取所有图书
    QVector<QStringList> getBooks(QString strCondition="");

    //增加图书
    void addBooks(QVector<QStringList>);

    //修改图书
    void updateBooks(QStringList);

    //删除图书
    QString delBook(QString strId);

    //归还图书
    QString returnBook(QString strUserId,QString strBookId);

    //借阅图书
    QString borrowBook(QString strUserId,QString strBookId);


    //借阅记录部分
    //获取借阅记录
    QVector<QStringList> getRecord(QString strCondition="");

    //清空借阅记录
    void clearRecord();

};

#endif // SQLMGR_H
