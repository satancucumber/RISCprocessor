#include <Command.h>
#include <Cpu.h>
#include <CoProcessor.h>
#include <vector>
#include <functional>

class MemProcessor {
    std::bitset<32> *DataInt[32];
    std::bitset<32> *DataFloat[32];
    void (*Commands[32])(
        Command command
        );

    MemProcessor(*Cpu cpu, *CoProcessor coProc) {
        for (int i = 0; i < 32; ++i) {
            DataInt[i]->reset();  // Сбрасываем все биты в 0
            DataFloat[i]->reset();
        }
        this.Commands = {
            &(cpu->RDB),
            &(cpu->RDHW),
            &(cpu->RDW),
            &(cpu->WRB),
            &(cpu->WRHW),
            &(cpu->WRW),
            &(cpu->IN),
            &(cpu->OUT),
            &(cpu->MOV),
            &(cpu->MOVI),
            &(cpu->ADD),
            &(cpu->SUB),
            &(cpu->MUL),
            &(cpu->DIV),
            &(cpu->ADDI),
            &(cpu->SUBI),
            &(cpu->MULI),
            &(cpu->DIVI),
            &(cpu->AND),
            &(cpu->OR),
            &(cpu->XOR),
            &(cpu->NOT),
            &(cpu->RCL),
            &(cpu->RCR),
            &(cpu->CLI),
            &(cpu->INT),
            &(cpu->IRET),
            &(cpu->CALL),
            &(cpu->RET),
            &(cpu->JMP),
            &(cpu->JZ),
            &(cpu->JNZ),
            &(cpu->JO),
            &(cpu->JNO),
            &(cpu->JC),
            &(cpu->JNC),
            &(cpu->JS),
            &(cpu->JNS),
            &(cpu->RFL),
            &(cpu->WFL),
            &(cpu->RTLBR),
            &(cpu->WTLBR),
            &(cpu->RISR),
            &(cpu->WISR),
            &(cpu->RBVA),
            &(cpu->RFE),
            &(cpu->SCALL),
            &(cpu->HALT),
            &(cpu->NOP),
            &(coProc->FADD),
            &(coProc->FSUB),
            &(coProc->FMUL),
            &(coProc->FDIV),
            &(coProc->FMOV),
            &(coProc->FRDW),
            &(coProc->FWRW),
            &(coProc->MFC),
            &(coProc->MCF)
        };
    }

    void *getCommand(Command command) {
        return this.Commands[command.CO];
    }
};


