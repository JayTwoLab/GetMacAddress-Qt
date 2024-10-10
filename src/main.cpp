// main.cpp

#include <QtGlobal>
#include <QCoreApplication>

#include "MacAddress.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    {
        qDebug() << "=== Not use loopback ===";
        bool useLoopback = false;
        QStringList addrList = j2::getMacAddressList(useLoopback);
        foreach(QString strAddr, addrList)
        {
            qDebug() << strAddr;
        }
    }

    {
        qDebug() << "=== Use loopback ===";
        bool useLoopback = true;
        QStringList addrList = j2::getMacAddressList(useLoopback);
        foreach(QString strAddr, addrList)
        {
            qDebug() << strAddr;
        }
    }

    return 0;
}

