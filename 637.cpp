// Autor: Sergio Morillas
// 
// Problema637.cpp: El telegrama más corto
// 
// Entrada: La entrada comienza con un número indicando cuántos casos de prueba deberán ser procesados.
// A continuación aparece una línea por cada caso de prueba, conteniendo una frase de no más de 80 letras 
// mayúsculas del alfabeto inglés, signos de admiración e interrogación y espacios. Se garantiza que no 
// aparecen dos espacios seguidos, y que la línea no empieza ni termina en espacio.
// 
// Salida: Por cada caso de prueba el programa escribirá la duración en puntos del telegrama. Según la 
// publicación de 1922 del estándar del código Morse, una raya dura tres puntos, entre símbolo y símbolo 
// (raya o punto) de una misma letra hay que esperar un punto, la separación temporal entre letras son 
// tres puntos, y la separación entre palabras cinco.
//

#include <iostream>
#include <string>

using namespace std;

int valor(char a) {
    switch (a) {
    case 'A':
    case 'S':
    case 'N':
        return 5;
    case 'B':
    case 'F':
    case 'G':
    case 'K':
    case 'L':
    case 'V':
    case 'W':
        return 9;
    case 'C':
    case 'O':
    case 'P':
    case 'X':
    case 'Z':
        return 11;
    case 'D':
    case 'H':
    case 'M':
    case 'R':
    case 'U':
        return 7;
    case 'E':
        return 1;
    case 'I':
    case 'T':
        return 3;
    case 'J':
    case 'Q':
    case 'Y':
        return 13;
    case '!':
        return 19;
    case '?':
        return 15;
    default:
        return 0;
    }
}

int main()
{
    int n;

    cin >> n;
    cin.ignore();

    while (n>0) {
        char a[81];
        cin.getline(a, 81,'\n');

        int i = 0;
        bool antEsp = false;
        int result = 0;

        while (a[i] != '\0') {
            if (a[i] == ' ') {
                antEsp = true;
                result += 5;
            }
            else if (i == 0 || antEsp) {
                result += valor(a[i]);
                antEsp = false;
            }
            else{
                result += 3;
                result += valor(a[i]);
            }
            i++;
        }
        cout << result <<endl;
        n--;
    }
    return 0;
}
