#include "GameEngine.h"
#include <string>
#include <iostream>
#include "World.h"
#include "World.cpp"

        void GameEngine::Initialize() {
            std::cout << "Initializing Game Engine Version " << Version;
            std::cout << '\n' << "Welcome to the " << World.WorldName;
            std::cout << std::endl;
            World.ListLocation();

        }

