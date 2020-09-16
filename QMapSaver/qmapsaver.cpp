#include "qmapsaver.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

QMapSaver::QMapSaver(QObject *parent) : QObject(parent)
{

}

bool QMapSaver::saveMap(const QMap<QString, QVariant> &map, const QString &path)
{
    QFile file;
    file.setFileName(path);
    QTextStream writeStream{&file};
    if(!file.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "File QMapSaver" << path << "is not opening";
        return false;
    }
    foreach (const auto &key, map.keys()) {
        writeStream << key << " " << map.value(key).toString() << "\n";
    }
    writeStream.flush();
    return true;
}

bool QMapSaver::loadMap(QMap<QString, QVariant> &map, const QString &path)
{
    QFile file;
    file.setFileName(path);
    QTextStream readStream{&file};
    if(!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "File QMapSaver" << path << "is not opening";
        return false;
    }
    while (!readStream.atEnd()) {
        QString line = readStream.readLine();
//        qDebug() << line.left(line.indexOf(' ')) << line.right(line.length() - line.indexOf(' ')-1);
        map[line.left(line.indexOf(' '))] = line.right(line.length() - line.indexOf(' ')-1);
    }
    return true;
}
