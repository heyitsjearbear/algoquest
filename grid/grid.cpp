#include <iostream>

#include "grid.h"

void initializeGrid()
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