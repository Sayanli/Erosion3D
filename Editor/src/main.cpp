#include <iostream>
#include "test.h"

int main() 
{
	std::cout << "Editor start" << std::endl;
	Engine::CheckGLFW();
	std::cin.get();
}