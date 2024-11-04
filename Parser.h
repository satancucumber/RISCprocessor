#include <Command.h>
#include <list>
#include <sstream>
#include <vector>
#include <string>
#include <map>

class Parser {
    std::map<std::string, int> commands
    {
        {"rdb", 0},
        {"rdhw", 1},
        {"rdw", 2},
        {"wrb", 3},
        {"wrhw", 4},
        {"wrw", 5},
        {"in", 6},
        {"out", 7},
        {"mov", 8},
        {"movi", 9},
        {"add", 12},
        {"sub", 13},
        {"mul", 14},
        {"div", 15},
        {"addi", 16},
        {"subi", 17},
        {"muli", 18},
        {"divi", 19},
        {"and", 20},
        {"or", 21},
        {"xor", 22},
        {"not", 23},
        {"rcl", 24},
        {"rcr", 25},
        {"cli", 26},
        {"int", 28},
        {"iret", 29},
        {"call", 30},
        {"ret", 31},
        {"jmp", 32},
        {"jz", 33},
        {"jnz", 34},
        {"jo", 35},
        {"jno", 36},
        {"jc", 37},
        {"jnc", 38},
        {"js", 39},
        {"jns", 40},
        {"rfl", 41},
        {"wfl", 42},
        {"rtlbr", 43},
        {"wtlbr", 44},
        {"risr", 45},
        {"wisr", 46},
        {"rbva", 51},
        {"rfe", 47},
        {"scall", 48},
        {"halt", 49},
        {"nop", 50},
        {"fadd", 56},
        {"fsub", 57},
        {"fmul", 58},
        {"fdiv", 59},
        {"fmov", 60},
        {"frdw", 61},
        {"fwrw", 62},
        {"mfc", 63},
        {"mcf", 63}
    };

    std::list<Command> parseCommands(const std::string& input) {
        std::list<Command> commandList {};
        std::istringstream stream(input);
        std::string line;

        while (std::getline(stream, line)) {
            std::istringstream lineStream(line);
            std::vector<std::string> tokens;
            std::string token;

            // Считываем все токены в строке
            while (lineStream >> token) {
                if (token[0] == 'r') {
                    tokens.push_back(token.substr(1));
                }
                else {
                    tokens.push_back(token);
                }
                
            }

            // Добавляем пустую строку, если необходимо
            while (tokens.size() < 4) {
                tokens.push_back("0");
            }

            Command command(this->commands[tokens[0]], std::stoi(tokens[1]), std::stoi(tokens[2]), std::stoi(tokens[3]));

            commandList.push_back(command);
        }

        return commandList;
    }
};