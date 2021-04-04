#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QDebug>
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


void MainWindow::on_pushButton_clicked()
{
  QMessageBox::information(this,"Raphael 212218104136","This is INFORMATION Box..");
}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"4136","Do you like Vegetables?");
    if(reply==QMessageBox::Yes)
    {
        QMessageBox::information(this,"Vegetables","Yes");
    }
    if(reply==QMessageBox::No)
    {
        QMessageBox::information(this,"Vegetables","No");
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Raphael_Thacker","This is a CUSTOM message",QMessageBox::Yes|QMessageBox::YesToAll|QMessageBox::No|QMessageBox::NoToAll);
    if(reply==QMessageBox::Yes)
    {
        qDebug()<<"Nothing Is Displayed..";
    }
    if(reply==QMessageBox::YesToAll)
    {
        QMessageBox::warning(this,"Raphael 4136","Display the message with warning as YesToAll");
    }
    if(reply==QMessageBox::No)
    {
        qDebug()<<"Nothing Is Displayed..";
    }
    if(reply==QMessageBox::NoToAll)
    {
        QMessageBox::warning(this,"Raphael 4136","Dont Display the message with warning as YesToAll");
    }
}
void MainWindow::on_pushButton_4_clicked()
{
   QMessageBox::warning(this,"Raphael 212218104136","This is a WARNING message!");
}

void MainWindow::on_pushButton_5_clicked(bool checked)
{
    QIcon *ico = new QIcon();
           ico->addPixmap(QPixmap("C:\\Users\\ELCOT\\Desktop\\icon.png"),QIcon::Normal,QIcon::On);
           if(QIcon::On==true) {
               qDebug() <<"Button Checked--ON-- ";
           }
           else
           {
               qDebug() <<"Button Checked--OFF-- ";
           }
           ico->addPixmap(QPixmap("C:\\Users\\ELCOT\\Desktop\\off.png"),QIcon::Normal,QIcon::Off);
           ui->pushButton_5->setIcon(*ico);
           ui->pushButton_5->setCheckable(true);
}
