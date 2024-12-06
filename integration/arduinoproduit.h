#ifndef ARDUINOPRODUIT_H
#define ARDUINOPRODUIT_H

#include <QString>
#include <QSerialPort>

class Arduinoproduit {
public:
    Arduinoproduit();  // Constructor
    ~Arduinoproduit(); // Destructor

    int connect_arduino();
    void close_arduino();
    void request_temperature_humidity();
    QString read_response();

private:
    QSerialPort *serial;  // Declare serial as a pointer to QSerialPort
};

#endif // ARDUINOPRODUIT_H
