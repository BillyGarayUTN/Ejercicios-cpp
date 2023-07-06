#include<iostream>
using namespace std;

/*
dado 10 valores informar el mayor
*/

int main(){
	int numero;
	int mayor;
	bool primeraVez=true;
	
	for(int i=0;i<10;i++){
		
		cout<<"Ingrese un numero: ";
		cin>>numero;
		
		if(primeraVez==true||numero>mayor){
			mayor = numero;
			primeraVez = false;
		}
	}
	cout<< " \n el mayor es: "<<mayor;
	
	return 0;
}
