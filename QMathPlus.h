#ifndef QMATHPLUS_H
#define QMATHPLUS_H

#include <qmath.h> //Можно переделать библиотеку на обычный math, например

inline qreal sind(qreal v)
{
    return qSin(qDegreesToRadians(v));
}

inline qreal cosd(qreal v)
{
    return qCos(qDegreesToRadians(v));
}

inline qreal tand(qreal v)
{
    return qTan(qDegreesToRadians(v));
}

inline qreal asind(qreal v)
{
    return qRadiansToDegrees(qAsin(v));
}

inline qreal acosd(qreal v)
{
    return qRadiansToDegrees(qAcos(v));
}

inline qreal atand(qreal v)
{
    return qRadiansToDegrees(qAtan(v));
}

inline bool compare(qreal a, qreal b, qreal delta = 0.01f)
{//Сравнение с заданой точностью
    return ((a < b + delta) && (a > b - delta));
}

inline qreal linearInterpolation(qreal a, qreal fa, qreal b, qreal fb, qreal x)
{//линейная интерполяция
    return fa + (x-a)*((fb-fa)/(b-a));
}

#endif // QMATHPLUS_H