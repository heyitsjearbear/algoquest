#include <iostream>
#include "grid.h"


Grid::Grid()

{   
    //assign empty spots in grid
    for (int i = 0; i<ROWS*COLS; i++)
    {
        coords[i] = 0;
    }

    randomizeObstaclePlacement(3);

    // 100 marks the player, starting is at (0,0)
    playerCoords.x = 0;
    playerCoords.y = 0;
    int playerIndex = pairToIndex(0,0);
    coords[playerIndex] = 100;

    printGrid(); 
}

/*
approach is fisher-yates shuffle. for randomly placing obstacles:
*/
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

int Grid::pairToIndex(int x, int y) const
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
    // TODO utilizePlayerPosition to recalculate updated position
    std::cout << "move command was typed" << std::endl;
    // TODO finish instructions for moving player using playerCoords and playerIndex
    if (direction == "north")
    {
        
    }

}

Grid::Coordinate convertToGrid (int index, int row, int col)
{
    row = index / COLS;
    col = index % COLS;
}