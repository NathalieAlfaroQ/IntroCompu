/*
 * Diseñe un programa que genere un menú para calcular el área y volumen de diferentes
 * cuerpos geométricos, dónde el usuario debe poder elegir entre calcular el área o volumen
 * de: 1. Esfera, 2. Cubo, 3. Cilindro, 4. Figura Libre (a su elección) y la opción para 5. Salir
 * Si el usuario selecciona las opciones del 1 al 4, el programa le pide los datos necesarios,
 * para calcular el área y/o volumen del cuerpo geométrico seleccionado y luego mostrar los
 * resultados en pantalla.
 * Después, el programa tendrá que mostrar nuevamente el menú al usuario para que pueda
 * elegir otra opción, continuando así hasta digitar 5.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int calcular;
	int figura;
	do
	{
		do
		{
			// Para guardar la eleccion a calcular
			cout << "   Menu" << endl
					 << "Calcular 1- Volumen 2- Area 5- Salir: ";
			cin >> calcular;

			// Para terminar la ejecucion
			if (calcular == 5)
			{
				cout << "Se sale del programa." << endl;
				return 0;
			} // Fin if

			// Para elegir una figura
			cout << "\n Elija una figura:" << endl
					 << " 1- Esfera \n 2- Cubo \n 3- Cilindro \n 4- Prisma base hexagonal \n 5- Salir" << endl;
			cin >> figura;

			// Creacion de variables
			float radioEsfera, ladoCubo, radioCilindro, alturaCilindro, ladoPrisma, apotemaPrisma,
					alturaPrisma;
			double volumenEsfera, volumenCubo, areaBaseCilindro, volumenCilindro, perimetroPrisma,
					areaBasePrisma, volumenPrisma, areaEsfera, areaCubo, areaCilindro, area1, area2,
					areaLateralPrisma, areaTotalPrisma;

			// Para calcular volumen
			if (calcular == 1)
			{
				switch (figura)
				{
				// Volumen esfera
				case 1:
					cout << "Digite el radio de la esfera como numero positivo: ";
					cin >> radioEsfera;
					volumenEsfera = (4.0 / 3.0) * (3.14) * (radioEsfera * radioEsfera * radioEsfera);
					cout << "El volumen de la esfera es: " << volumenEsfera << " metros cubicos." << endl;
					break;

				// Volumen cubo
				case 2:
					cout << "Digite el lado del cubo como numero positivo: ";
					cin >> ladoCubo;
					volumenCubo = ladoCubo * ladoCubo * ladoCubo;
					cout << "El volumen del cubo es: " << volumenCubo << " metros cubicos." << endl;
					break;

				// Volumen cilindro
				case 3:
					cout << "Digite el radio del cilindro como numero positivo: ";
					cin >> radioCilindro;
					cout << "Digite la altura del cilindro como numero positivo: ";
					cin >> alturaCilindro;
					areaBaseCilindro = (3.14) * (radioCilindro * radioCilindro);
					volumenCilindro = areaBaseCilindro * alturaCilindro;
					cout << "El volumen del cilindro es: " << volumenCilindro << " centimetros cubicos." << endl;
					break;

				// Volumen prisma base hexagonal
				case 4:
					cout << "Digite el lado del prisma como numero positivo: ";
					cin >> ladoPrisma;
					cout << "Digite el apotema del prisma como numero positivo: ";
					cin >> apotemaPrisma;
					cout << "Digite la altura del prisma como numero positivo: ";
					cin >> alturaPrisma;
					perimetroPrisma = ladoPrisma * 6;
					areaBasePrisma = (perimetroPrisma * apotemaPrisma) / 2;
					volumenPrisma = areaBasePrisma * alturaPrisma;
					cout << "El volumen del prisma es " << volumenPrisma << " centimetros cubicos." << endl;
					break;

				// Para salirse del programa
				case 5:
					cout << "Se sale del programa." << endl;
					return 0;
				} // Fin switch
			}
			// Para calcular el area
			else if (calcular == 2)
			{
				switch (figura)
				{
				// Area esfera
				case 1:
					cout << "Digite el radio de la esfera como numero positivo: ";
					cin >> radioEsfera;
					areaEsfera = 4 * (3.14) * (radioEsfera * radioEsfera);
					cout << "El area del prisma es " << areaEsfera << " centimetros cuadrados." << endl;
					break;

				// Area cubo
				case 2:
					cout << "Digite el lado del cubo como numero positivo: ";
					cin >> ladoCubo;
					areaCubo = 6 * (ladoCubo * ladoCubo);
					cout << "El area del cubo es: " << areaCubo << " centimetros cuadrados." << endl;
					break;

				// Area cilindro
				case 3:
					cout << "Digite el radio del cilindro como numero positivo: ";
					cin >> radioCilindro;
					cout << "Digite la altura del cilindro como numero positivo: ";
					cin >> alturaCilindro;
					area1 = 2 * (3.14) * radioCilindro;
					area2 = radioCilindro + alturaCilindro;
					areaCilindro = area1 * area2;
					cout << "El area del cilindro es: " << areaCilindro << " centimetros cuadrados." << endl;
					break;

				// Area prisma base hexagonal
				case 4:
					cout << "Digite el lado del prisma como numero positivo: ";
					cin >> ladoPrisma;
					cout << "Digite el apotema del prisma como numero positivo: ";
					cin >> apotemaPrisma;
					cout << "Digite la altura del prisma como numero positivo: ";
					cin >> alturaPrisma;
					perimetroPrisma = ladoPrisma * 6;
					areaLateralPrisma = perimetroPrisma * alturaPrisma;
					areaBasePrisma = (perimetroPrisma * apotemaPrisma) / 2;
					areaTotalPrisma = areaLateralPrisma + 2 * (areaBasePrisma);
					cout << "El area del prisma es " << areaTotalPrisma << " centimetros cuadrados." << endl;
					break;

				// Para salirse del programa
				case 5:
					cout << "Se sale del programa." << endl;
					return 0;
				} // Fin switch
			}
			// Si no digita 1, 2 o 5 en calcular
			else
			{
				cout << "Error: Datos invalidos, solo puede digitar numeros positivos y los desplegados en el menu." << endl;
				return 0;
			} // Fin if
		} while (true);
	} while (calcular != 5);
	// Fin del programa
	return 0;
}