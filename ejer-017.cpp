#include<iostream>
using namespace std;

/*

Se ingresa un conjunto de valores float, cada uno de los cuales representa el
sueldo de un empleado, excepto el ultimo valor que es cero e indica el fin 
del conjunto. Se pide desarrollar un programa que determine e informe:
a) Cuantos empleados ganan menos de $ 1.520
b) Cuantos ganan $ 1.520 o más pero menos de $ 2.780
c) Cuantos ganan $ 2.780 o más pero menos de $ 5.999
d) Cuantos ganan $ 5.999 o más.
*/

int main(){
	float sueldo ;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	
	cout<<"Ingrese el sueldo: ";
	cin>>sueldo;
	
	while(sueldo!=0){
		if(sueldo<1.520){
			a++;
		}
		if(1.520<=sueldo&&sueldo<2.780){
			b++;
		}
		if(1.520<=sueldo&&sueldo<5.999){
			c++;
		}
		if(5.999<=sueldo){
			d++;
		}
		cout<<"Ingrese el sueldo: ";
		cin>>sueldo;
	}
	
	cout<<"\n empleados ganan menos de $ 1.520 son "<<a;
	cout<<"\n empleados ganan menos de $ 1.520 o más pero menos de $ 2.780 son "<<b;
	cout<<"\n empleados ganan menos de $ 2.780 o más pero menos de $ 5.999 son "<<c;
	cout<<"\n empleados ganan $ 5.999 o más son "<<d;
	
	return 0;
}
