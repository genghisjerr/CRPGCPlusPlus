#include "World.h"
#include "Location.cpp"
#include "Location.h"
#include "Player.cpp"
#include "Player.h"

        //ID Locations now
        const int LOCATION_ID_HOME = 1;
        const int LOCATION_ID_FOREST_PATH = 2;
        const int LOCATION_ID_ABANDONED_HOUSE = 3;
        //and more
        //world constructor
        static World() {
        Location:PopulateLocation();
        }
        static void PopulateLocations() {
            //build Locations
            Location home = new Location(LOCATION_ID_HOME, "Home", "UNDERTALE: Home begins playing");
            Location forestPath = new Location(LOCATION_ID_FOREST_PATH, "Forest Path", "stick to the path and you'll be fine");
            Location abandonedHouse = new Location(LOCATION_ID_ABANDONED_HOUSE, "Abandoned House", "A destroyed house. Must have been targeted during the war");

            //connect Locations
            home.LocationToNorth = forestPath;
            forestPath.LocationToEast = abandonedHouse;
            abandonedHouse.LocationToWest = forestPath;
            forestPath.LocationToSouth = home;

            //build list locations
            Locations.Add(home);
            Locations.Add(forestPath);
            Locations.Add(abandonedHouse);

        }
        static Location LocationByID(int id) {
            foreach(Location loc in Locations) {
                if (loc.ID == id) {
                    return loc;
                }
            }
            return null;
        }
    }
}