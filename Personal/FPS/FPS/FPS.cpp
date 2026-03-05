
#include <iostream>
#include <thread>
#include <chrono>
#include <Windows.h>

using namespace std;
using namespace std::chrono;

int main()
{
    const double frameTime = 1000.0 / 60.0; // milisegundos por ciclo

    while (true)
    {
        auto start = high_resolution_clock::now();

        system("cls");

        if (GetKeyState('A') & 0x8000/*Check if high-order bit is set (1 << 15)*/)
        {
            cout << " a";
        }


        auto end = high_resolution_clock::now();
        auto elapsed = duration<double, milli>(end - start).count();

        if (elapsed < frameTime)
        {
            this_thread::sleep_for(
                milliseconds((int)(frameTime - elapsed)));
        }
    }
}

