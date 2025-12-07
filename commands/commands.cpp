#include "commands.h"
#include <iostream>

std::string getCommand()
{
    std::string input;
    std::cout << std::endl
              << "Enter command in: ";

    getline(std::cin, input);

    return input;
}

// void executeCommand(const std::string &cmd,
//                     int &row, int &col)
// {
//     // cases where we do have space then here is
//     // parsing  commands
//     if (checkSpace(cmd))
//     {
//     }
// }

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

// TODO handle edge case where there is 2 or more
//  spaces in between two tokens
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
        //if not a space
        else currentString += cmd[i];
    }
    // add last token if the string isn't empty
    if (!currentString.empty())
    {
        tokenList.push_back(currentString);
    }

    return tokenList;
}