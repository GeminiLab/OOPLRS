﻿/*************************************************
 * 名称： serverlistproxy.h
 * 作者： 赵欣昊
 * 时间： 20170616
 * 内容描述： ServerListProxy类（UiProxy类的子类），负责接收由Player类传来的消息，控制UI中的ServerList对象；接收UI中ServerList传来的消息，传给Player类
 * 版权： 这是我们自行完成的程序，没有使用其他来源代码
 ************************************************/

#ifndef SERVERLISTPROXY_H
#define SERVERLISTPROXY_H

#include "uiproxy.h"
#include <QVector>

class ServerListProxy : public UiProxy
{
    Q_OBJECT
public:
    using UiProxy::UiProxy;
    void connectSignal();

signals:

public slots:
    void receiveMessage(QString str1, QString str2 = "", QString str3 = "", QString str4 = "", QString str5 = "");
    void connectServerSucceed();
    void connectServer(int index);
    void getServer();

private:
    QObject* confirmButton;
    QObject* refreshButton;
    QVector<QString> serverList;
    void setServerList(QString str);
    void serverListHide();
};

#endif // SERVERLISTPROXY_H
