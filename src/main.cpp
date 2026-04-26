#include "ui/mainwindow.h"
#include "../include/controller/SystemController.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    qDebug() << "App Started";

    QApplication a(argc, argv);

    SystemController controller;

    std::string doctorsFile = "../IOFiles/doctors.csv";
    std::string patientsFile = "../IOFiles/patients.csv";
    std::string appointmentsFile = "../IOFiles/appointments.csv";
    std::string availabilityFile = "../IOFiles/availability.csv";

    controller.getSys().initializeSystem(
        doctorsFile,
        patientsFile,
        appointmentsFile,
        availabilityFile
    );

    MainWindow w(&controller);
    w.show();

    QObject::connect(&a, &QApplication::aboutToQuit, [&controller]() {
        controller.getSys().saveData("../IOFiles/patients.csv", "../IOFiles/appointments.csv");
    });

    return a.exec();
}
