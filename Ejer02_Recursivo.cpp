#include <iostream>
#include <stdio.h>
using namespace std;
int suma_digitos(int n);

int main()
{
	int numero;
    	
	cout << endl << "\nIntroduzca un numero para calcular la suma de sus digitos" << endl;
	cin >> numero;

	//Comprobando si el numero es negativo
	if(numero<0)
		cout << endl << "Ha ingresado un numero negativo, por favor, intente nuevamente" << endl ;

	else
	{
        cout << endl << "La suma de sus digitos es: "<< endl << suma_digitos(numero) << endl << endl;
    }

    getchar();

}

int suma_digitos (int n)
/*Calcula y devuelve la suma de los digitos de un numero, de forma recursiva*/
{
	if (n==0)
		return(0);
	else
		return ((n%10) + suma_digitos(n/10));
}
