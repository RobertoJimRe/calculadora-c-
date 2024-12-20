#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    bool loop_election = true;
    cout << "\t\tCalduladora basica de consola\t\t" << endl;
    cout << "\nInstrucciones: \n\tSe solicitara el tipo de operacion a realizar (suma, resta, multiplicacion, division, raiz cuadrada),\n posteriormente se solicitara la o las cantidades a ingresar segun sea el caso.\n"
         << endl;

    while (loop_election)
    {
        char continuar{}; // USAR AL FINAL DE CADA CASE PARA REALIZAR OTRA OPERACION O FINALIZAR EL PROGRAMA (s/n)
        size_t user_selection{};
        cout << "\nIngresa el numero segun la operacion que deseas realizar: \n\tSuma(1)\n\tResta(2)\n\tMultiplicacion(3)\n\tDivision(4)\n\tRaiz cuadrada(5)\n\t" << endl;
        cin >> user_selection;
        if (user_selection != 1 && user_selection != 2 && user_selection != 3 && user_selection != 4 && user_selection != 5)
        {
            cout << "Ingresa un numero valido!" << endl;
        }
        else
        {
            switch (user_selection)
            {
            case 1:
            {
                cout << "suma" << endl;
                double a, b;
                cout << "= = = suma = = =" << endl;
                cout << "Numero 1: ";
                cin >> a;
                cout << "Numero 2: ";
                cin >> b;
                cout << "La suma de " << a << " + " << b << " = " << a+b;
                cout << "\n\nDeseas realizar otra operacion? (s/n): ";
                cin >> continuar;
            }
            case 2:
            {
                double a, b;
                cout << "= = = resta = = =" << endl;
                cout << "Numero 1: ";
                cin >> a;
                cout << "Numero 2: ";
                cin >> b;
                cout << "La resta de " << a << " - " << b << " = " << a-b;
                cout << "\n\nDeseas realizar otra operacion? (s/n): ";
                cin >> continuar;
            }
            case 3:
            {
                cout << "multiplicacion" << endl;
                break;
            }
            case 4:
            {
                double dividiendo, divisor;
				cout << "division" << endl;
                cout << "Ingresa el numero al que se va a estar dividiendo\n";
                cin >> dividiendo;
                cout << "Ingresa el numero por el que se va dividir\n";
                cin >> divisor;
                cout << "La division de " << divisor << "/" << dividiendo;
                cout << "\nEl resultado de la operacion es: "<< divisor/dividiendo;
                cout << "\n\nDeseas realizar otra operacion? (s/n): ";
                cin >> continuar;
                break;
            }
            case 5:
            {
                double user_number{}, squr{};
                cout << "Ingresa un numero para calcular su raiz cuadrada: ";
                cin >> user_number;
                squr = sqrt(user_number);
                cout << "La raiz cuadrada del numero " << user_number << " es: " << squr << endl;
                cout << "\n\nDeseas realizar otra operacion? (s/n): ";
                cin >> continuar;
                break;
            }
            default:
            {
                cout << "Ingresa un numero valido\n"
                     << endl;
                break;
            }
            }
        }
        if (continuar == 'n')
        {
            cout << "Hasta pronto!!" << endl;
            loop_election = false;
            break;
        }
    }
    return 0;
}
