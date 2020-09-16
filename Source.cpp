#include <iostream>
#include "ExecuteMenu.h"

int main() {	
	ExecuteMenu menuController;
	menuController.logo();

	do {
		do {
			menuController.printMenu();
		} while (!menuController.isInputCorrect());
		menuController.executeMenu();
	} while (menuController.getOption() != '!');

	cout << "\n\n----EXITTTT----";
	return 0;
}