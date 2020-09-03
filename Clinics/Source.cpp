#include <iostream>
#include "Menu.h"

void main() {
	Menu menuController;
	do {
		do {
			menuController.printMenu();
		} while (menuController.isInputIncorrect());
		//cout << "EXITEDLOOP11111";
		menuController.executeMenu();
	} while (menuController.getOption() != 0);

	cout << "----EXITEDDDLOOP222222---";
	//Paciente newP;
}