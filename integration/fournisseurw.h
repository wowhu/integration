#ifndef FOURNISSEURW_H
#define FOURNISSEURW_H

#include <QMainWindow>

namespace Ui {
class fournisseurw;
}

class fournisseurw : public QMainWindow
{
    Q_OBJECT

public:
    explicit fournisseurw(QWidget *parent = nullptr);
    ~fournisseurw();

private:
    Ui::fournisseurw *ui; // Pointer to UI class
};

#endif // FOURNISSEURW_H
