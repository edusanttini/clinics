#include "ExecuteMenu.h"

void ExecuteMenu::executeMenu() {

    system("CLS");

    switch (Menu::option) {

    case '1':
        system("color 2F");
        D.getDoctorData();
        P[0] = &D;
        P[0] -> vTest();
        printSuccessMessage();
        cin.ignore();
        break;

    case '2':
        system("color 3F");
        E.makeUserRegistration();
        P[1] = &E;
        P[1] -> vTest();
        printSuccessMessage();
        cin.ignore();
        break;

    case '3':
        system("color 8F");
        appointment.makeAnAppointment();
        appointment.printAppointment();
        P[0] -> vTest();
        P[1] -> vTest();
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
