#ifndef GRID_H
#define GRID_H

#include "../globals.h"

void initializeGrid();

void printGrid(int (&coords) [ROWS*COLS]);

int pickRandomNumber(int minimum, int maximum);

void randomizeObstaclePlacement(int (&coords) [ROWS*COLS], int numberOfObstacles);

#endif