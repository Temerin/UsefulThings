#ifndef SYSTEMMETHODS_H
#define SYSTEMMETHODS_H

#include <QEventLoop>
#include <QTimer>

namespace smplus {
inline void wait(int msecs) //non-blocking wait
{
    QEventLoop loop;
    QTimer::singleShot(msecs,&loop,&QEventLoop::quit);
    loop.exec();
}
}

#endif // SYSTEMMETHODS_H
