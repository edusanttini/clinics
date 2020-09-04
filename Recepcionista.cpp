#include "Recepcionista.h"
using namespace std;

Recepcionista::Recepcionista() {
	
}

Recepcionista::Recepcionista(string workId) {
	this->workerId = workId;
}

void Recepcionista::setWorkerId(){

}

string Recepcionista::getWorkerId(){
	return workerId;
}
