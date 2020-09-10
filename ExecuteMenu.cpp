#include "ExecuteMenu.h"

void ExecuteMenu::executeMenu(char op) {
    option = op;

    system("CLS");
    switch (option) {

    case '1':
        //these are only for test purpose
        doc.getDoctorData();
        doc.printDoctorData();
        cout << "Dados cadastrados com sucesso! Pressione qualquer tecla para retornar ao menu inicial..." << endl;
        cin.ignore();
        break;

    case '2':
        pacient.makeUserRegistration();
        pacient.printUserData();
        cout << "Dados cadastrados com sucesso! Pressione qualquer tecla para retornar ao menu inicial..." << endl;
        cin.ignore();
        break;

    case '3':
        appointment.makeAnAppointment();
        appointment.printAppointment();
        cout << "Dados cadastrados com sucesso! Pressione qualquer tecla para retornar ao menu inicial..." << endl;
        cin.ignore();
        break;

    case '4':
        boleto.createBoleto();
        break;

    case '5':
        cout << "number5555";
        //exemple of how to overRide a superClass method for a derivedClass method(funcao virtiual)
        //ToDo -> encontrar um caso valido para sobrescrita de metodo!!
        //a funcao virtual no caso eh a vTest();
        p = &pacient;
        p->vTest();
        break;

    case '!':
        printf("EXITING PROGRAM.............\n");
        break;

    default:
        printf("Unreachable!!!!!!!!!!!!!\n");
        break;
    }
}
