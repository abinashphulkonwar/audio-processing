#ifndef RENDER_H
#define RENDER_H
#include <iostream>
#include <sstream>

class Render
{
public:
    Render();
    Render(int arg);
    ~Render();

    void start();
    void start(std::string arg);

private:
    int state;
    std::string value;
    void changeState(int newState);
    std::string getCurrentState();
};

#endif
