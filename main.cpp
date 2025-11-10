//c/c++ stuff
#include <iostream> 

//external stuff that i wrote
#include "grid.h"
#include "commands.h"


int main(){

    drawGrid();

    std::string playerInput;

    do
    {
        playerInput = getCommand();
    } while(playerInput != "quit");
    


    return 0;
}