#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>
#pragma comment(lib, "winmm.lib")

using namespace std;
int mode, KV, randomizationdown, randomizationup, randomizationdoubledown, randomizationdoubleup;

void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

void Menu() {
	setcolor(5);
	/*cout << "                                       ┏━┓┏━┓                 ┏━━━┳┓    ┏┓       " << endl;
	cout << "                                       ┃┃┗┛┃┃                 ┃┏━┓┃┃    ┃┃       " << endl;
	cout << "                                       ┃┏┓┏┓┣━━┳━┳━━━┳┓       ┃┃ ┗┫┃┏┳━━┫┃┏┳━━┳━┓" << endl;
	cout << "                                       ┃┃┃┃┃┃┃━┫┏╋━━┃┣┫       ┃┃ ┏┫┃┣┫┏━┫┗┛┫┃━┫┏┛" << endl;
	cout << "                                       ┃┃┃┃┃┃┃━┫┃┃┃━━┫┃       ┃┗━┛┃┗┫┃┗━┫┏┓┫┃━┫┃ " << endl;
	cout << "                                       ┗┛┗┛┗┻━━┻┛┗━━━┻┛       ┗━━━┻━┻┻━━┻┛┗┻━━┻┛ "; 
	*/
	cout << "                                       RAVEN CLICKER" << endl;
	setcolor(14);
	cout << "                                          By 1b7t" << endl;
	cout << "                                  -----------------------" << endl << endl;

}

void Mode() {
	setcolor(5);
	cout << "1 ->";
	setcolor(14);
	cout << " Normal Click \t[6 to 8 CPS]" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	setcolor(5);
	cout << "2 ->";
	setcolor(14);
	cout << " Jitter Click \t[12 to 14 CPS]" << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	setcolor(5);
	cout << "3 ->";
	setcolor(14);
	cout << " Butterfly Click \t[17 to 20 CPS]" << endl << endl;
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << "Mode : ";
	setcolor(5);
	cin >> mode;
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	cout << endl << " Hold Scroll Button To Toggle" << endl;
}

void Click() {
	while (1) {
		Sleep(1);
		if (GetAsyncKeyState(VK_MBUTTON) & 0x8000) {
			if (mode == 1) {
				randomizationdown = (rand() % 40) + 65;
				if (randomizationdown < 85) {
					randomizationup = (rand() % 25) + 30;
				}
				else {
					randomizationup = (rand() % 15) + 25;
				}
			}
			if (mode == 2) {
				randomizationdown = (rand() % 20) + 35;
				if (randomizationdown < 45) {
					randomizationup = (rand() % 12) + 19;
				}
				else {
					randomizationup = (rand() % 10) + 15;
				}
			}
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			std::this_thread::sleep_for(std::chrono::milliseconds(randomizationdown));
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			std::this_thread::sleep_for(std::chrono::milliseconds(randomizationup));
		}
	}
}

void Butterfly() {
	while (1) {
		Sleep(1);
		if (GetAsyncKeyState(VK_MBUTTON) & 0x8000) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			randomizationdoubledown = (rand() % 9) + 3;
			std::this_thread::sleep_for(std::chrono::milliseconds(randomizationdoubledown));
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			randomizationdoubleup = (rand() % 5) + 8;
			std::this_thread::sleep_for(std::chrono::milliseconds(randomizationdoubleup));
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			randomizationdown = (rand() % 50) + 20;
			std::this_thread::sleep_for(std::chrono::milliseconds(randomizationdown));
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			if (randomizationdown < 45) {
				randomizationup = (rand() % 20) + 25;
			}
			else {
				randomizationup = (rand() % 13) + 20;
			}
			std::this_thread::sleep_for(std::chrono::milliseconds(randomizationup));
		}
	}
}


int main() {
	timeBeginPeriod(1);
	while (1) {
		Menu();
		Mode();
		if (mode <= 2) {
			Click();
		}
		if (mode == 3) {
			Butterfly();
		}
		if (mode < 1 || mode > 3) {
			system("cls");
		}
	}
	timeEndPeriod(1);
}