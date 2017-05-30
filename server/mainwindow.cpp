#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDialog>
#include<QMessageBox>
#include"connect.h"
#include<vector>
#include"commvar.h"

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{
    int x1=QVariant(ui->ancient->text()).toInt();
    int x2=QVariant(ui->cupid->text()).toInt();
    int x3=QVariant(ui->hunter->text()).toInt();
    int x4=QVariant(ui->idiot->text()).toInt();
    int x5=QVariant(ui->piedPiper->text()).toInt();
    int x6=QVariant(ui->savior->text()).toInt();
    int x7=QVariant(ui->serr->text()).toInt();
    int x8=QVariant(ui->theif->text()).toInt();
    int x9=QVariant(ui->townsfolk->text()).toInt();
    int x10=QVariant(ui->witch->text()).toInt();
    int x11=QVariant(ui->wolf->text()).toInt();
    int x12=QVariant(ui->playernum->text()).toInt();

    vector<int> chara;
    for(int i=1;i<=x11;i++)
        chara.push_back(0);
    for(int i=1;i<=x9;i++)
        chara.push_back(1);
    for(int i=1;i<=x1;i++)
        chara.push_back(2);
    for(int i=1;i<=x2;i++)
        chara.push_back(3);
    for(int i=1;i<=x3;i++)
        chara.push_back(4);
    for(int i=1;i<=x4;i++)
        chara.push_back(5);
    for(int i=1;i<=x6;i++)
        chara.push_back(6);
    for(int i=1;i<=x7;i++)
        chara.push_back(8);
    for(int i=1;i<=x10;i++)
        chara.push_back(9);
    for(int i=1;i<=x5;i++)
        chara.push_back(10);
    for(int i=1;i<=x8;i++)
        chara.push_back(11);






    if(x1+x2+x3+x4+x5+x6+x7+x8+x9+x10+x11==x12)
    {
       temp.setConfig(x12,chara,1-ui->sheriffselection->currentIndex(),ui->model->currentIndex(),ui->servername->text());

       close();
       Connect *conn = new Connect;
       conn->show();


       temp.config.serverConn->beginAcceptConnection();
       while(temp.config.connNum<temp.config.playerNum)
         conn->showConnect(&temp.config.hasConn,x12);

       temp.config.endAcceptConnection();









    }

    else
    {
        QMessageBox::warning(this,tr("Error"),tr("Please check all config"),QMessageBox::Yes);
    }






}
