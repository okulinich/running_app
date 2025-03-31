#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include <QDebug>

class Backend : public QObject {
    Q_OBJECT
public:
    explicit Backend(QObject *parent = nullptr) {}

    Q_INVOKABLE void startRunning() {
        qDebug() << "Running started!";
    }
};

#endif // BACKEND_H
