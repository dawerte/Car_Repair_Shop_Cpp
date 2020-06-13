#ifndef ERRORS_H
#define ERRORS_H
#include <QObject>
#include <QString>

class Errors: public QObject
{
    Q_OBJECT
public:
    explicit Errors(QObject *parent=0);
    void set_message(QWidget*, QString );
    void display_message();
protected:
    QWidget *window;
    QString msg;
};

#endif // ERRORS_H
