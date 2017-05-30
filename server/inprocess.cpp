#include "inprocess.h"
#include "ui_inprocess.h"
#include "over.h"
#include "commvar.h"

#include <QThread>

void GameThr::run() {
    temp.endGame(temp.mainProcess());

    emit onGameEnd();
}

InProcess::InProcess(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InProcess)
{
    ui->setupUi(this);
}

InProcess::~InProcess()
{
    delete ui;
}

void InProcess::startGame() {
    temp.reshuffle();
    if (temp.config.user[0].conn)
        temp.startGame->startGame();

    thr = new GameThr();
    thr->start();
}

void InProcess::onGameEnd() {
    close();

    Over* ov = new Over;
    ov->show();
}
