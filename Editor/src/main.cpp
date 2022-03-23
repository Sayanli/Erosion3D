#include <iostream>
#include "Application.h"


int main() 
{
	const std::string& windowTitle = "018.) Heightmap Pt.3 - Multiple Layers - Tutorial by Michal Bubnar (www.mbsoftworks.sk)";
	int majorVersion = 3;
	int minorVersion = 3;

	char answer;
	std::cout << "Would you like to run in fullscreen mode? (y/n): ";
	std::cin >> answer;
	bool showFullscreen = tolower(answer) == 'y';

	OpenGLWindow018 window;
	if (!window.createOpenGLWindow(windowTitle, majorVersion, minorVersion, showFullscreen))
	{
		printf("Failed to create window with OpenGL context %d.%d! Shutting down...\n", majorVersion, minorVersion);
		return 1;
	}

	window.runApp();

	if (window.hasErrorOccured())
	{
		std::cout << std::endl << std::endl << "Program could not start because of the above errors! Press ENTER to quit..." << std::endl;
		std::cin.get();
		return 1;
	}
	//Engine::CheckGLFW();

	return 0;
}