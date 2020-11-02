#ifndef QMAPSAVER_H
#define QMAPSAVER_H

#include <QObject>
#include <QMap>
#include <QStringList>

class QMapSaver : public QObject
{
    Q_OBJECT
public:
    explicit QMapSaver(QObject *parent = nullptr);
    bool saveMap(const QMap<QString,QVariant> &map, const QString &path);
    bool loadMap(QMap<QString,QVariant> &map, const QString &path);
    QStringList findMapFiles();

signals:

public slots:

};

#endif // QMAPSAVER_H
