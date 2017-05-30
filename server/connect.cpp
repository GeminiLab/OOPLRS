#include "connect.h"
#include "ui_connect.h"
#include"record.h"
#include<vector>
#include<iostream>
#include"mainwindow.h"
#include"commvar.h"
#include"over.h"


using namespace std;


Connect::Connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Connect)
{
    ui->setupUi(this);
    void showConnect(int* player,int a);
}

Connect::~Connect()
{
    delete ui;
}

void Connect::on_start_clicked()
{
    close();
    QTextBrowser *rec = new Record;
    rec->show();

    temp.reshuffle();
    temp.startGame->startGame();
    temp.endGame(temp.mainProcess());

    rec->close();
    Over* ov = new Over;
    ov->show();


}

void Connect::showConnect(int* player,int a)
{
    ui->textBrowser->setPlainText("");

    ui->textBrowser->append(tr("Connecting..."));




    for(int i=0;i<a;i++)
    {
        if(*player==0)
        {
            ui->textBrowser->append("player");
            ui->textBrowser->moveCursor(QTextCursor::End);
            ui->textBrowser->insertPlainText(QString::number(i+1,10));
            ui->textBrowser->moveCursor(QTextCursor::End);
            ui->textBrowser->insertPlainText(" hasn't connected");
        }
        else if(*player==1)
        {
            ui->textBrowser->append("player");
            ui->textBrowser->moveCursor(QTextCursor::End);
            ui->textBrowser->insertPlainText(QString::number(i+1,10));
            ui->textBrowser->moveCursor(QTextCursor::End);
            ui->textBrowser->insertPlainText(" has connected");
        }
        player++;
    }


}

void Connect::on_cancel_clicked()
{
    close();
    MainWindow *m = new MainWindow;
    m->show();
}
