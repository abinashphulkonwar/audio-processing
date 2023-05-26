
#include "Render.h"

Render::Render()
{
    this->value = " 🚀🚀";

    changeState(0);
    std::cout << "render func" << std::endl;
}
Render::Render(int agr)
{
    if (agr == 1)
    {
        this->value = " 🚀";
    }
    else
    {
        this->value = " 🚀🚀";
    }
    changeState(0);
    std::cout << "render func" << std::endl;
}

Render::~Render()
{
    std::cout << "render done" << this->value << std::endl;
}

void Render::start()
{

    std::stringstream ss;

    ss << "start ";
    ss
        << getCurrentState();
    ss << " ";
    ss << state;

    std::cout << ss.str()
              << std::endl;
    changeState(1);
}
void Render::start(std::string arg) const
{

    std::cout << arg << std::endl;
}

std::string Render::getCurrentState() const
{
    std::string stateString;
    switch (state)
    {
    case 0:
        stateString = "start";
        break;
    case 1:
        stateString = "stop";
        break;
    default:
        stateString = "unknown";
        break;
    }
    return stateString;
}

void Render::changeState(int newState)
{
    this->state = newState;
}