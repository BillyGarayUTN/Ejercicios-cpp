#include<iostream>
using namespace std;

/*
Dado tres valores determihnar e imprimir una leyenda segun sea
 " Forman triangulo " o " No forman Triouangulo"


*/

// que conforma un triaungulo
// dondd que ninguno de sus lados sea 0

int main(){
	//validamos primero de que ningun valor sea 0
	int lado1;
	cin >> lado1; 
	int lado2;
	cin >> lado2; 
	int lado3;
	cin >> lado3; 	
		
	if (lado1!=0 && lado2 !=0 && lado3 !=0){
		cout << " Puede formar uhn triangulo";
	}else{
		cout << " No Puede formar uhn triangulo";
	}
	
	
	
	
	
	return 0;
}
