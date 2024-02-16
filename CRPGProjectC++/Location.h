#pragma once
class Location
{
private:
    int iD;
    std::string name;
    std::string description;
    Location* LocationToNorth;
    Location* LocationToEast;
    Location* LocationToSouth;
    Location* LocationToWest;
public:
    Location(int iD = 0, const char* name = "none", const char* description = "none");

};

