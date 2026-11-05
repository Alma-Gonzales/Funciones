//Funciones
// Apunte 2 clase 5/11/2026
// Alma Leticia Douglas Gonzales Guilbert
// Realizar un programa que calcule el area de las figuras geometricas: 
//Circulo, cuadrado, rectangulo, triangulo y trapecio.
// 
// Cada figura debera contener su fucion qye reciba como parametros los valores 
// necesesarios para calcular el area y debera retornar ese resultado. 

// Agregar una funcion que contenga un menu para que el usurio pueda elegir. 


#include <iostream>
#include <string>
using namespace std;

float circulo(float radio) {
	return 3.141597 * radio * radio;
}

float cuadrado(float lado) {
	return lado * lado;
}

float rectangulo(float base, float altura) {
	return base * altura;
}

float triangulo(float base, float altura) {
	return base * altura / 2;

}

float trapecio(float bMayor, float bMenor, float altura) {
	return (bMayor + bMenor) * altura / 2;

}
void menu() {
	cout << "Areas de Figuras Geometricas" << endl;
	cout << "1. Circulo" << endl;
	cout << "2. Cuadrado" << endl;
	cout << "3. Rectangulo" << endl;
	cout << "4. Triangulo" << endl;
	cout << "5. Trapecio" << endl;
	cout << "¿Que Opcion eliges?" << endl;
}

int main() {

	int opc;
	menu();
	cin >> opc;

	switch (opc) {
	case 1: cout << "El area del circulo es: " << circulo(3.5) << endl;
		break;
	case 2: cout << "El area del cuadrado es: " << cuadrado(9.7) << endl;
		break;
	case 3: cout << "El area del rectangulo es: " << rectangulo(4.9, 5.1) << endl;
		break;
	case 4: cout << "El area del triangulo es: " << triangulo(5.1, 1.3) << endl;
		break;
	case 5: cout << "El area del trapecio es: " << trapecio(6, 3, 4) << endl;
		break;
	default: cout << "Opcion incorrecta" << endl; 
		break; 
	}

	return 0;
}