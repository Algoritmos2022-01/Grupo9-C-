#include <iostream>
#include<cstdlib>
#include <time.h>
using namespace std;
int generaNumeroAleatorio1()
{
    srand (time (0));
    int num = 1+rand()%(6 + 1); 
    return num;
}
int generaNumeroAleatorio2()
{
    srand (time (0));
    int num1 = 1+rand()%(5 + 1); 
    return num1;
}

void dado() {
	int numero1;
	int numero2;
	int suma;
	cout << "**************************************************" << endl;
	cout << "Bienvenido este es un juego de suerte            " << endl;
	cout << "Tire 2 dados si le da par gana un viaje a Orlando" << endl;
	cout << "No solo eso si la suma le da 7 o 11 tmb lo gana " << endl;
	cout << "**************************************************" << endl;
	numero1 = generaNumeroAleatorio1();
	numero2 = generaNumeroAleatorio2();
	suma = numero1+numero2;
	cout << "Los numeros de su dado son " << numero1 << " " << numero2 << endl;
	cout << "La suma su dado es " << suma << endl;
	if (numero1==numero2) {
		cout << "**************************************************" << endl;
		cout << "      Ganaste un viaje a estados Unidos         " << endl;
		cout << "**************************************************" << endl;
		
		}
		if (suma==7) {
			cout << "*****************************************************" << endl;
			cout << "        Ganaste un viaje a estados Unidos         " << endl;
			cout << "******************************************************" << endl;
		} else {
			if (suma==11) {
				cout << "*************************************************" << endl;
				cout << "      Ganaste un viaje a estados Unidos         " << endl;
				cout << "*************************************************" << endl;
			}
		}
	
	
}

int main() {
	dado();
	return 0;
}
