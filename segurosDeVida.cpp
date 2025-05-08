#include <iostream>
using namespace std;
// libreria de entrada y salida

int main()
{
    float salario = 0, vida = 0, funeral = 0, invalidez = 0, invalidez2 = 0;
    int opcion = 0;
    cout << "ingrese su sueldo, no puede ser menor a $400" << endl;
    cin >> salario;

    cout << "que quiere saber?" << endl;
    cout << "(1)Seguro de vida" << endl;
    cout << "(2)seguro por muerte" << endl;
    cout << "(3)gastos Funerarios" << endl;
    cout << "(4)seguro por invalidez" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        if (salario >= 400 && salario <= 910.00)
        {
            vida = 10000.00;
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            vida = 14000.00;
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            vida = 18000.00;
        }
        else if (salario >= 1630.01)
        {
            vida = 22000.00;
        }
        cout << "Su seguro de vida es de:$" << vida;
        break;
    case 2:
        if (salario >= 400 && salario <= 910.00)
        {
            vida = 10000.00;
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            vida = 14000.00;
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            vida = 18000.00;
        }
        else if (salario >= 1630.01)
        {
            vida = 22000.00;
        }
        cout << "Si llega a haber algun falleciminto, se le cubriran los gastos con el monto de:$ " << vida;
        break;
    case 3:
        if (salario >= 400 && salario <= 910.00)
        {
            vida = 10000.00;
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            vida = 14000.00;
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            vida = 18000.00;
        }
        else if (salario >= 1630.01)
        {
            vida = 22000.00;
        }
        funeral = vida * 0.15;
        if (funeral >= 1750.00)
        {
            funeral = 1750.00 + vida;
        }
        cout << "los gastos funerarios los cuales se le brindara aparte de su seguro de vida seran de:$ " << funeral;
        break;
    case 4:
        if (salario >= 400 && salario <= 910.00)
        {
            vida = 10000.00;
        }
        else if (salario >= 910.01 && salario <= 1255.00)
        {
            vida = 14000.00;
        }
        else if (salario >= 1255.01 && salario <= 1630.00)
        {
            vida = 18000.00;
        }
        else if (salario >= 1630.01)
        {
            vida = 22000.00;
        }
        invalidez = vida * 0.5;
        invalidez2 = (vida * 0.5) / 12;
        cout << "Se le devolveran inmediatamente:$ " << invalidez << " como tambien ira recibiendo en cuotas a lo largo de 12 meses de:$ " << invalidez2;
        break;
    default:
        cout << "opcion no valida" << endl;
        break;
    }
    return 0;
}