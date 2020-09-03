#include <iostream>
#include "Menu.h"

void main() {
	Menu menuController;
	do {
		do {
			menuController.printMenu();
		} while (!menuController.isInputIncorrect());
		menuController.executeMenu();
	} while (menuController.getOption() != 0);

	cout << "----EXITTTT---";
}