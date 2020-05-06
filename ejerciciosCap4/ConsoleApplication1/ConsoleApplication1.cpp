// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.


#include <iostream>
#include <cmath>
using namespace std;
bool factor(int x, int y)
{
	return !(y % x);
}

int main()
{
	cout << "ejercicio 4.26 \n";
	int x;
	cout << "Ingresar el diametro de los lados del cuadrado \n";
	cin >> x;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			if (j == 0 || j == (x - 1) || i == 0 || i == (x - 1)) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << "ejercicio 4.27 \n";
	int a, n, b;
	int c = 0;
	int d = 10;
	cout << "Ingrese un numero de cinco digitos: ";
	cin >> a;
	n = a;
	while (a != 0) {
		b = (c * d) + (a % 10);
		c= b;
		a /= 10;
	}
	if (c == n) {
		cout << "Es palindromo \n";
	}
	else {
		cout << "No es palindromo \n";
	}
	cout << "ejercicio 4.28 \n";
	int exp, digito;
	double binario, decimal;
	cout << "Introduce numero: ";
	cin >> binario;
	exp = 0;
	decimal = 0;
	while (((int)(binario / 10)) != 0)
	{
		digito = (int)binario % 10;
		decimal = decimal + digito * pow(2.0, exp);
		exp++;
		binario = (int)(binario / 10);
	}
	decimal = decimal + binario * pow(2.0, exp);
	cout << decimal << "\n";
	cout << "ejercicio 4.30 \n";
	double fib = 0;
	double e = 1;
	double f;
	while (1) {
		f = fib;
		fib = fib + e;
		e = f;
		cout << fib << endl;
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
