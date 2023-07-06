#include<iostream>
using namespace std;

/*
Dado un valor M determinar y emitir un listado con los M
primeros multiplos de 3 que no lo sean de 5, dentro del conjunto
de los numeros naturales
*/
int main(){
	int valor;
	cout <<"Ingresa un valor: ";
	cin >>valor;
	
	
	do{
		if((valor%3==0) && (valor%5==0)){
		cout<<"El valor: "<<valor<<" es multiplo de 3 y de 5 ";
		}
	
		
		
		cout <<"\nIngresa un valor: ";
		cin >>valor;	
	}while(valor!=0);
	
	return 0;
}
