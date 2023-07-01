#include<iostream>
using namespace std;

/*
Dada una termina de numeros naturales que representan al dia, al mes y 
al año de una determinada fecha informarla como un solo nunmero  natural
de 8 digitos con la forma (AAAAMMDD).

*/

int main(){
	// ingresamos el dia
	cout<<"Ingrese el dia ";
	int dia;
	cin>>dia;
	
	// ingresamos el mes
	cout<<"Ingrese el mes ";
	int mes;
	cin>>mes;
	
	// ingresamos el anio
	cout<<"Ingrese el anio ";
	int anio;
	cin>>anio;
	
	int fecha;
	fecha = anio*10000+mes*100+dia;
	cout<<"la fecha es: "<<fecha;
	
	return 0;
}
