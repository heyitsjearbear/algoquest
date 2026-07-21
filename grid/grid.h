#ifndef GRID_H
#define GRID_H

#include "../globals.h"

//TODO refactor grid to be a class instead

void initializeGrid();

void printGrid(int (&coords) [ROWS*COLS]);

int pickRandomNumber(int minimum, int maximum);

void randomizeObstaclePlacement(int (&coords) [ROWS*COLS], int numberOfObstacles);

#endif