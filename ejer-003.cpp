#include<iostream>
using namespace std;

/*
Dada un numero entero de la forma (AAAAMMDD), que representa una
fecha valida mostrar el dia , mes y anio que representa.
*/

int main(){
	// ingresamos una fecha
	cout<<"Ingrese una fecha en este formato(AAAAMMDD)";
	int fecha;
	cin>>fecha;
	
	// creamos variables el dia mes y anio
	int dia;
	int mes;
	int anio;
	
	anio = fecha/10000; //obtengo el anio
	mes = (fecha%10000)/100; //obtengo el mes
	dia = (fecha%10000)%100; //obtengo el dia
	
	// mostramos el dia mes y anio
	cout<<"el dia es "<<dia<<" el mes es "<<mes<<" y el anio es "<<anio;
	return 0;
}
