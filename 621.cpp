// Autor: Marta Rojas
// 
// Problema621.cpp: La otra página
// 
// Entrada: La entrada comienza con una línea indicando el número de casos de prueba que vendrán a continuación.
// Cada caso de prueba consiste en un único número (entre 2 y 1000) con la numeración de una de las páginas que 
// se ve en el libro abierto.
// 
// Salida: Por cada caso de prueba se escribirá, en una línea independiente, el número de la otra página visible.
//

#include <iostream>

using namespace std;

int main()
{
    int casos, n;

    cin >> casos;

    for (int i = 0;i < casos;i++) {
        cin >> n;
        if (n % 2 == 0) {
            cout << n + 1 << endl;
        }
        else {
            cout << n - 1 << endl;
        }
    }
    
}
