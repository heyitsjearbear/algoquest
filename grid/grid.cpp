#include <iostream>
#include "grid.h"

// TODO enum for types of values map to what (enemy, obstacle, player etc)
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
    playerIndex = pairToIndex(0,0);
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

// TODO refactor later LOL (Pass in your coords grid, and the 
// coords you want to go to and return true/false if it's a valid move or not?)
void Grid::movePlayer(std::string direction)
{   
    if (direction == "north")
    {   
        if (playerCoords.x - 1 < 0)
        {
            std::cout << "coords out of bounds" << std::endl;
            return;
        }
        if (coords[pairToIndex(playerCoords.x-1, playerCoords.y)] == 1)
        {
            std::cout << "obstacle in the way" << std::endl;
            return;
        }
        coords[playerIndex] = 0;
        playerCoords.x -= 1;
        playerIndex = pairToIndex(playerCoords.x, playerCoords.y);
        coords[playerIndex] = 100;
        
    }
    else if (direction == "south")
    {   
        if (playerCoords.x + 1 == ROWS)
        {
            std::cout << "coords out of bounds" << std::endl;
            return;
        }
        if (coords[pairToIndex(playerCoords.x + 1,playerCoords.y)] == 1)
        {
            std::cout << "obstacle in the way" << std::endl;
            return;
        }
        coords[playerIndex] = 0;
        playerCoords.x += 1;
        playerIndex = pairToIndex(playerCoords.x, playerCoords.y);
        coords[playerIndex] = 100;
    }
    else if (direction == "east")
    {   
        if (playerCoords.y + 1 == COLS)
        {
            std::cout << "coords out of bounds" << std::endl;
            return;
        }
        if (coords[pairToIndex(playerCoords.x, playerCoords.y+1)] == 1)
        {
            std:: cout << "obstacle in the way" << std::endl;
            return;
        }
        coords[playerIndex] = 0;
        playerCoords.y += 1;
        playerIndex = pairToIndex(playerCoords.x, playerCoords.y);
        coords[playerIndex] = 100;
    }
    else if (direction == "west")
    {   
        if (playerCoords.y - 1 < 0)
        {
            std::cout << "coords out of bounds" << std::endl;
            return;
        }
        if (coords[pairToIndex(playerCoords.x, playerCoords.y - 1)] == 1)
        {
            std::cout << "ostacle in the way" << std::endl;
            return;
        }
        coords[playerIndex] = 0;
        playerCoords.y -=1;
        playerIndex = pairToIndex(playerCoords.x, playerCoords.y);
        coords[playerIndex] = 100;
    }
}

int Grid::getPlayerIndex() const
{
    return playerIndex;
}