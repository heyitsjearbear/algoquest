#include <string>
#include <vector>
std::string getCommand();

void executeCommand(const std::vector<std::string> &tokenList,
                    int ROWS, int COLS);

bool checkSpace(const std::string &cmd);

// store token function for commands
std::vector<std::string> createTokenList(const std::string &cmd);
