#include <list>
#include <Command.h>
#include <MemProcessor.h>

class CoProcessor {
    MemProcessor *memProc;
    std::bitset<32> *FR[32];
    std::bitset<8> *FLR;
    std::bitset<32> CWR;
    std::bitset<32> SWR;

    CoProcessor(Cpu *cpu) {
        this.memProc = cpu->memProc;
        this.FR = memProc->DataFloat;
        this.FLR = cpu->FLR;
        CWR.reset();
        SWR.reset();
    }

    void executeCommand(Command command) {

    }

    std::bitset<32> readFR(int reg) {

    }
    
    void setFlags(std::bitset<32> *flr) {

    }

    //Commands

    void FADD(Command command) {

    }

    void FSUB(Command command) {

    }

    void FMUL(Command command) {

    }

    void FDIV(Command command) {

    }

    void FMOV(Command command) {

    }

    void FRDW(Command command) {

    }

    void FWRW(Command command) {

    }

    void MFC(Command command) {

    }

    void MCF(Command command) {

    }
};