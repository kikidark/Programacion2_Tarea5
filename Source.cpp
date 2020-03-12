#include<iostream>

int main() {
	int opc = 0, tam = 0;
	std::cout << "Isosceles [1] Equilatero [2] \n";
	std::cin >> opc;

	if (opc==1) {

		std::cout << "Ingrese el tamano del triangulo \n";
		std::cin >> tam;
		for (int x = 0; x < tam; x++) {
			for (int i = 0; i < x; i++) {
				std::cout << "*";
			}
			std::cout << "\n";
		}


	}
	else {

		std::cout << "Ingrese el tamano del triangulo \n";
		std::cin >> tam;
		for (int x = 0; x < tam; x++) {
				for (int i = x; i < tam; i++) {
					std::cout << " ";
				}
				for (int f = 0; f < x; f++) {
					std::cout << "*";
					for (int g = 0; g < 1; g++) {
						std::cout << " ";
					}
				}

				
			std::cout << "\n";
		}
		

		}
	}

