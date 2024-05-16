/*
 * Obtenga un listado fuente en C++ de un programa que lea del
 * teclado un número y una letra, para luego, mediante lazos (for/while),
 * despliegue en pantalla de la misma forma mostrada en la siguiente imagen,
 * los datos indicados:
 *
 * El abecedario debe aparecer tanto para letras minúsculas como mayúsculas:
 *
 * a.El número leído no debe superar el valor de 25
 * b.Recuerde incorporar el punto i) de las instrucciones
 */

// Compilar g++ -o program5 program5.cpp
// Ejecutar ./program5

// Bibliotecas
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Declaracion de funciones:
	void imprimeListado(int numero);
	void imprimeAbecedario();

	// Variable para guardar la respuesta del usuario de si desea continuar
	string pregunta;

	// Variable que indica si se vuelve a hacer otra secuencia a no
	bool seguir = true;

	// Para guardar el numero del usuario
	int numero;

	// Ciclo para hacer más de una secuencia
	while (true)
	{
		// Solicitamos un numero al usuario
		cout << "Digite un numero entero positivo no mayor a 25: ";
		cin >> numero;

		// Verificamos que el numero sea mayor a 25
		if (numero > 25)
		{
			cout << "Solo puede digitar un numero menor a 25." << endl;
			return 0;
		} // Fin if

		// Llamado de funciones:
		imprimeListado(numero);
		imprimeAbecedario();

		// Se pregunta si desea hacer otra secuencia
		cout << endl
				 << "¿Desea continuar? S/N" << endl;
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
	}		// Fin while
	// Fin programa
	return 0;
} // Fin main

void imprimeListado(int numero)
{
	// Bucle para imprimir el listado y su espacio personalizado
	int contador = 0;
	int espacios = 1;
	for (int indice = 0; indice <= numero; indice++)
	{
		cout << setw(espacios) << contador << endl;
		espacios++;
		contador++;
	} // Fin for
} // Fin imprimeListado

void imprimeAbecedario()
{
	// Solicitamos al usuario una letra
	char letraMinuscula;
	cout << "Digite una letra minuscula: ";
	cin >> letraMinuscula;

	// Buscamos su equivalente a mayuscula
	char letraMayuscula = letraMinuscula - 32;

	// Se imprime el abecedario apartir de la letra minuscula digitada
	for (letraMinuscula; letraMinuscula <= 'z'; letraMinuscula++)
	{
		cout << letraMinuscula << ", ";
	} // Fin for

	cout << "\n";

	// Se imprime el abecedario apartir de la letra minuscula digitada pero ahora en mayuscula
	for (letraMayuscula; letraMayuscula <= 'Z'; letraMayuscula++)
	{
		cout << letraMayuscula << ", ";
	} // Fin for
} // Fin imprimeAbecedario