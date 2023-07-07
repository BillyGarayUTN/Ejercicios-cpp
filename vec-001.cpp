#include<iostream>
using namespace std;

/*
Se ingresa un valor N (<25) . Generar un arreglo 
de N componentes en el cual las mimas contengan
los primeros numeros naturales pares e imprimirlos.
*/

int main(){
	
	int valor;
	int vec[25];
	int contador = 0;
	
	for( int i=0;i<10;i++){
	
		cout<<"Ingrese un valor: ";
		cin>>valor;
		
		if( valor%2==0 ){
			vec[contador] = valor;
			contador++;
		}
	}
	cout <<"Los valores son: ";
	for(int i=0;i<contador ;i++){
		cout << "\n "<<vec[i]; 
		
	}
	
	return 0;
}
