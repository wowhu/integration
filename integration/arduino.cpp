#include "arduino.h"

Arduino::Arduino()
{
    data = "";
    arduino_port_name = "";
    arduino_is_available = false;
    serial = new QSerialPort;
}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}

QSerialPort *Arduino::getserial()
{
    return serial;
}

int Arduino::connect_arduino()
{
    // Recherche du port sur lequel la carte Arduino identifiée par arduino_uno_vendor_id est connectée
    foreach (const QSerialPortInfo &serial_port_info, QSerialPortInfo::availablePorts()) {
        if (serial_port_info.hasVendorIdentifier() && serial_port_info.hasProductIdentifier()) {
            if (serial_port_info.vendorIdentifier() == arduino_uno_vendor_id && serial_port_info.productIdentifier() == arduino_uno_producy_id) {
                arduino_is_available = true;
                arduino_port_name = serial_port_info.portName();
            }
        }
    }
    qDebug() << "arduino_port_name is :" << arduino_port_name;
    if (arduino_is_available) { // configuration de la communication
        serial->setPortName(arduino_port_name);
        if (serial->open(QSerialPort::ReadWrite)) {
            serial->setBaudRate(QSerialPort::Baud9600);
            serial->setDataBits(QSerialPort::Data8);
            serial->setParity(QSerialPort::NoParity);
            serial->setStopBits(QSerialPort::OneStop);
            serial->setFlowControl(QSerialPort::NoFlowControl);
            return 0;
        }
        return 1;
    }
    return -1;
}

int Arduino::close_arduino()
{
    if (serial->isOpen()) {
        serial->close();
        return 0;
    }
    return 1;
}

QByteArray Arduino::read_from_arduino()
{
    QByteArray fullData;

    if (serial->isReadable()) {
        while (serial->canReadLine()) {
            QByteArray data = serial->readLine();
            fullData.append(data);
        }
    }

    return fullData;
}

void Arduino::request_temperature_humidity() {
    if (serial->isWritable()) {
        serial->write("GET\n");  // Send the "GET" command to Arduino
        qDebug() << "Sent GET command";
    } else {
        qDebug() << "Serial port not writable";
    }
}
QString Arduino::read_response() {
    if (serial->isReadable()) {
        QByteArray response = serial->readAll();  // Read the response from Arduino
        return QString(response);  // Return the response as a QString
    }
    return QString();
}

void Arduino::writeToArduino( QByteArray d) {
    if (serial->isWritable()) {
        serial->write(d);
    }else{
    qDebug() << "Failed to write to Arduino.";
}
}



QString Arduino::getArduinoPortName() {
    return arduino_port_name;
}
