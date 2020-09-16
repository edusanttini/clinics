#include "ExecuteMenu.h"

void ExecuteMenu::executeMenu() {

    system("CLS");
    p[0] = &doc;
    p[1] = &pacient;

    switch (Menu::option) {
    case '1':
        system("color 3F");
        doc.getDoctorData();
        p[0]->vPrintData(0);
        printSuccessMessage();
        break;

    case '2':
        system("color 3F");
        pacient.makeUserRegistration();
        pacient.getPacientPain();
        p[1]->vPrintData(0);
        printSuccessMessage();
        break;

    case '3':
        system("color 8F");
        appointment.makeAnAppointment();
        appointment.printHeaderAppointment();
        p[0]->vPrintData(1);
        p[1]->vPrintData(1);
        appointment.printAppointment();
        printSuccessMessage();
        break;

    case '4':
        system("color 8F");
        boleto.getdata();
        setPriceDueToConsult();
        calcExamPrice();
        boleto.putdata(boleto);
        printSuccessMessage();
        cin.ignore();
        break;

    case '!':
        printf("EXITING PROGRAM.............\n");
        break;

    default:
        printf("Unreachable!!!!!!!!!!!!!\n");
        break;
    }
}
