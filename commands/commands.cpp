#include "commands.h"
#include <iostream>

std::string getCommand()
{   
    std::string input;
    std::cout << "Enter command in: ";

    getline(std::cin, input);

    return input;
}


void executeCommand(const std::string &cmd, 
                        int &row, int &col)
{   
    // cases where we do have space then here is
    // parsing  commands
    if (checkSpace(cmd)){

    }
}

bool checkSpace(const std::string &cmd)
{
    for (int i= 0; i<cmd.length(); i++)
    {
        if (cmd[i]== ' ')
        {
            return true;
        }
    }
    return false;
}

//TODO handle edge case where there is 2 or more
// spaces in between two tokens
std::vector<std::string> createTokenList(const std::string &cmd)
{   
    int firstPointer = 0;
    int secondPointer = 0;
    int amountOfTokens = 0;
    std::vector<std::string> tokenList;
    for(int i = 0; i< cmd.length(); i++)
    {   
        //TODO handle logic for creating list of tokens from command
        if (cmd[i] == ' ')
        {
            secondPointer = i;
            
            
        }
    }
}