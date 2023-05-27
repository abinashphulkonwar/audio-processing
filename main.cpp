#include <iostream>

#include "./src/graphics/Render.h"

using namespace std;

int main()
{
    string data[] = {"🚀", "🎢", "🎡", "🎠"};
    const int length = sizeof(data) / sizeof(string);
    cout << length << " " << sizeof(string) << endl;
    for (int i = 0; i < length; i++)
    {
        cout << data[i]
             << endl;
    }

    cout
        << "data" << endl;
    int val = 93748743;
    int *const ref = &val;
    if (&val == ref)
    {
        cout << " 🚀" << endl;
    }
    cout << ref << endl;
    *ref = 9837734;
    cout << *ref << " " << val << endl;
    {
        graphics::
            Render *renderScreen = new graphics::Render[10];

        renderScreen->start();
        string val = "🎢";
        renderScreen->start(val);
        renderScreen->start();
        renderScreen->start();
        if (renderScreen != NULL)
            delete[] renderScreen;
    }
    {
        graphics::Render renderScreen(1);

        renderScreen.start();
        renderScreen.start();
        renderScreen.start();
        renderScreen.start();
    }

    return 0;
}