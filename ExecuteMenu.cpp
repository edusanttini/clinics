#include "ExecuteMenu.h"

void ExecuteMenu::executeMenu() {

    system("CLS");
    p[0] = &doc;
    p[1] = &pacient;

    switch (Menu::option) {

    case '1':
        try{
            system("color 2F");
            doc.getDoctorData();
            p[0]->vPrintData();
            printSuccessMessage();
        }
        catch (const std::exception&){
            throw new exception("Fail: ExecuteMenu::executeMenu('1')");
        }        
        break;

    case '2':
        try{
            system("color 3F");
            pacient.makeUserRegistration();
            pacient.getPacientPain();
            p[1]->vPrintData();
            printSuccessMessage();
        }
        catch (const std::exception&){
            throw new exception("Fail: ExecuteMenu::executeMenu('2')");
        }        
        break;

    case '3':
        
        system("color 8F");
        appointment.makeAnAppointment();
        appointment.printAppointment();
        printSuccessMessage();        
        break;

    case '4':
        system("color 8F");
        boleto.getdata();        
        setPriceDueToConsult();
        boleto = consulta + boleto;
        boleto = consulta - boleto;
        boleto = consulta / boleto;
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
