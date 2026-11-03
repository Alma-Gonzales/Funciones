//Funciones
// Apunte clase 3
// Realiza las operaciones artimeticas basicas utilizando funciones para cada operacion
// Utilicar un menu para el usuario elija la operacion
// Validar la division por cero
// Alma Leticia Douglas Gonzales Guilbert

#include<iostream>
using namespace std;

int a,b; //Variables gobales

void lectura() {
	cout << "Ingrese el primer valor: "; cin >> a;
	cout << "Ingrese el segundo valor: "; cin >> b;
}

void suma() {

	cout << "La suma es: " << a + b << endl;

}

void resta() {

	cout << "La resta es: " << a - b << endl;

}

void multiplicacion() {
	
	cout << "La multiplicacion es: " << a * b << endl;

}

void division() {
	
	if (b != 0) {

		cout << "La division es: " << a / b << endl;
	}
	else {
		cout << "Es division por cero " << endl;
	}

}

int main() {

	int op;
	cout << " Operaciones Aritmeticas " << endl;
	cout << "1. Suma" << endl;
	cout << "2. Resta" << endl;
	cout << "3. Multiplicacion" << endl;
	cout << "4. division " << endl;

	cout << "Seleccione una opcion: ";
	cin >> op;

	lectura();

	switch (op) {

	case 1: suma(); break;
	case 2: resta(); break;
	case 3: multiplicacion(); break;
	case 4: division(); break;
	default: cout << "Opcion incorrecta!" << endl;

	}


	return 0;
}