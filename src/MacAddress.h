#ifndef MACADDRESS_H
#define MACADDRESS_H

#include <QtGlobal>
#include <QList>
#include <QString>
#include <QStringList>
#include <QNetworkInterface>

namespace j2 {

QStringList getMacAddressList(bool useLoopback = false)
{
    QStringList ret;

    foreach(QNetworkInterface netInterface, QNetworkInterface::allInterfaces())
    {
        if ( useLoopback )
        {
            QString strAddress = netInterface.hardwareAddress();
            ret << strAddress;
        }
        else
        {
            if ( !(netInterface.flags() & QNetworkInterface::IsLoopBack) )
            {
                QString strAddress = netInterface.hardwareAddress();
                ret << strAddress;
            }
        }
    }

    return ret;
}



} // end of namespace

#endif // MACADDRESS_H
