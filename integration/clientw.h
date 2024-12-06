#ifndef CLIENTW_H
#define CLIENTW_H

#include <QMainWindow>

namespace Ui {
class clientw;
}

class clientw : public QMainWindow
{
    Q_OBJECT

public:
    explicit clientw(QWidget *parent = nullptr);
    ~clientw();

private:
    Ui::clientw *ui; // Pointer to UI class
};

#endif // CLIENTW_H
