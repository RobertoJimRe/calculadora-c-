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
                break;
            }
            case 2:
            {
                cout << "resta" << endl;
                break;
            }
            case 3:
            {
                cout << "multiplicacion" << endl;
                break;
            }
            case 4:
            {
                cout << "division" << endl;
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