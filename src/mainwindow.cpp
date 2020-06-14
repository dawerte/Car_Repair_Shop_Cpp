#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Clients.h"
#include "load.h"
#include "errors.h"
#include "save.h"
#include <QListWidgetItem>
#include <QListWidget>
#include <QLineEdit>
#include <QString>
#include <QList>
#include <QtDebug>
#include <QMessageBox>
#include <memory>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::exception()
{
    try
    {
        Errors *ptr = new Errors;
        ptr->set_message(this, "Lista jest pusta");
        throw ptr;
    }

    catch (Errors *lmsg) {
       lmsg->display_message();
    }
}
void MainWindow::on_pushButton_clicked()
{
    ui->listWidget->clear();
    QString temp;
     Clients *ptr=new Clients;
    temp = ui->tablica->text();
    ptr->set_name(temp);
    temp = ui->tablica2->text();
    ptr->set_surname(temp);
    temp = ui->tablica3->text();
    ptr->set_age(temp);
    temp = ui->tablica4->text();
    ptr->set_car_name(temp);
    temp = ui->tablica5->text();
    ptr->set_model(temp);
    temp = ui->tablica6->text();
    ptr->set_capacity(temp);
    temp = ui->tablica7->text();
    ptr->set_milelage(temp);
    temp = ui->tablica8->text();
    ptr->set_part_name(temp);
    temp = ui->tablica9->text();
    ptr->set_price(temp);
    ptr->display();
    QListWidgetItem* item = ptr;
        mylist << item->text();
    ui->listWidget->addItems(mylist);
    ui->label->setText("Pomyslnie dodano!");
    ui->tablica->clear();
    ui->tablica2->clear();
    ui->tablica3->clear();
    ui->tablica4->clear();
    ui->tablica5->clear();
    ui->tablica6->clear();
    ui->tablica7->clear();
    ui->tablica8->clear();
    ui->tablica9->clear();
}

void MainWindow::on_push_button_2_clicked()
{
    if(ui->listWidget->count()==0)
    {
      exception();
      ui->label->setText("Proba nieudana");
    }
    else
    {
        int a=ui->listWidget->currentRow();
        delete ui->listWidget->currentItem();
        mylist.removeAt(a);
        ui->label->setText("Pomyslnie usunieto!");
    }
}

void MainWindow::on_tablica11_textChanged(const QString &arg1)
{
    QRegExp regExp(arg1, Qt::CaseInsensitive, QRegExp::Wildcard);
    ui->listWidget->clear();
    ui->listWidget->addItems(mylist.filter(regExp));

}

void MainWindow::on_actionOdczyt_z_pliku_triggered()
{
    Load *ptr= new Load;
    ptr->wczytaj(ui->listWidget, mylist);
    delete ptr;
}

void MainWindow::on_actionZapis_do_pliku_triggered()
{
   Save *ptr = new Save;
   ptr->zapisz(mylist);
   QMessageBox::about(this, "Proba zapisania", "Zapis przebiegl pomyslnie");
   delete ptr;
}
