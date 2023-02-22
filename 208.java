// Autor: Marta Rojas
// 
// Problema208.java: Tirando bolos
// 
// Entrada: La entrada está compuesta de múltiples casos de prueba, cada uno en una línea.
// Cada caso de prueba se compone de dos números, f y b. El primero, f, indica el número de filas de bolos; 
// cada fila tiene un bolo más que la fila anterior. El segundo número, b, indica el número de la fila en la 
// que está el bolo que se golpea, que se considera siempre situado en un extremo. Se garantiza que 1 ≤ b ≤ f < 231.
// La entrada termina con un caso en el que no hay ninguna fila de bolos.
// 
// Salida: Para cada caso de prueba se escribirá, en una línea independiente, el número de bolos que quedan de
// pie tras tirar el bolo indicado, y que éste tire a todos los que tiene detrás. Se garantiza que la salida será 
// siempre menor que 231.
//
package AER2;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Principal {
	public static void main(String[] args) {
	
		int a, b,i=0;
		Scanner t = new Scanner(System.in);
		
		List<Integer> filas = new ArrayList<Integer>();
		List<Integer> golpeos = new ArrayList<Integer>();
		
		a=t.nextInt();
		b=t.nextInt();
		
		while (a != 0)
		{
		    filas.add(a);
		    golpeos.add(b);
		    i++;
		    a=t.nextInt();
			b=t.nextInt();
		}
		
		i = 0;

		while (i < filas.size())
		{
		    int lim=golpeos.get(i)-1;
		    int sum = 0;
		    int num=filas.get(i);
		    for (int j = 0; j < lim; j++)
		    {
		    	sum = sum + num;
		    	num--;
		    }
		    System.out.println(sum);
		    i++;
		}
		
	}

}
