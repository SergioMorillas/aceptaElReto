// Autor: Marta Rojas
// 
// Problema662.cpp: La media prometida
// 
// Entrada: Cada caso de prueba comienza con un número indicando cuántos exámenes ha hecho Adolfina hasta el 
// momento, entre 1 y 10. A continuación aparecen las calificaciones que ha conseguido, separadas por espacio,
// que serán siempre valores enteros entre 0 y 10. Tras la lista aparece, en una línea independiente, la nota 
// media que ha prometido a sus padres conseguir.
// La entrada termina con un 0.
// 
// Salida: Por cada caso de prueba el programa escribirá la nota que debe sacar Adolfina en el último examen 
// para conseguir la media que ha prometido. Si resulta imposible, se escribirá "IMPOSIBLE".
// En el examen solo puede sacar una nota entera entre 0 y 10.
//

#include <iostream>

using namespace std;

int main()
{
    int num,resultado,resta,a;

    cin >> num;

    while (num != 0) {
        resultado = 0;
        resta = 0;
        a = 0;
        for (int i = 0;i < num;i++) {
            cin >> a;
            resta = resta + a;
        }
        cin >> a;
        resultado = (num + 1) * a - resta;
        if (resultado > 10 || resultado<0) {
            cout << "IMPOSIBLE" << endl;
        }
        else {
            cout << resultado << endl;
        }
        cin >> num;
    }
}
