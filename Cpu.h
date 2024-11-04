#include <list>
#include <Command.h>
#include <CoProcessor.h>
#include <MemProcessor.h>

class Cpu {
    MemProcessor *memProc;
    CoProcessor *coProc;
    std::list<Command> queue {};
    std::bitset<32> *RG[32];
    std::bitset<8> *FLR;
    std::bitset<32> PCR;
    std::bitset<32> PTP;
    std::bitset<32> TINT;
    std::bitset<32> TLB;
    std::bitset<32> BVA;
    std::bitset<32> *memory;
    std::bitset<32> *inputPin;
    std::bitset<32> *outputPin;

    Cpu() {
        this.FLR->reset();
        coProc = new CoProcessor(&this);
        memProc = new MemProcessor(&this, coProc);
        this.RG = memProc->DataInt;
        this.PCR.reset();
        this.PTP.reset();
        this.TINT.reset();
        this.TLB.reset();
        this.BVA.reset();

    }

    void makeStep() {

    }

    void executeCommand(Command command) {
        
    }

    std::bitset<32> readRG(int reg) {

    }

    std::bitset<32> readFR(int reg) {

    }

    std::bitset<32> readFlags() {

    }

    void setCommands(std::list<Command> commands) { 
        command.merge(this.queue)

    }

    void setMemory(std::bitset<32> *memory[1024]) {
        
    }

    //Commands

    void RDB(Command command) {

    }

    void RDHW(Command command) {

    }

    void RDW(Command command) {

    }

    void WRB(Command command) {

    }

    void WRHW(Command command) {

    }

    void WRW(Command command) {

    }

    void IN(Command command) {

    }

    void OUT(Command command) {

    }

    void MOV(Command command) {

    }

    void MOVI(Command command) {

    }

    void ADD(Command command) {

    }

    void SUB(Command command) {

    }

    void MUL(Command command) {

    }

    void DIV(Command command) {

    }

    void ADDI(Command command) {

    }

    void SUBI(Command command) {

    }

    void MULI(Command command) {

    }

    void DIVI(Command command) {

    }

    void AND(Command command) {

    }

    void OR(Command command) {

    }

    void XOR(Command command) {

    }

    void NOT(Command command) {

    }

    void RCL(Command command) {

    }

    void RCR(Command command) {

    }

    void CLI(Command command) {

    }

    void INT(Command command) {

    }

    void IRET(Command command) {

    }

    void CALL(Command command) {

    }

    void RET(Command command) {

    }

    void JMP(Command command) {

    }

    void JZ(Command command) {

    }

    void JNZ(Command command) {

    }

    void JO(Command command) {

    }

    void JNO(Command command) {

    }

    void JC(Command command) {

    }

    void JNC(Command command) {

    }

    void JS(Command command) {

    }

    void JNS(Command command) {

    }

    void RFL(Command command) {

    }

    void WFL(Command command) {

    }

    void RTLBR(Command command) {

    }

    void WTLBR(Command command) {

    }

    void RISR(Command command) {

    }

    void WISR(Command command) {

    }

    void RBVA(Command command) {

    }

    void RFE(Command command) {

    }

    void SCALL(Command command) {

    }

    void HALT(Command command) {

    }

    void NOP(Command command) {

    }

};
