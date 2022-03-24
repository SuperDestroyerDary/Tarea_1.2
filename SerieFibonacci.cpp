	//Serie Fibonacci

#include <iostream>

int main(){
	int num_inicial = 1;
	int anterior = 0;
	int n;
	int auxiliar;
	
	std::cout <<"Ingrese valor maximo parala serie de Fibonacci: ";
	std::cin >> n;
		
	
	for (int i= 0; i < n; i++){
		std::cout<<num_inicial<<std::endl;
		auxiliar = num_inicial;
		num_inicial += anterior;
		anterior = auxiliar;
	}
	
	return 0;
}
