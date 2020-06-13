#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QListWidget>
#include <QLineEdit>
#include <QRegExp>
#include <QDir>
#include <QtDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QStringList get_mylist();
    void exception();
private slots:
    void on_pushButton_clicked();

    void on_push_button_2_clicked();

    void on_tablica11_textChanged(const QString &arg1);

    void on_actionOdczyt_z_pliku_triggered();

    void on_actionZapis_do_pliku_triggered();

private:
    Ui::MainWindow *ui;
    QStringList mylist;
};
#endif // MAINWINDOW_H
