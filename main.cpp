// external stuff that i wrote
#include "grid.h"
#include "commands.h"

int main()
{   

    Grid grid;

    std::string playerInput;

    do
    {
        playerInput = getCommand();
        if (playerInput == "exit")
            break;

        std::vector<std::string> tokenList = createTokenList(playerInput);

        // test: print out commands to command line after typing in command
        // for (size_t i = 0; i < tokenList.size(); i++)
        // {
        //     std::cout << "COMMAND TYPED: " << tokenList[i] << std::endl;
        // }

        executeCommand(tokenList, ROWS, COLS);

    } while (playerInput != "exit");

    return 0;
}