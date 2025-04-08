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
