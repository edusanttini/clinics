#include <iostream>
#include "Menu.h"
#include "ExecuteMenu.h"

int main() {

	logo();
	ExecuteMenu menuController;
	do {
		do {
			menuController.printMenu();
		} while (!menuController.isInputCorrect());
		menuController.executeMenu();
	} while (menuController.getOption() != '!');

	cout << "\n\n----EXITTTT----";
	return 0;
}
