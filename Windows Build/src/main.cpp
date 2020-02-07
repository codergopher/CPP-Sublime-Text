#include <iostream>
#include "Add.hpp"

#define print(msg) std::cout << msg << std::endl;


int main(){
	print("Hello World!");
	print(add(5, 5));

	//you would need std::cin.get(); here if you were on windows
	//but we're on linux, so no worries
}