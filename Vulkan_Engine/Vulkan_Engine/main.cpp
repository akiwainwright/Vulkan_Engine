#include <iostream>
#include "Constants.h"
#include "Engine.h"

int main() 
{
	Engine engine{BASE_WINDOW_W, BASE_WINDOW_H, "MVE"};

	try {
		engine.RunEngine();
	}
	catch (std::exception& e) {
		std::cerr << e.what() << "\n";
		return -1;
	}

	return 0;
}