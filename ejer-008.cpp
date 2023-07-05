#include<iostream>
using namespace std;

/*
Dado un triaungulo representado por sus lados L1, L2 y L3 
determinar e imprimir una leyenda segun sea: 
equilatero = 3 lados iguales
isosceles = 2 lados iguales y uno distinto
escaleno = 3 lados distintos

*/
int main(){
	//Ingresemos los lados de los triangulos
	int l1;
	int l2;
	int l3;
	
	cout <<"Ingrese el primer lado: ";
	cin >>l1;
	cout <<"Ingrese el segundo lado: ";
	cin >>l2;
	cout <<"Ingrese el tercer lado: ";
	cin >>l3;
	
	if(l1==l2&&l2==l3){
		cout<<"Es un Triangulo Equilatero";
	}else{
		if(l1!=l2&&l2!=l3&&l1!=l3){
			cout<<"Es un Triangulo escaleno";	
		}else{
			cout<<"Es un Triangulo isosceles";
		}
	}
	
	return 0;
}
