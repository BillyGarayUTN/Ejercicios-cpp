#include<iostream>
using namespace std;

/*
Dados 5 numeros enteros, infromar el promedio de los mayores
que 100 y la suma de los menores que 10.

ejem:  200 300 prom = 250  y 2 3 5 sum = 10

*/

int main(){
	
	int promedio=0;
	int sumatoria=0;
	
	int numero;
	cout<<"ingrese un numero: ";
	cin>> numero;
	
	int n;
	// da 5 veces
	for(int i=0; i<5 ; i++){
		
		if(numero>100){
			promedio= promedio + numero;
			n++;
		}
		if(numero<10){
			sumatoria= sumatoria + numero;
		}
		
		cout<<"ingrese un numero: ";
		cin>> numero; 
	}
	
	cout<<"El promedio es "<<promedio/n;
	cout<<"\nLa sumatoria es: "<<sumatoria;
	
	
	return 0;
}
