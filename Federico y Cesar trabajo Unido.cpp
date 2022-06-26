#include <iostream>
#include<cstdlib>ss
using namespace std;
void Rectangulo(int fila, int columna)
{
    for (int i=1; i <= fila; i++){
    for (int c=1; c <= columna; c++){
    cout<< " * ";
    }
    cout<<endl;
    }
}
void sumatoria(){
	int suma,n,n2;
	suma=0;
	cout<<"Algoritmo que hace la suma hasta el numero que usted indique"<<endl;
	cout<<"Escriba el inicio de la serie"<<endl;
	cin>>n;
    cout<<"Escriba el fin de la serie"<<endl;
    cin>>n2;
    if(n<n2){

    for(int i; n<n2 + 1; n++){
    	suma=suma+n;
	}
	cout<<"La suma es: "<<suma<<endl;
		}
   else {
   	for(int i; n2<n+1; n2++){
   		suma=suma+n2;
	   }
	   cout<<"La suma es :"<<suma<<endl;
   }	
}
double factorial(int f1, int f2) {
  double fact = 1;
  if (f1 >= 3 && f1 <= 15) {
    for (int i = 1; i <= f1; i++) {
      for (int k = 1; k < f2; k++)
        fact = fact * k; // fact*=i
    }
  } else
    fact = -1;

  return fact;
}
void dado(){
	cout << "Esta funcion simula ser un dado dando un numero al azar" << endl;

	cout << "Su numero del dado es " << (rand()%6) << endl;
}
int main(){

	sumatoria();
    cout<<endl<<"Probando la función para imprimir un rectangulo por pantalla";
    cout<<endl;
    Rectangulo(5,4);
     cout<<endl<<"La suma de factoriales es "<<factorial(3,15)<<endl;
	dado();
	return 0;
}
