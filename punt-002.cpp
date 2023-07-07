#include<iostream>
using namespace std;

/*
- Declarar un arreglo de numeros
- Declaramos un puntero
- Asignamos nueswtro arreglo de numeros a nuestero puntero
- Mostramos el numero y su posicion de memoria
*/

int main(){
	int *p;
	int arreglo[] = {1,2,3,4,5};
	
	p = arreglo;
	
	for(int i = 0;i<5 ; i++){
		cout <<"\nel numero "<<arreglo[i]<<" esat en "<<p++;
		
		
	}
	
	
	
	return 0 ;	
}
