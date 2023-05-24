#ifndef RENDER_H
#define RENDER_H

class Render
{
public:
    Render();

    void start();

private:
    int state;
    void changeState(int newState);
};

#endif
