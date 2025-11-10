#include <string>
#include <vector>
std::string getCommand();

void executeCommand(const std::string &cmd, 
                        int &row, int &col);

bool checkSpace(const std::string &cmd);

//store token function for commands
std::vector<std::string> createTokenList(const std::string &cmd);

                       
