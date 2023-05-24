#include <iostream>
#include "Render.h"

Render::Render()
{
    changeState(0);
    std::cout << "render func" << std::endl;
}

void Render::start()
{
    std::cout << "start" << state << std::endl;
    changeState(1);
}

void Render::changeState(int newState)
{
    state = newState;
}