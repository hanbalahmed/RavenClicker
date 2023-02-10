#include <iostream>
#include <Windows.h>
#include <random>
#include <chrono>
#include <thread>

#pragma comment(lib, "Winmm.lib")

bool shift_disable = true;
int random_interval(int a, int b)
{
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist6(a, b);
    return dist6(rng);
}

void click(int x, int y)
{
    INPUT Input = { 0 };
    Input.type = INPUT_MOUSE;
    Input.mi.dx = x * (0xFFFF / GetSystemMetrics(SM_CXSCREEN));
    Input.mi.dy = y * (0xFFFF / GetSystemMetrics(SM_CYSCREEN));
    Input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN;
    ::SendInput(1, &Input, sizeof(INPUT));
    Input.mi.dwFlags = MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTUP;
    ::SendInput(1, &Input, sizeof(INPUT));
}

int main()
{
    int cps;
    std::cout << "Enter the number of clicks per second (max 25): ";
    std::cin >> cps;

    if (cps > 25)
    {
        std::cout << "Error: CPS cannot be more than 25" << std::endl;
        return 1;
    }

    std::cout << "Shift key disable (0 for no, 1 for yes): ";
    std::cin >> shift_disable;

    timeBeginPeriod(1);

    int x, y;
    POINT p;
    while (true)
    {
        GetCursorPos(&p);
        x = p.x;
        y = p.y;

        if (!GetAsyncKeyState(VK_SHIFT) || !shift_disable)
        {
            for (int i = 0; i < cps; i++)
            {
                click(x + random_interval(-10, 10), y + random_interval(-10, 10));
                std::this_thread::sleep_for(std::chrono::milliseconds(1000 / cps));
            }
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 / cps));
    }

    timeEndPeriod(1);
    return 0;
}
