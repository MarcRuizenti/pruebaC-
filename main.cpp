#include <iostream>

int main (int argc, char** argv){

		
	if (argc > 1){
		std::cout << "Hola " << argv[1] << std::endl;
	}
	else {
		std::cout << "Introduce un numero" << std::endl;
	}

	return 0;
}
