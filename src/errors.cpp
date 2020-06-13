#include "errors.h"
#include <QMessageBox>
Errors::Errors(QObject *parent): QObject(parent){}
void Errors::set_message(QWidget *t,QString r)
{
    window=t;
    msg=r;
}
void Errors::display_message()
{
    QMessageBox::about(window, "Usuniecie", msg);
}
