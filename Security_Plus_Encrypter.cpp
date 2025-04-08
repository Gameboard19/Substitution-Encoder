// Security_Plus_Encrypter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "used_headers.h"
#include "NumEncoder.h"

//#define DEBUG_MODE

int main()
{
#ifdef DEBUG_MODE
	for (int debug_i = 0; debug_i < 5; debug_i++) {
#endif // DEBUG_MODE
		std::string sIn;
		int iIn;
		std::string out;
		Encoder encoder;
		std::cout << "Please enter a string:\n";
		std::getline(std::cin, sIn);
		out = encoder.encodeAscii(sIn);
		std::cout << out << "\nPlease enter the shift to be applied:\n";
		std::cin >> iIn;
		std::cin.ignore();
		encoder.shiftAscii(out, iIn);
		std::cout << out << "\nPlease enter the incremental shift to be applied:\n";
		std::cin >> iIn;
		std::cin.ignore();
		encoder.shiftAsciiByPos(out, iIn);
		std::cout << out;
#ifdef DEBUG_MODE
		_getch();
		system("cls");
	}
#endif // DEBUG_MODE

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
