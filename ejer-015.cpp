#include<iostream>
using namespace std;

/*
Se realiza una inspeccion en una fabrica de pinturtas , y se 
detectaron 5 infracciones . De cada infraccion se tomo nota
de los siguientes datos:
-- Tipo de infraccion (1,2,3,4)  
-- motivo de la infraccion 
-- valor de la multa
-- gravedad de la infraccion('L' , 'M' ,' G') X2  X3  X5
Se pide informar al final del proceso :

--Los valores totales de la multa a pagar de acuerdo 
   al tipo de gravedad
--La leyenda " Clausurar fabrica" si la cantidad de 
   infraccion 3 y 4 con gravedad "G" sean mayor a 3 
*/


int main(){
	// ingresamos el tipo de la infrwaccion
	int infraccion;
	int multa;
	char gravedad;
	int total=0;
	int contadorGravedad = 0;
	
	for(int i= 0;i<5 ;i++){
	
		cout<<"Ingrese el tipo de infraccion: (1,2,3,4) ";
		cin>> infraccion;
		
		//el motivo de la infraccion lo descarto por ahora,
		
		//Ingresamos la gravedad
		
		cout <<"Ingrese la gravedad de la infraccion('L' , 'M' ,' G'): ";
		cin>> gravedad;
		
		// valor de la multa
		switch(infraccion){
			case 1:
			multa = 100;	
			break;
			case 2:
			multa = 200;	
			break;
			case 3:
			multa = 300;	
			break;
			case 4:
			multa = 400;	
			break;
			default:
			multa =  0;
		}
		switch(gravedad){
			case 'L':
			multa = multa*2;	
			break;
			case 'M':
			multa = multa*3;	
			break;
			case 'G':
			multa = multa*5;	
			break;
		
		}
		total = total + multa;
		if(gravedad=='G'){
			if( infraccion == 3 || infraccion ==4){
				contadorGravedad++;
			}
			
		}
	}
	cout<<"el total de la multa a pagar es: "<<total;
	if(contadorGravedad>3){
		cout<<"\n***Cerramos la fabrica***";
	}
	
	return 0;
	
}
