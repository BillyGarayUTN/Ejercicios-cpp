#include<iostream>
using namespace std;

/*
Se ingresa una edad , mostrar por pantalla 
alguna de las siguientes leyendas:
 - "menor" si la edad es menor o igual a 12
 - "cadete" si la edad esta comprendidad entre 13 y 18
 - "juvenil" si la edad es mayor que 18 y no supera los 26
 - "mayor" en el caso que no cumpla ninguna de las condiciones anteriores
*/

int main(){
	
	int edad;
	cout <<"Ingrese su edad: ";
	cin >> edad;
	
	// se hace la logica de la edad
	if(edad<=12){
		cout << " Es un menor ";
	}else{
		if(13<edad && edad <= 18){
			cout << " Es un cadete ";
		}else{
			if(18<edad && edad <= 26){
				cout << " Es un juvenil ";	
			}else{
				cout << " Es un mayor ";
			}
		}
	}
	
	
	return 0;
}
