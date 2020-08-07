#ifndef BYTEPLUS_H
#define BYTEPLUS_H

#include <QByteArray>

#define INVERT_BYTE(a)   ((a&1)<<7) | ((a&2)<<5) | ((a&4)<<3) | ((a&8)<<1) | ((a&16)>>1) | ((a&32)>>3) | ((a&64)>>5) | ((a&128)>>7)    //Reverse the order of the bits

inline void addToQByteArray(QByteArray &byteArray, quint16 num) {
    byteArray.append(char(num>>8));
    byteArray.append(char(num));
}

inline void addToQByteArray(QByteArray &byteArray, quint32 num) {
    byteArray.append(char(num>>24));
    byteArray.append(char(num>>16));
    byteArray.append(char(num>>8));
    byteArray.append(char(num));
}

inline void addToQByteArray(QByteArray &byteArray, quint64 num) {
    byteArray.append(char(num>>56));
    byteArray.append(char(num>>48));
    byteArray.append(char(num>>40));
    byteArray.append(char(num>>32));
    byteArray.append(char(num>>24));
    byteArray.append(char(num>>16));
    byteArray.append(char(num>>8));
    byteArray.append(char(num));
}

inline void addReverseToQByteArray(QByteArray &byteArray, quint16 num) {
    byteArray.append(INVERT_BYTE(char(num)));
    byteArray.append(INVERT_BYTE(char(num>>8)));
}

inline void addReverseToQByteArray(QByteArray &byteArray, quint32 num) {
    byteArray.append(INVERT_BYTE(char(num)));
    byteArray.append(INVERT_BYTE(char(num>>8)));
    byteArray.append(INVERT_BYTE(char(num>>16)));
    byteArray.append(INVERT_BYTE(char(num>>24)));
}

inline void addReverseToQByteArray(QByteArray &byteArray, quint64 num) {
    byteArray.append(INVERT_BYTE(char(num)));
    byteArray.append(INVERT_BYTE(char(num>>8)));
    byteArray.append(INVERT_BYTE(char(num>>16)));
    byteArray.append(INVERT_BYTE(char(num>>24)));
    byteArray.append(INVERT_BYTE(char(num>>32)));
    byteArray.append(INVERT_BYTE(char(num>>40)));
    byteArray.append(INVERT_BYTE(char(num>>48)));
    byteArray.append(INVERT_BYTE(char(num>>56)));
}

#endif // BYTEPLUS_H