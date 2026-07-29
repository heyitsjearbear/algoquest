#ifndef COMMANDS_H
#define COMMANDS_H


#include "../grid/grid.h"


std::string getCommand();

//TODO decide whether or not you need to use globals in commands header and implementaiton
void executeCommand(Grid &grid, const std::vector<std::string> &tokenList,
                    int ROWS, int COLS);

bool checkSpace(const std::string &cmd);

// store token function for commands
std::vector<std::string> createTokenList(const std::string &cmd);

#endif