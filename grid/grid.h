#ifndef GRID_H
#define GRID_H

#include "../globals.h"
#include <string>

class Grid {
    public:
        Grid();
        void printGrid() const;
        //TODO movefunction here
        void movePlayer(std::string direction);
    
    private:
        int pickRandomNumber(int minimum, int maximum) const;
        void randomizeObstaclePlacement(int numberOfObstacles);

        //TODO will need an array that holds the state of the grid
        int coords[ROWS*COLS];

};

#endif