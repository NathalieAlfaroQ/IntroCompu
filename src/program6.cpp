/*
 * Compilar g++ -o program6 program6.cpp
 * Ejecutar ./program6
 */

// Bibliotecas
#include <iostream>

using namespace std;

int main()
{
    int opcion;

    // Bucle principal
    while (true)
    {
        cout << "\n\tMenu:" << endl
            << "1- Adivine el numero. 2- Salir. 3- Alternativa." << endl;
        cin >> opcion;

        // Variables para CASE 1:
        // Cuenta cuantas veces lo intenta
        int batazos = 0;
        int numero = 0;
        // Valor por adivinar
        int adivine = 3;

        // Variables para CASE 3:
        // Variables que almacenan los datos digitados por el usuario:
        int numeroA, numeroB, resultadoSuma, resultadoResta, resultadoMultiplicacion;

        // Variables para realizar los calculos correctos:
        int suma = 0;
        int resta = 0;
        int multiplicacion = 0;

        switch (opcion)
        {
        // Adivine el numero, programa del profe
        case 1:
            cout << "Adivine mi numero" << endl;
            cout << "Digite un numero del 1 al 100" << endl;

            while (numero != adivine)
            {
                cin >> numero;
                batazos++;
            }

            cout << "Adivino en " << batazos << " batazos ";
            break;

        // Para salirse del programa
        case 2:
            cout << "Bye!" << endl;
            return 0;

        // Alternativa
        case 3:
            //cout << "hola" << endl;
            // Se solicitan los datos al usuario:
            do
            {
                cout << "Digite un numero natural menor a 100: ";
                cin >> numeroA;
            } while (numeroA > 100);

            do
            {
                cout << "Digite otro numero natural menor a 100: ";
                cin >> numeroB;
            } while (numeroB > 100);

            cout << "Digite el resultado de sumarlos: " << endl;
            cin >> resultadoSuma;
            cout << "Digite el resultado de restarlos: " << endl;
            cin >> resultadoResta;
            cout << "Digite el resultado de multiplicarlos: " << endl;
            cin >> resultadoMultiplicacion;

            suma = numeroA + numeroB;
            // cout << suma << endl;
            resta = numeroA - numeroB;
            // cout << resta << endl;
            multiplicacion = numeroA * numeroB;
            // cout << multiplicacion << endl;

            // Verificamos el resultado de la suma
            if (resultadoSuma != suma)
            {
                cout << "Resultado de la suma es incorrecto." << endl;
                cout << "El resultado correcto es " << suma << " y su respuesta fue " << resultadoSuma << endl;
            }
            else
            {
                cout << "Resultado de la suma es correcto." << endl;
            } // Fin if

            // Verificamos el resultado de la resta
            if (resultadoResta != resta)
            {
                cout << "Resultado de la resta es incorrecto." << endl;
                cout << "El resultado correcto es " << resta << " y su respuesta fue " << resultadoResta << endl;
            }
            else
            {
                cout << "Resultado de la resta es correcto." << endl;
            } // Fin if

            // Verificamos el resultado de la multiplicacion
            if (resultadoMultiplicacion != multiplicacion)
            {
                cout << "Resultado de la multiplicacion es incorrecto." << endl;
                cout << "El resultado correcto es " << multiplicacion << " y su respuesta fue " << resultadoMultiplicacion << endl;
            }
            else
            {
                cout << "Resultado de la multiplicacion es correcto." << endl;
            } // Fin if
            break;
        } // Fin switch
    } // Fin while

    // Fin del programa
    return 0;
} // Fin main