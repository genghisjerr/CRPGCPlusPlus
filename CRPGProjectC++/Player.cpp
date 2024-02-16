#include "Player.h"
#include <string>
#include <set>
#include "Location.h"
#include <iostream>




        void MoveTo(Location loc) {
        
        }
        void Player::MoveNorth() {
            if (CurrentLocation.LocationToNorth != "none") MoveTo(CurrentLocation.LocationToNorth);
            else std::cout << "that movement is impossible. please select a new movement";
        }
        void Player::MoveEast() {
            if (CurrentLocation.LocationToEast != "none") MoveTo(CurrentLocation.LocationToEast);
            else std::cout << "that movement is impossible. please select a new movement";
        }
        void Player::MoveSouth() {
            if (CurrentLocation.LocationToSouth != "none") MoveTo(CurrentLocation.LocationToSouth);
            else std::cout << "that movement is impossible. please select a new movement";
        }
        void Player::MoveWest() {
            if (CurrentLocation.LocationToWest != "none") MoveTo(CurrentLocation.LocationToWest);
            else std::cout << "that movement is impossible. please select a new movement";
        }
        //class Player
    
