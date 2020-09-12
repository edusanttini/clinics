#include "ExecuteMenu.h"

void ExecuteMenu::executeMenu() {

    system("CLS");

    switch (Menu::option) {

    case '1':
        system("color 2F");
        doc.getDoctorData();
        P[0] = &doc;
        P[0] -> vPrintData();
        printSuccessMessage();
        cin.ignore();
        break;

    case '2':
        system("color 3F");
        pacient.makeUserRegistration();
        P[1] = &pacient;
        P[1] -> vPrintData();
        printSuccessMessage();
        cin.ignore();
        break;

    case '3':
        system("color 8F");
        appointment.makeAnAppointment();
        appointment.printAppointment();
        P[0] -> vPrintData();
        P[1] -> vPrintData();
        printSuccessMessage();
        cin.ignore();
        break;

    case '4':
        system("color 1F");
        A.getconsulta();
        B.getdata();
        A.putdata();
        C = A + B;
        C = A - B;
        C = A/B;
        printSuccessMessage();
        fflush(stdin);
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
