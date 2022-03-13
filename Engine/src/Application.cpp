#include "Application.h"

#include <iostream>

namespace Engine {

    Application::Application()
    {

    }

    Application::~Application()
    {

    }

    int Application::start(unsigned int window_width, unsigned int window_height, const char* title)
    {
        m_pWindow = std::make_unique<Window>(title, window_width, window_height);



        while (!m_bCloseWindow)
        {
            on_update();
        }
        m_pWindow = nullptr;

        return 0;
    }
}