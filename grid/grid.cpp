#include <iostream>

#include "grid.h"

void drawGrid(){
    for (int i=0; i<ROWS; i++)
    {
        for (int j = 0; j<COLS; j++)
        {
            std::cout << "|*|";
        }
        std::cout << std::endl;
    }
}