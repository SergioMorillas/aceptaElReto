// Autor: Marta Rojas
// 
// Problema572.cpp: Salvados por el 9
// 
// Entrada: La entrada comienza con un número indicando la cantidad de casos de prueba que deberán procesarse.
// Cada caso de prueba se describe en una línea que contiene las cinco notas de un alumno (un número real 
// entre 0 y 10 con exactamente un decimal).
// 
// Salida: Para cada caso de prueba, el programa escribirá MEDIA si según el nuevo sistema para ese alumno 
// hay que calcular la media de sus notas, y SUSPENSO DIRECTO si queda directamente suspenso por tener 0 en 
// alguna actividad y no haber sacado al menos un 9 en otra.
//

#include <iostream>

using namespace std;

int main()
{
    int casos;
    double nota, suma;
    bool peligro, notaza;

    cin >> casos;

    for (int i = 0;i < casos;i++) {

        peligro = false;
        notaza = false;

        for (int j = 0; j < 5;j++) {
            cin >> nota;
            if (nota == 0.0) {
                peligro = true;
            }
            if (nota >= 9.0) {
                notaza = true;
            }
        }
        if (peligro == true && notaza == false) {
            cout << "SUSPENSO DIRECTO" << endl;
        }
        else {
            cout << "MEDIA" << endl;
        }
    }
    
}
