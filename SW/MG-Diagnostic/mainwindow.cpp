#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bt_device.h"
#include <QDebug>
#include <QAction>

BT_device myBT;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    build();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::build()
{
    /// Disable buttons at first
    ui->actionDisconnect->setEnabled(false);
    ui->actionReconnect->setEnabled(false);
}


void MainWindow::on_actionConnect_triggered()
{
    bool happened = myBT.connect();
    if (happened){
        ui->actionDisconnect->setEnabled(true);
        ui->actionConnect->setEnabled(false);
        ui->actionReconnect->setEnabled(false);
    }
}


void MainWindow::on_actionDisconnect_triggered()
{
    myBT.disconnect();
    ui->actionConnect->setEnabled(true);
    ui->actionReconnect->setEnabled(true);
    ui->actionDisconnect->setEnabled(false);
}


void MainWindow::on_actionReconnect_triggered()
{
    myBT.reconnect();
    ui->actionConnect->setEnabled(false);
    ui->actionDisconnect->setEnabled(true);
    ui->actionReconnect->setEnabled(false);
}

