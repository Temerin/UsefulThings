#ifndef QMAPSAVER_H
#define QMAPSAVER_H

#include <QObject>
#include <QMap>

class QMapSaver : public QObject
{
    Q_OBJECT
public:
    explicit QMapSaver(QObject *parent = nullptr);
    bool saveMap(const QMap<QString,QVariant> &map, const QString &path);
    bool loadMap(QMap<QString,QVariant> &map, const QString &path);

signals:

public slots:

};

#endif // QMAPSAVER_H
