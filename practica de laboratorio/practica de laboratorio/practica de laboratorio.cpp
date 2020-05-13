// practica de laboratorio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <iomanip>
#include <array>   
using namespace std;
void print(array<int, 1000>a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << "\t";
    }
}
void printArr(array<int, 8>arr, int i = 0)
{
    if (i == arr.size() - 1)
    {
        cout << arr[arr.size() - 1];
    }
    else {
        cout << arr[i] << " ";
        printArr(arr, i + 1);
    }
}
void recursiveMaximum(array<int,5>arr2, int i = 0, int j = 4)
{
    int aux = arr2[j];
    if (i == j)
    {
        cout << aux << endl;
    }
    else
    {
        if (arr2[i] > arr2[j])
        {
            aux = arr2[i];
            recursiveMaximum(arr2, i,j - 1);
        }
        else {
            recursiveMaximum(arr2,i + 1,j);
        }
    }

}

int main()
{
    cout << "ejercicio 7.27\n";
    array<int, 1000>p;
    for (int i = 0; i < p.size(); i++)
    {
        p[i] = 1;
    }
    print(p);

    for (int i = 1, j = 2; i < p.size(); i++, j++)
    {
        if (j % 2 == 0 || j % 3 == 0 || j % 5 == 0 || j % 7 == 0 || j % 11 == 0 || j % 13 == 0 || j % 17 == 0 || j % 19 == 0 || j % 23 == 0 || j % 31 == 0)
        {
            p[i] = 0;
        }
    }
    p[0] = 0;
    for (int i = 1; i < 31; i++)
    {
        if (i == 1 || i == 2 || i == 4 || i == 6 || i == 10 || i == 12 || i == 16 || i == 18 || i == 22 || i == 30)
        {
            p[i] = 1;
        }
    }
    cout << endl << endl;
    print(p);
    cout << endl << endl;
    for (int i = 1; i < p.size(); i++)
    {
        if (p[i] == 1)
            cout << i + 1 << " ";
    }
    cout << endl << endl;
    cout << "ejercicio 7.30\n";
    array<int, 8>arr1{ 24,48,58,96,23,48,4,5 };
    printArr(arr1);
    cout << endl << endl;
    cout << "ejercicio 7.32\n";
    array<int, 5>arr2{ 45,5569,633,18599,659 };
    recursiveMaximum(arr2);
    return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
