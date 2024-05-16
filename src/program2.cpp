/*
 * Diseñe un programa que permita leer un número entero (un solo número digitado una sola
 * vez) desde el teclado, para entonces realizar estas acciones:
 *
 * a. Verificar que el número sea únicamente de 5 dígitos, si no lo es, debe repetir el
 * 	ingreso.
 * b. Contar cuántos de sus dígitos individuales son pares y cuántos impares, por ejemplo
 * 	si el número es 12633 debe indicar Pares: 2 Impares:3
 * c. Sumar el valor de cada dígito individual del número, y generar el promedio de esos
 * 	valore con dos cifras significativas
 * d. Recuerde incorporar el punto i) de las instrucciones
 */

// Compilar g++ -o program2 program2.cpp
// Ejecutar ./program2

// Bibliotecas
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Variable para guardar la respuesta del usuario de si desea continuar
	string pregunta;

	// Variable que indica si se vuelve a ejecutar o no el programa desde el inicio
	bool seguir = true;

	// Ciclo para repetir el programa
	while (true)
	{
		int numeroUsuario;
		int contadorDigitos = 0;
		int contadorPar = 0;
		int contadorImpar = 0;
		int sumarDigitos = 0;
		double promediarDigitos = 0.00;

		// Ciclo para repetir la pregunta si el usuario no digita un numero de 5 cifras
		do
		{
			// Solicita un numero al usuario
			cout << "Digite un numero entero positivo: ";
			cin >> numeroUsuario;

			// Guardamos el numero en otra variable para modificarlo
			int numero = numeroUsuario;

			// Reiniciamos el contador para el segundo calculo
			contadorDigitos = 0;

			// Bucle para contar los digitos
			while (numero > 0)
			{
				numero /= 10;
				contadorDigitos++;
			} // Fin while

			// Verificar que el numero del usuario solo contenga 5 digitos
			if (contadorDigitos != 5)
			{
				cout << "Solo se admite un numero entero de 5 cifras." << endl;
				continue;
			} // Fin if

			// Bucle para buscar los digitos pares e impares
			numero = numeroUsuario;
			while (numero > 0)
			{
				// Separando los digitos
				int digito = numero % 10;

				if (digito % 2 == 0)
				{
					// Es par	
					contadorPar++;
				}
				else
				{
					// Es impar
					contadorImpar++;
				} // Fin if

				// Sumar cada digito del numero...
				sumarDigitos += digito;
				numero /= 10;
			} // Fin while

			// ...para luego promediarlo
			promediarDigitos = sumarDigitos / 5.0;

			cout << "El numero " << numeroUsuario << " si es de 5 cifras." << endl;
			cout << "El numero " << numeroUsuario << " tiene " << contadorPar << " digitos pares." << endl;
			cout << "El numero " << numeroUsuario << " tiene " << contadorImpar << " digitos impares." << endl;
			cout << "El promedio de los digitos es: " << setprecision(2) << promediarDigitos << endl;

			// Todo esto se va a repetir si el usuario no digita un numero de 5 cifras
		} while (contadorDigitos != 5);

		// Se pregunta si desea hacer otra secuencia
		cout << endl
				 << "¿Desea continuar? S/N" << endl;
		cin >> pregunta;

		// Verificamos la respuesta
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
			cout << "Solo puede digitar "
							"S"
							" o "
							"N"
							" en mayuscula o minuscula."
					 << endl;
			return false;
		} // Fin if
	}		// Fin while
	return 0;
} // Fin main
