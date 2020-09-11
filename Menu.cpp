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
        (option == '4') || (option == '!'))
        return true;
    else
        system("CLS");
        return false;
}

char Menu::getOption() {
    return option;
}

void Menu::printMenu() {
    system("color 0F");
    system("CLS");
    cout << "------------------------ DOCSYSTEM ------------------------\n"
        "Tecle 1 para fazer o cadastro de medico\n"
        "Tecle 2 para fazer o cadastro de paciente\n"
        "Tecle 3 para agendar uma consulta\n"
        "Tecle 4 para gerar um boleto para pagamento\n"
        "Tecle ! para sair\n";
    cout << "------------------------ DOCSYSTEM ------------------------\n";
    cin >> option;

}

void logo() {

    cout << "\n------------------------------->>>>>  ///    BEM-VINDA AO DOCSYSTEM   ///   <<<<<------------------------------------\n\n\n"
         << "\n   %%%%%%%      %%%%%%%%%   %%%%%%%%%    %%%%%%%%    %%    %%    %%%%%%%%   %%%%%%%%%%  %%%%%%%%%   %%%%%%%%%%%"
         << "\n   %%     %%    %%     %%   %%           %%          %%    %%    %%             %%      %%          %%   %%  %%"
         << "\n   %%      %%   %%     %%   %%           %%          %%    %%    %%             %%      %%          %%   %%  %%"
         << "\n   %%      %%   %%     %%   %%           %%%%%%%%    %%%%%%%%    %%%%%%%%       %%      %%%%%%%%%   %%   %%  %%"
         << "\n   %%      %%   %%     %%   %%                 %%          %%          %%       %%      %%          %%   %%  %%"
         << "\n   %%     %%    %%     %%   %%                 %%          %%          %%       %%      %%          %%   %%  %%"
         << "\n   %%%%%%%      %%%%%%%%%   %%%%%%%%%    %%%%%%%%    %%%%%%%%    %%%%%%%%       %%      %%%%%%%%%   %%   %%  %%"
         << endl << endl;

    cout << "\nPressione qualquer tecla para continuar..." << endl;
    cin.ignore();
    system("CLS");
}

void Menu::printSuccessMessage() {
    cout << "Dados cadastrados com sucesso!" << endl;
    cout << "Pressione qualquer tecla para retornar ao menu inicial..." << endl;
}
