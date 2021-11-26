#include "draw.h"
#include "windows.h"

using namespace std;

void draw_to_screen(int width, int height) 
{
	cout << endl << endl;

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			//cout << (wchar_t) 9619;
			cout << (char32_t) 0x2593;
			//cout << (char) 176;
		}
		cout << endl;
	}
}

void construct_console(int width, int height, int font_width, int font_height)
{

	HWND console = GetConsoleWindow();
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	RECT ConsoleRect;
	bool result = GetWindowRect(console, &ConsoleRect);
	
	cout << "\nThis is the result: " << result;
}

