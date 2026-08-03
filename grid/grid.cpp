#include <iostream>
#include "grid.h"


Grid::Grid()

{
    for (int i = 0; i<ROWS*COLS; i++)
    {
        coords[i] = 0;
    }

    randomizeObstaclePlacement(5);
    // TODO place character at (0,0), will use 100 for now
    coords[coordinateConverter(0,0)] = 100;
    printGrid(); 
}

/*
approach is fisher-yates shuffle. for randomly placing obstacles:
*/

//TODO need to figure out how we place it onto the coords grid and also move this randomize into the constructor
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
    rng = std::mt19937(std::random_device{}());
    dist = std::uniform_int_distribution<int> (0, i);

    int j = dist(rng);
    int temp = coords[i];
    coords[i] = coords[j];
    coords[j] = temp;
   }

}
/*
TODO need to figure out how we take in a coordinate and convert to spot in coords array
*/
int Grid::coordinateConverter(int x, int y) const
{
    return x * COLS + y;
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
                // Placing obstacle
                if(coords[i * COLS + j] == 1)
                    std::cout << "|#| "; 
                else if (coords[i * COLS + j] == 100)
                    std::cout << "|P|";
                // empty spot
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

void Grid::movePlayer(std::string direction)
{
    std::cout << "move command was typed" << std::endl;
}