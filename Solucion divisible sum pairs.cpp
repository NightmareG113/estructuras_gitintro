// Solucion divisible sum pairs.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    int ar[] = { 1,2,3,4,5,6 };
    int k = 5;
    int n = 6;
    int contador = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if ((i + j) % k == 0) {
                contador++;
            }
        }
    }
    cout << contador << endl;
    cout << "Ricardo Castro Jiménez" << endl;
    return 0;
}

