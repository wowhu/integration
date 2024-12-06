#include "clientw.h"
#include "ui_clientw.h"

clientw::clientw(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::clientw)
{
    ui->setupUi(this);
}

clientw::~clientw()
{
    delete ui;
}
