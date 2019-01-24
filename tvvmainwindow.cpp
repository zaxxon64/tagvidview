#include "tvvmainwindow.h"
#include "ui_tvvmainwindow.h"

TvvMainWindow::TvvMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TvvMainWindow)
{
    ui->setupUi(this);
}

TvvMainWindow::~TvvMainWindow()
{
    delete ui;
}
