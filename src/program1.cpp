/*
 * Diseñe un programa que muestre una salida con la siguiente secuencia numérica: 1, 5, 3,
 * 7, 5, 9, 7, ... misma que debe seguir hasta un valor n ingresado por teclado, momento el
 * cual la secuencia debe detenerse. La secuencia inicia en 1 y a través de un cálculo repetitivo
 * (se deben analizar los números para deducir ese cálculo) se van a generar los valores
 * indicados.
 *  a. Deduzca el cálculo e incorpórelo en el programa
 *  b. Defina un valor máximo o límite para n, que no debe ser inferior a 50
 *  c. Elija el mejor formato para desplegar el listado de valores indicado
 *  d. Debe incorporar el punto i) de las instrucciones
 */

// Compilar g++ -o program1 program1.cpp
// Ejecutar ./program1

// Bibliotecas
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Variable para guardar la respuesta del usuario de si desea continuar
	string pregunta;

	// Variable que indica si se vuelve a hacer otra secuencia a no
	bool seguir = true;

	// Ciclo para hacer más de una secuencia
	while (true)
	{
		// Variable que guarda el número que el usuario digita
		int numeroUsuario;
		// Se le indica qué tipo de número admite
		cout << endl
			 << "Dato correcto a digitar: Un numero entero positivo no mayor a 60." << endl;
		cout << "Digite la cantidad de numeros que desea en la secuencia: ";
		// Se guarda el número que digitó
		cin >> numeroUsuario;

		// Se verifica que el número sea positivo, mayor a 0 y que no sea mayor a 60
		if (numeroUsuario <= 0 || numeroUsuario > 60)
		{
			// Se muestra un mensaje de error
			cout << "Solo puede digitar un numero entero positivo no mayor a 60.";
			// Se termina el programa
			return 0;
		} // Fin if

		// Se imprime el primer número de la secuencia y un espacio para notar la secuencia
		cout << "1 ";

		/*
		 * Este ciclo for inicia en 1 ya que así se define que empieza la secuencia y la variable
		 * "numero" será la que contenga los números de la secuencia a imprimir, además se verifica
		 * que el ciclo no se pase del límite al cual el usuario quiere llegar, la tercera parte del
		 * for aparece vacía pero se agrega dentro de las llaves para poder cumplir con la secuencia
		 * donde vemos que se aumenta en 4 a "numero", se imprime con un espacio y se le resta 2 para
		 * luego volverlo a imprimir.
		 */
		for (int numero = 1; numero < numeroUsuario;)
		{
			// Sumo 4 unidades
			numero += 4;
			// Imprimo ese aumento anterior
			cout << numero << " ";
			// Resto 2 unidades
			numero -= 2;
			// Imprimo el decremento anterior
			cout << numero << " ";
		} // Fin for

		// Se pregunta si desea hacer otra secuencia
		cout << endl
			 << endl
			 << "¿Desea continuar? S/N" << endl;
		// Guardamos esa respuesta
		cin >> pregunta;

		if (pregunta == "S" || pregunta == "s")
		{
			seguir == true;
		}
		else if (pregunta == "N" || pregunta == "n")
		{
			cout << endl
				 << "Fin del programa.";
			return false;
		}
		else
		{
			cout << "Solo puede digitar una "
					"S"
					", "
					"N"
					" o alguna de esas en minusculas."
				 << endl;
			return false;
		} // Fin if
	}	  // Fin while
	return 0;
} // Fin main