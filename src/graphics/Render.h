#ifndef RENDER_H
#define RENDER_H
#include <iostream>
#include <sstream>

namespace graphics
{

    class Render
    {
    public:
        Render();
        Render(int arg);
        ~Render();

        void start();
        void start(std::string arg) const;

    private:
        int state;
        std::string value;
        void changeState(int newState);
        std::string getCurrentState() const;
    };
}
#endif
