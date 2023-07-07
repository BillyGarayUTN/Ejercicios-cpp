#include<iostream>
using namespace std;

/*
-Pedir al humano que ingrese un numero PAR 
-almecenar la captuera del numero en un puntero
-si el valor del puntero es PAR felicitar al humano, 
  delo contrario reprender al humano
- mostar la direccion de memoria del numero
*/

int main(){

	cout << "Ingrese un numero PAR: ";
	int valor;
	cin>>valor;
	
	int *p;
	p = &valor;
	
	
	if((*p%2) ==0){
		cout<<" Felicitaciones";
	}else{
	 	cout<<" te equivocaste";
	}
	
	cout<<"\nEste esdat ubicado en "<<&p;


	
}
