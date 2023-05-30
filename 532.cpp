// Autor: Marta Rojas
// 
// Problema532.cpp: Reduciendo envases
// 
// Entrada: La entrada comenzará con un primer número indicando cuántos casos de prueba habrá que procesar.
// Cada caso de prueba son dos números, 1 ≤ N ≤ T ≤ 1.000 con el peso neto del producto que vas a comprar, 
// y el peso total medido con tu báscula de precisión.
// 
// Salida: Por cada caso de prueba, el programa deberá escribir el peso del envase.
//

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0;i < n;i++) {
        int neto, peso;
        cin >> neto;
        cin >> peso;

        cout << peso - neto << endl;
    }
    return 0;
}
