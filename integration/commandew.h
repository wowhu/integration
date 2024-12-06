#ifndef COMMANDEW_H
#define COMMANDEW_H

#include <QMainWindow>

namespace Ui {
class commandew;
}

class commandew : public QMainWindow
{
    Q_OBJECT

public:
    explicit commandew(QWidget *parent = nullptr);
    ~commandew();

private:
    Ui::commandew *ui; // Pointer to UI class
};

#endif // COMMANDEW_H
