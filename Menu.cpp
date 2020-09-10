#include "Menu.h"
#include <conio.h>
#include <string.h>

Menu::Menu() {

}

void Menu::test() {

    cout << "not okay";
}

bool Menu::isInputCorrect() {
    if ((option == '1') || (option == '2') || (option == '3') ||
        (option == '4') || (option == '5') || (option == '!'))
        return true;

    else
        system("CLS");
    return false;

}

char Menu::getOption() {
    return option;
}

void Menu::printMenu() {
    system("CLS");
    cout << "------------------------ DOCSYSTEM top ------------------------\n"
        "Tecle 1 para fazer o cadastro de medico\n"
        "Tecle 2 para fazer o cadastro de paciente\n"
        "Tecle 3 para agendar uma consulta\n"
        "Tecle 4 para gerar um boleto para pagamento\n"
        "Tecle ! para sair\n";

    cin >> option;
    // getline(cin, option);
    cout << "------------------------ DOCSYSTEM down ------------------------\n";
}

void logo() {

    system("color 1F");

    cout << "\n------------------------------->>>>>  ///    BEM-VINDA AO DOCSYSTEM   ///   <<<<<------------------------------------\n\n\n"


        << "\n   %%%%%%%      %%%%%%%%%   %%%%%%%%%    %%%%%%%%    %%    %%    %%%%%%%%   %%%%%%%%%%  %%%%%%%%%   %%%%%%%%%%%"
        << "\n   %%     %%    %%     %%   %%           %%          %%    %%    %%             %%      %%          %%   %%  %%"
        << "\n   %%      %%   %%     %%   %%           %%          %%    %%    %%             %%      %%          %%   %%  %%"
        << "\n   %%      %%   %%     %%   %%           %%%%%%%%    %%%%%%%%    %%%%%%%%       %%      %%%%%%%%%   %%   %%  %%"
        << "\n   %%      %%   %%     %%   %%                 %%          %%          %%       %%      %%          %%   %%  %%"
        << "\n   %%     %%    %%     %%   %%                 %%          %%          %%       %%      %%          %%   %%  %%"
        << "\n   %%%%%%%      %%%%%%%%%   %%%%%%%%%    %%%%%%%%    %%%%%%%%    %%%%%%%%       %%      %%%%%%%%%   %%   %%  %%"
        << endl;

    cout << "\n Criado por: \n Angelica \n Carol \n Dhessica \n Eduardo \n Rafael " << endl;

    cout << "\nPressione qualquer tecla para continuar..." << endl;

    cin.ignore();

    system("CLS");
}
