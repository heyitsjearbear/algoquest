#ifndef GRID_H
#define GRID_H

#include "../globals.h"
#include <random>
#include <string>

class Grid {
    public:
        Grid();
        void printGrid() const;
        int coordinateConverter(int x, int y) const;
        //TODO movefunction here
        void movePlayer(std::string direction);
    
    private:
        void randomizeObstaclePlacement(int numberOfObstacles);

        //randomizer engine
        std::mt19937 rng;
        std::uniform_int_distribution<int> dist;

        //TODO will need an array that holds the state of the grid
        int coords[ROWS*COLS];

};

#endif