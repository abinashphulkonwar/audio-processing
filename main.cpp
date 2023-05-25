#include <iostream>

#include "./src/graphics/Render.h"

int main()
{
    std::cout << "data" << std::endl;
    int val = 93748743;
    int *const ref = &val;

    std::cout << ref << std::endl;
    *ref = 9837734;
    std::cout << *ref << std::endl;
    {
        Render renderScreen;

        renderScreen.start();
        std::string val = "🎢";
        renderScreen.start(val);
        renderScreen.start();
        renderScreen.start();
    }
    {
        Render renderScreen(1);

        renderScreen.start();
        renderScreen.start();
        renderScreen.start();
        renderScreen.start();
    }
    return 0;
}