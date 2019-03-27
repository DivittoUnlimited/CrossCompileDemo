#include <iostream>

unsigned int getOS( void )
{
	#if defined(_WIN32)
		// this is a Windows environment!       
        	return 1;
	#elif defined(__linux__)
        	// this is a Linux environment! (any GNU/Linux distribution)
        	return 2;
	#endif
}

int main( void )
{
	switch( getOS( ) )
	{
		case 1:
		std::cout << "Windows Detected!" << std::endl;
		break;
		case 2:
		std::cout << "Linux Detected!" << std::endl;
		break;
	}
	std::cout << "Demo has completed, Good bye!" << std::endl;
	return 0;
}
