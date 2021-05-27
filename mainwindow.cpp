#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "list.h"
#include "queue.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    list = new List<QString>();
    Node<QString>*temp;
    int count = 0;
    ui->head_btn->hide();
    ui->tail_btn->hide();
    ui->next_btn->hide();
    ui->prev_btn->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_push_btn_clicked()
{
    QString EnterString = ui->textEdit->toPlainText();
    QStringList str_list;
    QStringList strList = EnterString.split('\n');
    for(int i = 0; i< strList.count(); i++)
    {
        list->push_back(strList[i]);
    }
    ui->head_btn->show();
    ui->tail_btn->show();
    ui->next_btn->show();
    ui->prev_btn->show();
    temp =list->Head();
    count = 0;
}

void MainWindow::on_head_btn_clicked()
{
    if(list->Head()->data!=nullptr)
    {
         ui->label->setText(list->Head()->data);
    }
    else ui->label->setText("List is empty");

}

void MainWindow::on_isEmpty_btn_clicked()
{
    if(list->isEmpty())
    {
         ui->label->setText("List is empty");
    }
    else ui->label->setText("List is not empty");
}

void MainWindow::on_clean_btn_clicked()
{
    if(list->GetSize()==0)
    {
       ui->label->setText("List is already empty");
    }
    else
    {
        while(list->GetSize()!=0)
        {
            list->pop_front();
        }
    }
    ui->textEdit->clear();
    ui->head_btn->hide();
    ui->tail_btn->hide();
}

void MainWindow::on_tail_btn_clicked()
{
    ui->label->setText(list->Tail()->data);
}

void MainWindow::on_pop_btn_clicked()
{
    if(list->GetSize()==1)
    {
        ui->head_btn->hide();
        ui->tail_btn->hide();
        ui->next_btn->hide();
        ui->prev_btn->hide();
    }
    list->pop_front();
}

void MainWindow::on_next_btn_clicked()
{

   QString current = temp->pNext->data;
   temp =temp->pNext;
   if(count == list->GetSize()-1)
   {
       temp = list->Head();
       current = temp->data;
   }
   ui->label->setText(current);
   count++;
}

void MainWindow::on_prev_btn_clicked()
{
     QString current = temp->pPrev->data;
     temp = temp->pPrev;

     ui->label->setText(current);
     count--;
}
