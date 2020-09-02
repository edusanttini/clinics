#include "Menu.h"

/*ToDo -> nova camada
* 
* 
* criar uma camada(classe) entre as classes Menu e Source, com o nome ExecuteMenu, herdando de Menu
* atentar c @var option, que vai se tornar um atributo privado da classe ExecuteMenu mas tambem sera utilizado em Menu
* atentar c os imports
* passar para a classe ExecuteMenu apenas o metodo executeMenu()

*/

Menu::Menu() {
    //this->option = option;
}

void Menu::test() {
    
    cout << "not okay";
}

bool Menu::isInputIncorrect() {
    if ((option == 1) || (option == 2) || (option == 3) || 
        (option == 4) || (option == 5) || (option == 0))
        return false;
    else
        return true;
}

int Menu::getOption() {
    return option;
}

void Menu::printMenu() {
	cout << "------------------------ Clinics XX96 ------------------------\n";
	/*ToDo -> interface com o user
					
				e.g. "Tecle A para agendar uma consulta"
					 Tecle B para ..
					 .
					 .
					 .
					 .
					 .
					 .
					 Tecle ! para sair"
	*/
    cin >> option;
    // getline(cin, option);
}

void Menu::executeMenu() {
    switch (option) {
    case 1:
        paciente.getData();
        paciente.putData();
        break;

    case 2:
        cout << "number22222";
        break;

    case 3:
        cout << "number3333";
        //Menu::test();
        break;

    case 4 :
        cout << "number4444";
        break;

    case 5 :
        cout << "number5555";
        break;

    case 0 :
        printf("EXITING PROGRAM.............\n");
        break;

    default:
        printf("Digite um valor Valido!!!!!!!!!!!!!\n");
        break;
    }
}