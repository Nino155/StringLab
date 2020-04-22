#include "string.h"
#include <iostream>
#include <iterator>

int main()
{
	// Dummy constructor test (can be deleted once a real constructor is implemented)
	//string hello();
	//std::cout << hello.c_str() << std::endl;

// Member C
	// capacity test (will need to be reimplemented once a real constructor have been made)
	char helloc[] = "Hello";
	string hello(helloc);
	bool capatest = hello.capacity() == std::end(helloc) - std::begin(helloc) - 1;
	std::cout << "Capacity : ";
	if(capatest){
		std::cout << "ok" << std::endl;
	}else{
		std::cout << "not working" << std::endl;
	}

	// empty test
	char heyc[] = "hey";
	char oc[] = "";
	string hey(heyc);
	string o(oc);
	bool emptytest = (o.empty() && !hey.empty());
	std::cout << "Empty : ";
	if(emptytest){
		std::cout << "ok" << std::endl;
	}else{
		std::cout << "not working" << std::endl;
	}

	return 0;
}