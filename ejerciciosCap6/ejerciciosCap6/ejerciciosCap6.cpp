// ejerciciosCap6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
float calculateCharges(float hoursStayed) {
	float charge;
	if (hoursStayed < 3) {
		charge = 2.00;
		return charge;
	}
	if (hoursStayed > 3) {
		charge = (2.00 + (0.50 * (hoursStayed - 3.00)));
		return charge;
	}
}
int potencia(int base, int exponente) {
	int resultado = 1;
	for (int i = 0; i < exponente; i++) {
		resultado *= base;
	}
	return resultado;
}

bool factor(int x, int y) {
	if (!(x % y)) {
		return 1;
	}
	else {
		return 0;
	}
}

int esPrimo(int &num) {
	int x = num / 2;
	bool aux = 1;
	for (int i = 2; i < x; i++) {
		if (num % i == 0) {
			aux = 0;
			break;
		}
	}
	if (aux)
	{
		return num;
	}
}

int revertir(int x) {
	int resultado=0;
	int aux = 0;
	int base = 10;
	for (; x > 0; x /= 10) {
		resultado = (aux * base) + (x % 10);
		aux = resultado;
	}
	return resultado;
}

int potenciaRecursiva(int a, int b) {
	if (b==0) {
		return 1;
	}
	else {
		return a * potenciaRecursiva(a , b - 1);
	}
}

int fibonacci(int x) {
	double resultado = 0;
	double z = 1;
	double y;
	while (resultado < x) {
		y = resultado;
		resultado = resultado + z;
		z = y;
		cout << resultado << endl;
	}
	return 0;
}

void hanoi(int num, char A, char C, char B)
{
	if (num == 1)
	{
		cout << "Mueva el bloque " << num << " desde " << A << " hasta  " << C << endl;

	}
	else
	{
		hanoi(num - 1, A, B, C);
		cout << "Mueva el bloque " << num << " desde " << A << " hasta  " << C << endl;
		hanoi(num - 1, B, C, A);
	}
}

int mcd(int x, int y) {
	if (x > y) {
		if (y == 0) {
			return x;
		}
		else {
			return mcd(y, x % y);
		}
	}
	else {
		return 0;
	}
}


int main()
{
	cout << "ejercicio 6.12\n";
	float time1;
	float time2;
	float time3;
	float charges;
	char car1;
	char car2;
	char car3;
	float totalHours;
	float totalCharges;
	float charge;
	cout << "¿cuantas horas has estado estacionado \n";
	cin >> time1;
	cin >> time2;
	cin >> time3;
	charge = calculateCharges(time1);
	totalHours = time1 + time2 + time3;
	totalCharges = (time1 * charge);
	cout << "ejercicio 6.18\n";
	cout << potencia(2, 4) << endl;
	cout << "ejercicio 6.20\n";
	cout << factor(30, 15) << endl;
	cout << "ejercicio 6.29\n";
	for (int i = 2; i <= 10000; i++)
	{
		esPrimo(i);
		cout << i << endl;
	}
	cout << "ejercicio 6.30\n";
	revertir(1234);
	cout << "ejercicio 6.36\n";
	cout << potenciaRecursiva(2, 5);
	cout << "ejercicio 6.37\n";
	fibonacci(5);
	cout << "ejercicio 6.39\n";
	int n;
	char A, B, C;
	cout << "Los clavijas son A B C \n";
	cout << "Numero de discos: ";
	cin >> n;
	hanoi(n, 'A', 'C', 'B');
	cout << "ejercicio 6.41\n";
	cout << mcd(2310, 98);

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
