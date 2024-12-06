#include "fournisseurw.h"
#include "ui_fournisseurw.h"

fournisseurw::fournisseurw(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::fournisseurw)
{
    ui->setupUi(this);
}

fournisseurw::~fournisseurw()
{
    delete ui;
}
