#include "commands.h"
#include <iostream>
#include <array>

std::string getCommand()
{
    std::string input;
    std::cout << std::endl
              << "Enter command in: ";

    getline(std::cin, input);

    return input;
}

// TODO needs to be reframed so we check "if not" concept (read up on it to see where we can optimize  )
void executeCommand(Grid &grid, const std::vector<std::string> &tokenList,
                    int ROWS, int COLS)
{
    // TODO need to figure out how we actually order the if statements in here for executing commands
    //  cases where we do have space then here is
    //  parsing  commands
    //  if (checkSpace(cmd))
    //  {
    //  }

    if (tokenList.size() > 2)
    {
        std::cout << "invalid commmand" << std::endl;
        return;
    }
    if (tokenList[0] != "move" && tokenList[0] != "help")
    {
        std::cout << "invalid command" << std::endl;
        return;
    }
    if (tokenList[0] == "help")
    {   
        std::cout << "Available commands: " << std::endl;
        std::cout << "move north" << std::endl;
        std::cout << "move south" << std::endl;
        std::cout << "move east" << std::endl;
        std::cout << "move west" << std::endl;
        return;
    }
    std::array<std::string, 4> directions = {"north", "south", "east", "west"};
    for (auto direction : directions )
    {
        if (tokenList[1] == direction)
        {   
            //TODO this is where you call the move command
            grid.movePlayer(direction);
            break;
        }
    }
    
}

// bool checkSpace(const std::string &cmd)
// {
//     for (int i = 0; i < cmd.length(); i++)
//     {
//         if (cmd[i] == ' ')
//         {
//             return true;
//         }
//     }
//     return false;
// }


std::vector<std::string> createTokenList(const std::string &cmd)
{

    std::vector<std::string> tokenList;
    std::string currentString = "";
    for (int i = 0; i < cmd.length(); i++)
    {
        // check for space
        if (cmd[i] == ' ')
        {
            if (!currentString.empty())
            {
                tokenList.push_back(currentString);
                currentString = "";
            }
        }
        // if not a space
        else
            currentString += cmd[i];
    }
    // add last token if the string isn't empty
    if (!currentString.empty())
    {
        tokenList.push_back(currentString);
    }

    return tokenList;
}