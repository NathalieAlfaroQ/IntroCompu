/*
 * Diseñe un programa en C++ que mediante lazos permita ingresar 4 números
 * enteros no  mayores  a  15, dónde dos serán el rango del multiplicando
 * y los otros el rango del multiplicador, para generar en pantalla las
 * tablas de multiplicar de los valores ingresados. Tome como guía esta
 * figura, donde se ingresa el 10 y el 12 que serían los multiplicandos
 * (10, 11 y 12)  y luego el 6 y el 4 para ser los multiplicadores (4, 5 y 6)
 *
 * a.Recuerde incorporar el punto i) de las instrucciones
 */

// Compilar g++ -o program4 program4.cpp
// Ejecutar ./program4

// Bibliotecas
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declaracion de funciones:
	int tablaMultiplicar(int numero);
	int verificarNumero(int indicador);

	// Variable para guardar la respuesta del usuario de si desea continuar
	string pregunta;

	// Variable que indica si se vuelve a hacer otra secuencia a no
	bool seguir = true;

	// Ciclo para hacer más de una secuencia
	while (true)
	{
		// Llamado de funciones:
		tablaMultiplicar(0);

		// Se pregunta si desea hacer otra secuencia
		cout << endl << "¿Desea continuar? S/N" << endl;
		cin >> pregunta;

		if (pregunta == "S" || pregunta == "s")
		{
			seguir = true;
		}
		else if (pregunta == "N" || pregunta == "n")
		{
			cout << endl << "Fin del programa.";
			return 0;
		}
		else
		{
			cout << "Solo puede digitar una ""S"" o ""N"" en mayuscula o minuscula." << endl;
			return 0;
		} // Fin if
	}		// Fin while
	// Fin programa
	return 0;
} // Fin main

int tablaMultiplicar(int numero)
{
	int multiplicando1, multiplicando2, multiplicador1, multiplicador2;

	cout << "Digite numeros enteros positivos no mayores a 15." << endl;
	cout << "Digite el inicio del rango del multiplicando 1: ";
	cin >> multiplicando1;
	if (multiplicando1 > 15)
	{
		cout << "Error: Solo puede digitra un numero menor a 15." << endl;
		return 0;
	}
	else
	{
		cout << "Digite el final del rango del multiplicando 2: ";
		cin >> multiplicando2;
		if (multiplicando2 > 15)
		{
			cout << "Error: Solo puede digitra un numero menor a 15." << endl;
			return 0;
		}
		else
		{
			cout << "Digite el inicio del rango del multiplicador 1: ";
			cin >> multiplicador1;
			if (multiplicador1 > 15)
			{
				cout << "Error: Solo puede digitra un numero menor a 15." << endl;
				return 0;
			}
			else
			{
				cout << "Digite el final del rango del multiplicador 2: ";
				cin >> multiplicador2;
				if (multiplicador2 > 15)
				{
					cout << "Error: Solo puede digitra un numero menor a 15." << endl;
					return 0;
				}
				else
				{
					// Bucle para presentar la tabla del multiplicando y su encabezado
					for (int i = multiplicando1; i <= multiplicando2; i++)
					{
						cout << "Tabla de multiplicar del: " << i << endl;
						cout << "Multiplicando  " << "Multiplicador  " << "Producto" << endl;
						cout << "-------------  " << "-------------  " << "--------" << endl;

						// Bucle para hacer la multiplicacion
						for (int j = multiplicador1; j <= multiplicador2; j++)
						{
							int producto = i * j;
							cout << left << setw(15) << i << left << setw(15) << j << left << setw(8) << producto << endl;
						} // Fin for
					}		// Fin for
				}			// Fin if
			}				// Fin if
		}					// Fin if
	}						// Fin if
	return 0;
} // Fin tablaMultiplicar