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

}

void Menu::test() {
    
    cout << "not okay";
}

bool Menu::isInputCorrect() {
    if ((option == '1') || (option == '2') || (option == '3') ||
        (option == '4') || (option == '5') || (option == '!'))
        return true;
    else
        return false;
}

char Menu::getOption() {
    return option;
}

void Menu::printMenu() {
	cout << "------------------------ Clinics XX96 ------------------------\n";
	/*ToDo -> interface com o user
					
				e.g. "Tecle 1 para fazer o cadastro
                      Tecle 2 para agendar uma consulta
                      Tecle 3 para gerar um boleto para pagamento
					  Tecle 3 para ser feliz muito feliz
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
    cout << "------------------------ Clinics XX96 ------------------------\n";
}

void Menu::executeMenu() {
    switch (option) {
    case '1':
        pacient.makeUserRegistration();
        pacient.printUserData();
        break;

    case '2':
        pacient.makeAnAppointment();
        break;

    case '3':
        boleto.createBoleto();
        break;

    case '4' :
        //these are only for test purpose
        doc.getDoctorData();
        doc.printDoctorData();
        cout << "number4444";
        break;

    case '5' :
        cout << "number5555";
        //exemple of how to overRide a superClass method for a derivedClass method(funcao virtiual)
        //ToDo -> encontrar um caso valido para sobrescrita de metodo!!
        //a funcao virtual no caso eh a vTest();
        p = &pacient;
        p->vTest();
        break;

    case '!' :
        printf("EXITING PROGRAM.............\n");
        break;

    default:
        printf("Unreachable!!!!!!!!!!!!!\n");
        break;
    }
}