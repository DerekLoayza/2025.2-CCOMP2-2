#include <iostream>
/*
Esto dice el profe es para diferentes sistemas operativos
#ifdef _WIN32
    //#include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif  */
void caratula()
{
	//Esto se complementa con lo primero (no se si es necesario)   std::system(CLEAR_COMMAND);            // Comando para borrar todo el contenido de la pantalla
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo

    std::cout << "\x1B[1;36;44m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\x1B[31;1m Universidad Catolica San Pablo \x1B[m" << std::endl;
	std::cout << "\x1B[33;1m Escuela Profesional de Ciencia de la Computacion \x1B[m" << std::endl;
	std::cout << "\x1B[37;1m Ciencia de la Computacion I - CCOMP 2.2 \x1B[m" << std::endl;
	std::cout << "\x1B[38;5;46m Prof. D.Sc. Manuel Eduardo Loaiza Fernandez \x1B[m" << std::endl;
	std::cout << "\x1B[3;38;5;160m Arequipa 2025 - II \x1B[m" << std::endl;
	std::cout << "\x1B[5;36;44m";         // Mostrar el siguiente texto en modo de letra italico "[3;" y color azul "[ ;34m"
	std::cout << "/***************************************************/" << std::endl;
	std::cout << "\x1B[m";             // Resetear color a valor por defecto
	std::cout << "\n !! Welcome to 2025 - II !! \n\n";
	return;
}

int main()
{
    caratula();
    return 0;
}
