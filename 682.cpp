// Autor: Marta Rojas
// 
// Problema682.cpp: Metidos en un cajón
// 
// Entrada: La entrada comienza con un primer número que indica cuántos casos de prueba deberán ser procesados. 
// A continuación aparece una línea por cada caso de prueba, con un número entre 1 y 100.000.
// 
// Salida: Por cada caso de prueba el programa deberá escribir, separados por un espacio, cuántos picos y 
// cuántas patas tienen en total el número de patos indicado en la entrada.
//

#include <iostream>

using namespace std;

int main()
{
    int casos, patos;

    cin >> casos;

    while (casos!=0) {
        cin >> patos;
        cout << patos << " ";
        cout << 2 * patos << endl;
        casos--;
    }
}
