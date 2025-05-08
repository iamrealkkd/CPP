#include <iostream>
#include <cmath>
#include <windows.h>  // For Sleep on Windows

#define PI 3.14159265

int main() {
    const int width = 80;    // Width of the wave
    const int height = 20;   // Height of the console display

    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            double value = sin((x + y) * PI / 15.0);  // wave equation
            int waveY = (int)((value + 1.0) * (height / 2.0)); // map to height

            if (waveY == y) {
                std::cout << "*";  // plot point
            } else {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
        // Optional delay to see the effect line-by-line
        Sleep(50);  // works only on Windows
    }

    return 0;
}
