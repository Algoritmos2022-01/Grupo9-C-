#include <iostream>
#include<cstdlib>ss
using namespace std;
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


void dado(){
	cout << "Esta funcion simula ser un dado dando un numero al azar" << endl;

	cout << "Su numero del dado es " << (rand()%6) << endl;
}
int main(){

	sumatoria();
	dado();
	return 0;
}
