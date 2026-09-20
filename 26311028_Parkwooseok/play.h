#pragma once

#include <glc2d.h>

class Play
{
public:
    int Init();
    int Update();
    int Render();
    int Destroy();

private:
    int m_YutTexture[6];

    int m_YutResult;
    bool m_SpaceDown;

    int ThrowYut();
};
