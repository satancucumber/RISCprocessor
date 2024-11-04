#include <iostream>
#include <Command.h>
#include <Cpu.h>
#include <MemProcessor.h>
#include <Parser.h>
#include <bitset>

class Gui {
    Cpu *cpu;
    Parser *parser;
    std::string commands;

    void load() {
        std::out >> "Input commands:" << std::endl;
        std::string input;
        input << std::cin;
        while (input != "0") {
            commands = commands + '\n' + input;
            input << std::cin;
        }
        
    }

    void start() {

    }

    void next() {

    }

    void stop() {

    }

    void exit() {

    }
};
