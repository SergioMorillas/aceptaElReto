// Autor: Marta Rojas
// 
// Problema100.cpp: Constante de Kaprekar
// 
// Entrada: La primera línea de la entrada contendrá el número de casos de prueba. Cada uno contendrá, 
// en una única línea, un número a comprobar.
// 
// Salida: Para cada caso de prueba, el programa indicará el número de vueltas que se debe dar a la rutina de 
// Kaprekar para alcanzar el 6174. Para los números repdigits deberá escribir 8. Para la propia constante de 
// Kaprekar deberá indicar 0.
//

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int ordenarMenor(int n) {
    int a = n % 10;
    n = n / 10;
    int b = n % 10;
    n = n / 10;
    int c = n % 10;
    n = n / 10;
    int d = n;

    int arr[] = { a,b,c,d };
    bubbleSort(arr, 4);
    return arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3];
}

int ordenarMayor(int n) {
    int a = n % 10;
    n = n / 10;
    int b = n % 10;
    n = n / 10;
    int c = n % 10;
    n = n / 10;
    int d = n;

    int arr[] = { a,b,c,d };
    bubbleSort(arr, 4);
    return arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0];
}

int main()
{
    const int Kaprekar = 6174;
    int casos;
    int n;

    cin >> casos;

    for (int i = 0; i < casos; i++) {
        cin >> n;

        if (n == Kaprekar) {
            cout << "0" << endl;
        }
        else if (n % 1111 == 0) {
            cout << "8" << endl;;
        }
        else {
            int mayor, menor;
            int aux = 0;

            while (n != Kaprekar) {
                mayor = ordenarMayor(n);
                menor = ordenarMenor(n);
                n = mayor - menor;
                aux++;
            }

            cout << aux << endl;
        }
    }

}
