// main.cpp
// https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=browniz1004&logNo=221643677637
// Some code is fixed by j2doll.

#include <QtGlobal>
#include <QObject>
#include <QString>
#include <QList>
#include <QStringList>
#include <QDebug>
#include <QNetworkInterface>
#include <QCoreApplication>

QStringList getMacAddressList();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList addrList = getMacAddressList();
    foreach(QString strAddr, addrList)
    {
        qDebug() << strAddr;
    }

    return 0; // return a.exec();
}

QStringList getMacAddressList()
{
    QStringList ret;

    foreach(QNetworkInterface netInterface, QNetworkInterface::allInterfaces())
    {
        if (!(netInterface.flags() & QNetworkInterface::IsLoopBack))
        {
            QString strAddress = netInterface.hardwareAddress();
            ret << strAddress;
        }
    }

    return ret;
}
