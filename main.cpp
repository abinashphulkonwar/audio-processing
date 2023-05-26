#include <iostream>

#include "./src/graphics/Render.h"

int main()
{
    std::string data[] = {"🚀", "🎢", "🎡", "🎠"};
    const int length = sizeof(data) / sizeof(std::string);
    std::cout << length << " " << sizeof(std::string) << std::endl;
    for (int i = 0; i < length; i++)
    {
        std::cout << data[i]
                  << std::endl;
    }

    std::cout
        << "data" << std::endl;
    int val = 93748743;
    int *const ref = &val;
    if (&val == ref)
    {
        std::cout << " 🚀" << std::endl;
    }
    std::cout << ref << std::endl;
    *ref = 9837734;
    std::cout << *ref << " " << val << std::endl;
    {
        Render *renderScreen = new Render;

        renderScreen->start();
        std::string val = "🎢";
        renderScreen->start(val);
        renderScreen->start();
        renderScreen->start();
        if (renderScreen != NULL)
            delete renderScreen;
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