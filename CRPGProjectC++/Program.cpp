#include "Program.h"
#include <iostream>
#include "GameEngine.cpp"
#include "GameEngine.h"
#include "Player.cpp"
#include "Player.h"

        

        static void Main(std::string[] ) {
            GameEngine.cpp.Initialize();
            Player.Name = "Kiryu Shinjou";
            Player.MoveTo(World.LocationByID(World.LOCATION_ID_HOME));

            while (true) {
                std::cout << "> ";
                const char* userInput = std::cin >> ;
                if (const char*.IsNullOrWhiteSpace(userInput))continue;
                const char* cleanedInput = userInput.ToLower();

                if (cleanedInput == "exit")break;
                ParseInput(cleanedInput);

            } //while


        } //main
        static void ParseInput(std::string input) {
            if (input.Contains("help")) {
                std::cout << "help is not available at this time";
            }
            else if (input.Contains("look")) {
                DisplayCurrentLocation();
            }
            else if (input.Contains("north")) {
                Player.MoveNorth();
            }
            else if (input.Contains("east")) {
                Player.MoveEast();
            }
            else if (input.Contains("south")) {
                Player.MoveSouth();
            }
            else if (input.Contains("west")) {
                Player.MoveWest();
            }
            else std::cout << "that action is impossible"
        }//ParseInput
        static void DisplayCurrentLocation() {
            std::cout << "You are at: " << Player.CurrentLocation.Name;
            if (Player.CurrentLocation.Description != "") {
                std::cout << "\t\n" << Player.CurrentLocation.Description;
            }

        }
    }
}