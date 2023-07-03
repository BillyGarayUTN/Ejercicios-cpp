#include<iostream>
using namespace std;

/*
Dado dos fechas informar cual es la más reciente . 
Determine cuales serian los datos de entrada y las 
leyendas a informar de acuerdo al proceso solicitado.
 */
 
 int main(){
 	
 	cout<<"Ingrese la fecha de hoy en este formato: AAAAMMDD: ";
 	int fechaHoy;
 	cin>>fechaHoy;
 	
 	cout<< "\ningrese la primera fecha AAAAMMDD: ";
 	int primerFecha;
 	cin>>primerFecha;
 	
 	cout<< "\ningrese la segunda fecha AAAAMMDD: ";
 	int segundaFecha;
 	cin>>segundaFecha;
 	
 	//evaluamos la resta
	int a;
	a =  fechaHoy-primerFecha;
	
	int b;
 	b =  fechaHoy-segundaFecha;
 	
 	//Evaluamos cual de las fechas es la mas reicente
 	if(a<b){
 		cout << " la primera fecha es la mas reciente";
 	}else{
 		cout << " la segunda fecha es la mas reciente";
 	}
 	
 	return 0;
 }
 
 
