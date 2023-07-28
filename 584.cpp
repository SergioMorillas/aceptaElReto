// Autor: Marta Rojas y Sergio Morillas
// 
// Problema584.cpp: Duración de bombillas LED
// 
// Entrada: La entrada comienza con una línea indicando el número de casos de prueba que vendrán a continuación.
// Cada caso de prueba ocupa una única línea y contiene tres enteros. El primero es el número de horas que aguanta 
// la bombilla encendida (hasta 109). El segundo es el número de encendidos que es capaz de soportar (nunca mayor 
// de 108). Por último, aparece el número de horas que, estimo, mantendré la lámpara encendida en cada uso (como mucho 10).
// 
// Salida: Por cada caso de prueba se debe decir la causa de la muerte de la bombilla LED.
// Si ésta termina su vida debido a que se alcanza el número máximo de horas encendida se escribirá 
// HORAS. Si es debido a que ya no admite más encendidos, se escribirá ENCENDIDOS. Por último si es por ambas cosas se escribirá AMBAS.
//

#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d;

    cin >> n;

    while (n>0) {
        cin >> a;
        cin >> b;
        cin >> c;

        d = b * c;

        if (a < d) {
            cout << "HORAS" << endl;
        }
        else if (a > d) {
            cout << "ENCENDIDOS" << endl;
        }
        else{
            cout << "AMBAS" << endl;
        }

        n--;
    }
}
