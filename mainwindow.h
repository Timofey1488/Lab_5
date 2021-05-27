#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include "list.h"
#include "queue.h"
#include "list.cpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

template class List<QString>;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_push_btn_clicked();


    void on_head_btn_clicked();

    void on_isEmpty_btn_clicked();

    void on_clean_btn_clicked();

    void on_tail_btn_clicked();

    void on_pop_btn_clicked();

    void on_next_btn_clicked();

    void on_prev_btn_clicked();

private:
    Ui::MainWindow *ui;
    List<QString> *list;
    Node<QString>*temp;
    int count;
};
#endif // MAINWINDOW_H
