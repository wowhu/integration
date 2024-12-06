#include "arduinoproduit.h"
#include <QSerialPort>
#include <QDebug>

Arduinoproduit::Arduinoproduit() {
    serial = new QSerialPort();  // Initialize serial to a new QSerialPort instance
}

Arduinoproduit::~Arduinoproduit() {
    delete serial;
}

int Arduinoproduit::connect_arduino() {
    serial = new QSerialPort();
    serial->setPortName("COM4");
    if (serial->open(QSerialPort::ReadWrite)) {
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        return 0;  // Success
    } else {
        qDebug() << "Failed to open serial port:" << serial->errorString();
        return -1;  // Error
    }
}

void Arduinoproduit::close_arduino() {
    if (serial->isOpen()) {
        serial->close();
    }
}

