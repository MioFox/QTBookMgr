#include "cell_main.h"
#include "dlg_login.h"
#include "lib/sqlmgr.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SqlMgr::getInstance()->init();
    SqlMgr::getInstance()->getUser();

    Dlg_login dlg;
    int ret = dlg.exec();

    if(ret==1)
    {
        Cell_Main w;
        w.show();
        return a.exec();
    }
    if(ret==0)
    {
        exit(0);
        return 0;
    }

    return 0;
}
