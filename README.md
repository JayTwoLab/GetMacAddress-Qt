# GetMacAddress-Qt

- Get Mac Address in Qt

```cpp
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
```

- main code from https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=browniz1004&logNo=221643677637

- Some code is fixed by j2doll.

- It is a part of j2(jay two) library.

## License
- MIT License


