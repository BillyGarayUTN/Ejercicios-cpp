#include<iostream>
using namespace std;

/*
Ingresar un valor entero N (<30) y a continuacion un conjunto
de N elementos. Si el ultimo elemento del conjunto tiene un 
valor menor que 10 imprimir los negativos y ewncaso contrario los demas.
*/
int main(){
	int n ;
	cout<<"ingrese la cantidad de valores: ";
	cin >>n;
	
	int valores[n];
	
	int valoresNegativos[n];
	int valoresPositivos[n];
	
	int negativos=0;
	int positivos =0;
	
	// genero 2 arreglos negativos y caso contrario
	
	for(int i = 0; i<n ;i++ ){
		
		cout<<"Ingrese un valor: ";
		cin >>valores[i];
		
		//cargo los valores negativos a un arreglo VAloresNegativos
		if(valores[i]<0){
			valoresNegativos[negativos]=valores[i];
			negativos++;
		}
		
		//cargo los valores positivos a un arreglo VAloresPositivos
		if(valores[i]>0){
			valoresPositivos[positivos]=valores[i];
			positivos++;
		}
	}
	
	//imprimo segun 
	if(valores[n-1]<10){
		
		// los valorees negativos
		for(int i =0; i<negativos ;i++){
		cout <<"\nNegativos es: "<<valoresNegativos[i];	
		}
		
	}else{
		// los valorees positivos
		for(int i =0; i<positivos ;i++){
		cout <<"\nPositivos es: "<<valoresPositivos[i];	
		}
	}
	
	
	
	
	
	
	return 0;
	
}
