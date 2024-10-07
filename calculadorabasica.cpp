#include <iostream>

using namespace std;

int main(){
    char numero1, numero2, resultado;
    float suma, resta, multiplicacion, division, positivo, negativo, cero;
{
    cout << "operaciones";
    cout << "ingrese los numero: " << numero1 + numero2 << endl;
    cin >> suma;
    cout << "ingrese los numero: " << numero1 - numero2 << endl;
    cin >> resta;
    cout << "ingrese los numero: " << numero1 * numero2 << endl;
    cin >> multiplicacion;
    cout << "ingrese los numeros: " << numero1 / numero2 << endl;
    cin >> division;
    cout << "su numero es positivo" << endl;
    cin >> positivo;
    cout << "su numero es negativo" << endl;
    cin >> negativo;
    cout << "su resultado es cero" << endl;
    cin >> cero;

    cout << "su resultado es invalido";
    }

    switch (numero1, numero2)
    {
    case 1:
    resultado = numero1 + numero2;
    cout << "ingrese los numeros: " << endl;
    break;
    case 2:
    resultado = numero1 - numero2;
    cout << "ingrese los numeros: " << endl;
    break;
    case 3:
    resultado = numero1 * numero2;
    cout << "ingrese los numeros: " << endl;
    break;
    case 4:
    resultado = numero1 / numero2;
    cout << "ingrese los numeros: " << endl;
    resultado = 0;
    cout << "resultado invalido" << endl;
    break;
    }

if (resultado > 0)
{
    cout << "es positivo" << endl;

}else if (resultado < 0)
{
    cout << "es negativo" << endl;

}else (resultado = 0);
{

    cout << "es cero" << endl;
}
cout << "su resultado es invalido" << endl;


    return 0;

}