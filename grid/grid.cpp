#include <iostream>
#include <random>

#include "grid.h"


Grid::Grid()

{
    for (int i = 0; i<ROWS*COLS; i++)
    {
        coords[i] = 0;
    }

    randomizeObstaclePlacement(5);
    printGrid(); 
}

/*
approach is fisher-yates shuffle. for randomly placing obstacles:
*/

//TODO: debug (not including the last couple of indices for the shuffle)
void Grid::randomizeObstaclePlacement(int numberOfObstacles)
{   
    // placing number of obstacles on grid
    for (int i = 0; i<numberOfObstacles; i++)
    {
        coords[i] = 1;
    }
    // randomize the coordinates at which we place the obstacles
   int maxIndex = (ROWS-1) * (COLS-1) + ROWS;
   for (int i = maxIndex; i>0; i--)
   {
    int j = pickRandomNumber(0,i);
    int temp = coords[i];
    coords[i] = coords[j];
    coords[j] = temp;
   }

}

void Grid::printGrid() const
{
        // top edge output
        std::cout << "+";
        for (int i = 1; i < (ROWS * 4) - 2; i++)
        {
            std::cout << "-";
        }
        std::cout << "+";
        std::cout << std::endl;
    
        // grid output
        for (int i = 0; i < ROWS; i++)
        {
            for (int j = 0; j < COLS; j++)
            {   
                if(coords[i * COLS + j] == 1)
                    std::cout << "|#| "; 
                else
                    std::cout << "|.| ";
            }
            if (i == ROWS - 1)
            {
                std::cout << std::endl;
                break;
            }
            std::cout << std::endl
                      << std::endl;
        }
    
        // bottom edge output
        std::cout << "+";
        for (int i = 1; i < (ROWS * 4) - 2; i++)
        {
            std::cout << "-";
        }
        std::cout << "+";
    
        std::cout << std::endl;
}


//inclusive
//TODO decide wheter or not the engine should be a private member
// instead of a local in this function (it is expensive to keep creating a new engine for each function call)
int Grid::pickRandomNumber(int minimum, int maximum) const
{   
    /* 
    random device{}() returns a seed that we pass into the engine
    "rng" that produces the long stream of random numbers.

    uniform_int_distribution allows us to map raw engine output into 
    the desired range
    */ 
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist (minimum,maximum);

    return dist(rng);

}