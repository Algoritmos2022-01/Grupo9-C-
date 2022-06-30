#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int generaNumeroAleatorio(){

    int n = 1+rand()%(20);
    return n;

}

void jugar(int oportunidades)
{
    int x, x1;
    int n1; bool ganaste=false;

    int n2=generaNumeroAleatorio();
    cout<<"======================================="<<endl;
    cout<<"Adivina el numero corecto entre 1 y 20"<<endl;
    cout<<"=======================================";
int j=0;    
while(j <= oportunidades && ganaste==false)
{
    j++;
    cout<<"\nOportunidad #:"<<j;
    cout<<"\nIngresa un numero del 1 al 20: ";
    cin>>n1;

    if(n1==n2)
        {
            ganaste=true;
        }
        else if(n1 < n2)
        {
            cout<<endl<<"Debes ingresar un numero mayor, intentalo de nuevo :D ";
        }
        else
        {
            cout<<endl<<"Debes ingresar un numero menor, intentalo de nuevo :D ";
        }
} 

 if(ganaste)
{
    cout<<endl<<"============================================================";
    cout<<endl<<"Felicidades Ganaste un viaje para recorrer todo el Ecuador  ";
    cout<<endl<<"============================================================";
    cout<<endl<<"¿Quieres jugar de nuevo para duplicar los boletos?"<<endl;
    cout<<"Ingresa 0 para No 1 para Si: ";
    cin>> x1;
    switch (x1){
    	case 0: 
    	cout<<"Muchas gracias por participar, disfruta tu viaje ";
    	break;
    	case 1:
    	jugar(5);
    	
    	break; 
    		
	}
}
else
{
    cout<<endl<<"Perdiste, tienes una oportunidad mas ¿Quieres volver a jugar?"<<endl;
    cout<<"Ingresa 0 para No 1 para Si: ";
    cin>> x;
   switch(x){
    case 0:
    cout<<"Gracias por jugar. ¡Mejor suerte para la proxima!"<<endl;
   	break;
   	case 1: 
   	cout<<"Vamos tienes la ultima oportunidad. ¡Aprovechala!"<<endl;
   	jugar(5);
   	break;
   }

}

} 
int main()
{
    srand(time(NULL)); //funcion de numero aleatorio
    jugar(5);
    return 0;
}