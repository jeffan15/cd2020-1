// invertir un array.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
void swap(int& x, int& y)
{
	int z = x;
	x = y;
	y = z;
}
void invertirIterativa(int arr[], int len)
{
	for (int i = 0; i < len / 2; i++, len--)
		swap(arr[i], arr[len - 1]);
}
void invertirRecursiva(int arr[], int len, int i = 0)
{
	if (i >= len)
		return;
	swap(arr[i], arr[len - 1]);
	invertirRecursiva(arr, len - 1, i + 1);
}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int arr1[] = { 7,8,9,10,11,12,13 };
	invertirIterativa(arr, 5);
	for (int i = 0; i < 5; i++)
		cout << arr[i] << "\t";
	cout << endl;
	invertirRecursiva(arr1, 5);
	for (int i = 0; i < 5; i++)
		cout << arr1[i] << "\t";
	cout << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
