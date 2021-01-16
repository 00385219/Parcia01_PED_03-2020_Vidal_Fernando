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

int suma_digitos(int n)
{
	int sum=0;

	while(n>0)
	{
		sum+=(n%10);
		n/=10;
	}
	
	return (sum);
}