#include<iostream>
using namespace std;

/*
Ingresar e informar valores,mientras que el valor 
ingresado no sea negativo.
Informar la cantidad de valores ingresados.
*/

int main(){
	cout << "ingrese la cantidad de valores: ";
	int cantidad;
	cin>> cantidad;
	
	int valor;
	int contador= 0;
	int positivo = 0;
	int negativo = 0;
		
	// logica y conteo de valores
	for(int i = 0; i<cantidad ;i++){
		
		cout<<"Ingresar un valor: ";
		cin>> valor;
		if(valor>0){
			positivo++;
		}else{
			negativo++;
		}
		
	}
	
	cout<<"\n Los valores positivos son: "<<positivo;
	cout<<"\n Los valores negativos son: "<<negativo;
	return 0;
}
