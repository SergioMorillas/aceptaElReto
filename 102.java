// Autor: Sergio Morillas
//
// Problema102.java: Encriptación de mensajes
//
// Entrada:La entrada está formada por un número indeterminado de casos de prueba.
//
// Cada caso de prueba consiste en una única línea cuyo primer carácter es el código de la letra 'p',
// seguido de un mensaje codificado con el método Cesar descrito antes utilizando el desplazamiento adecuado
// para que la letra 'p' se codifique con ese primer carácter.
//
// Los casos de prueba terminan con un mensaje codificado que, una vez traducido, contiene exactamente la
// cadena "FIN". Cuando se lee este mensaje codificado el programa debe terminar sin generar ninguna otra
// salida más.
//
// Salida: Para cada caso de prueba, el programa indicará el número de vocales no acentuadas que contiene el 
// mensaje codificado.


import java.util.Scanner;
import java.lang.*;


public class Encriptacion102 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        while (true) {
            String p = s.nextLine();
            // Si la palabra es pFIN salimos
            if (p.equals("pFIN")) System.exit(0);
            // Si la primera letra es p contamos las vocales y devolvemos el resultado
            if (p.charAt(0) == 'p') {
                System.out.println(cuentaVocales(p));
            } else {
                // Si la primera letra no es 'p' lo decodificamos y contamos
                // las vocales del resultado de la decodificacion
                String d = decodificar(p);
                System.out.println(cuentaVocales(d));
            }
        }
    }

    public static int cuentaVocales(String p) {
        // Creamos una cadena con todas las vocales, tanto en mayusculas como en minusculas
        String regex = "aeiouAEIOU";
        int cont = 0;
        for (int i = 0; i < p.length(); i++) {
            // Si el caracter actual coincide que existe en la cadena de vocales sumará uno al contador
            if (regex.indexOf(p.charAt(i)) != -1) {
                cont++;
            }
        }
        return cont;
    }

    public static String decodificar(String d) {
        // Restamos el valor ascii de la primera letra al valor ascii de 'p'
        int dif = d.charAt(0) - 'p';
        // Creamos un array de bytes con longitud de la palabra "d"
        byte[] p = new byte[d.length()];
        for (int i = 0; i < d.length(); i++) {
            // Creamos el caracter nuevo restando el valor del caracter actual al valor de la diferencia
            int nChar =  d.charAt(i) - dif;
            if (Character.isUpperCase(d.charAt(i))) {
                // Si el valor del nuevo caracter es menor de 65 entra en el if,
                // entonces calculamos para que haga los valores ciclicos
                if (nChar < 65) {
                    p[i] = (byte) (90 - (64 - nChar));
                } else if (nChar > 90) {
                    p[i] = (byte) (nChar - 91 + 65);
                    // En caso de que no sea ni menor a 65 ni mayor de 90 guardamos el valor directamente
                } else {
                    p[i] = (byte) (nChar);
                }
            } else if (Character.isLowerCase(d.charAt(i))) {
                if (nChar < 97) {
                    p[i] = (byte) (122 - (96 - nChar));
                } else if (nChar > 122) {
                    p[i] = (byte) (nChar - 123 + 97);
                } else {
                    p[i] = (byte) (d.charAt(i) - dif);
                }
            } else {
                p[i] = (byte) (d.charAt(i));
            }
        }
        String devolver = new String(p);
        if (devolver.equals("pFIN")) System.exit(0);
        return devolver;
    }
}
