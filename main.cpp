// c/c++ stuff
#include <iostream>

// external stuff that i wrote
#include "grid.h"
#include "commands.h"

int main()
{

    initializeGrid();

    std::string playerInput;

    do
    {
        playerInput = getCommand();
        if (playerInput == "exit")
            break;

        std::vector<std::string> tokenList = createTokenList(playerInput);

        // test: print out commands to command line after typing in command
        for (size_t i = 0; i < tokenList.size(); i++)
        {
            std::cout << tokenList[i] << std::endl;
        }

    } while (playerInput != "exit");

    return 0;
}