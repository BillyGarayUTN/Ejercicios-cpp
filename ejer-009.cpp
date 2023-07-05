#include<iostream>
using namespace std;

/*
Dado un mes y el anio correspondiente 
informar cuantos dias tiene el mes
*/

// anio bisiesto los que son divisible por 4 y resto 0 
// pruebas de años bisiestos 2020 

// Este ejercicio no adicione los otros MESES 
int main(){
	
	int anio;
	int mes;
	
	cout<<"ingrese un mes: ";
	cin>>mes;
	cout<<"ingrese un anio: ";
	cin>>anio;
	
	int bisiesto;
	bisiesto = anio % 4;
	
	if(bisiesto==0){
		switch (mes){
			case 1:
			cout <<"el mes tiene 31 dias y año bisiesto";
			break;
		}
	}else{
		// no es bisiesto
		switch (mes){
			case 1:
			cout <<"el mes tiene 31 dias y año no bisiesto";
			break;
		}
	}
	
	return 0;
}
