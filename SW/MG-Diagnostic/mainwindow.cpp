#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bt_device.h"

BT_device myBT;

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

void MainWindow::build()
{

}
