#include <iostream>
#include "Menu.h"
#include "ExecuteMenu.h"

int main() {

	logo();

	Menu menuController;

	ExecuteMenu Execute;

	/*ToDo -> debugar(se necessario) para encaixar o comando 'system("cls");' em alguma parte do loop
	*o objetivo eh limpar a tela toda vez(check for exceptions) que o user digitar algum comando...*/

	do {
		do {
			menuController.printMenu();
		} while (!menuController.isInputCorrect());
		Execute.executeMenu(menuController.getOption());
	} while (menuController.getOption() != '!');

	cout << "\n\n----EXITTTT----";
	return 0;
}
