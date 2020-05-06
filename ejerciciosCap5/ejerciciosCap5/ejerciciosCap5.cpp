// ejerciciosCap5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	cout << "ejercicio 5.11 \n";
	int cantidad, menor, numero;
	cout << "Ingrese la cantidad de numeros que desea evaluar: ";
	cin >> cantidad;
	for (int i = 0; i < cantidad; i++) {
		cout << "Ingrese un numero: ";
		cin >> numero;
		if (i == 0) {
			menor = numero;
		}
		if (numero < menor) {
			menor = numero;
		}
	}
	cout << "El numero menor es: " << menor <<"\n";
	cout << "ejercicio 5.15 \n";
	int tam = 10;
	int asterisco1 = 1;
	int asterisco2 = 10;
	int asterisco3 = 10;
	int asterisco4 = 1;
	int espb = 0;
	int espc = 0;
	int espd = tam - 1;
	cout << "ejercicio 5.15-a \n";
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < asterisco1; j++) {
			cout << "*";
		}
		cout << endl;
		asterisco1++;
	}
	cout << endl;
	cout << "ejercicio 5.15-b \n";
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < asterisco2; j++) {
			cout << "*";
		}
		for (int k = 0; k <= espb; k++) {
			cout << " ";
		}
		asterisco2--;
		espb++;
		cout << endl;
	}
	cout << endl;
	cout << "ejercicio 5.15-c \n";
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < asterisco3; j++) {
			cout << "*";
		}
		asterisco3--;
		cout << endl;
		for (int k = 0; k <= espc; k++) {
			cout << " ";
		}
		espc++;
	}
	cout << endl;
	cout << "ejercicio 5.15-d \n";
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < espd; j++) {
			cout << " ";
		}
		for (int k = 0; k < asterisco4; k++) {
			cout << "*";
		}
		asterisco4++;
		espd--;
		cout << endl;
	}


	cout << "ejercicio 5.19 \n";
	double pi(0.0);
	int x = 0;
	int contador = 0;
	for (int i = 1; i <= 200000; i += 2) {
		if (i == 1 || x == 4) {
			pi += (4 / (double)i);
			x = 2;
		}
		else {
			pi -= (4 / (double)i);
			x += 2;
		}
		if (pi <= 4) {
			contador++;
		}
	}
	cout << setprecision(200000) << pi << endl;
	cout << contador << endl;
	cout << "ejercicio 5.29 \n";
	for (int i = 0; i < 2; i++) {
		cout << fixed << setprecision(2);
		double principal = 24.00;
		double rate;
		for (rate = 0.05; rate <= 0.1; rate = rate + 0.01) {
			cout << "Initial principal: " << principal << endl;
			cout << "	Interest rate:	" << rate << endl;
			for (unsigned int year = 1; year <= 394; year++) {
				double amount = principal * pow(1.0 + rate, year);
				cout << setw(4) << year << setw(20) << amount << endl;
			}
		}
	}
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
