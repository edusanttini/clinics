#include "Appointment.h"

void Appointment::makeAnAppointment() {
	system("cls");
	cin.ignore();
	cout << "\n\t\t----- Bem vinda ao sistema de agendamento -----\n\n";
	fflush(stdin);
	cout << "Digite a data dd/mm/aaaa para agendar a consulta: \n";
	getline (cin, date);
	cout << "Digite o horario hh:mm para agendar a consulta: \n";
	getline (cin, clock);
	system("cls");
}

void Appointment::printHeaderAppointment() {
	cout << "----------------------------------------" << endl;
	cout << "\tDados do agendamento: " << endl;
}

void Appointment::printAppointment() {
	cout << "----------------------------------------\n\n" << endl;
	cout << "Sua consulta esta marcada para o dia " << date;
	cout << " as " << clock << "\n\n";
	cout << "DocSystem agradece pela sua escolha!";
	cout << "\n\n----------------------------------------\n";
}