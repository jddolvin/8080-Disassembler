#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct ConditionCodes
{
    uint8_t z : 1;
    uint8_t s : 1;
    uint8_t p : 1;
    uint8_t cy : 1;
    uint8_t ac : 1;
    uint8_t pad : 3;
} ConditionCodes;

typedef struct State8080
{
    uint8_t a;
    uint8_t b;
    uint8_t c;
    uint8_t d;
    uint8_t e;
    uint8_t h;
    uint8_t l;
    uint16_t sp;
    uint16_t pc;
    uint8_t *memory;
    struct ConditionCodes cc;
    uint8_t int_enable;
} State8080;

void UnimplementedInstruction(State8080 *state)
{
    //pc will have advanced one, so undo that
    printf("Error: Unimplemented instruction\n");
    exit(1);
}

int Emulate8080Op(State8080 *state)
{
    unsigned char *opcode = &state->memory[state->pc];

    switch (*opcode)
    {
    case 0x00:
        UnimplementedInstruction(state);
        break;
    case 0x01:
        UnimplementedInstruction(state);
        break;
    case 0x02:
        UnimplementedInstruction(state);
        break;
    case 0x03:
        UnimplementedInstruction(state);
        break;
    case 0x04:
        UnimplementedInstruction(state);
        break;
    case 0x05:
        UnimplementedInstruction(state);
        break;
    case 0x06:
        UnimplementedInstruction(state);
        break;
    case 0x07:
        UnimplementedInstruction(state);
        break;
    case 0x08:
        UnimplementedInstruction(state);
        break;
    case 0x09:
        UnimplementedInstruction(state);
        break;
    case 0x0a:
        UnimplementedInstruction(state);
        break;
    case 0x0b:
        UnimplementedInstruction(state);
        break;
    case 0x0c:
        UnimplementedInstruction(state);
        break;
    case 0x0d:
        UnimplementedInstruction(state);
        break;
    case 0x0e:
        UnimplementedInstruction(state);
        break;
    case 0x0f:
        UnimplementedInstruction(state);
        break;
    case 0x10:
        UnimplementedInstruction(state);
        break;
    case 0x11:
        UnimplementedInstruction(state);
        break;
    case 0x12:
        UnimplementedInstruction(state);
        break;
    case 0x13:
        UnimplementedInstruction(state);
        break;
    case 0x14:
        UnimplementedInstruction(state);
        break;
    case 0x15:
        UnimplementedInstruction(state);
        break;
    case 0x16:
        UnimplementedInstruction(state);
        break;
    case 0x17:
        UnimplementedInstruction(state);
        break;
    case 0x18:
        UnimplementedInstruction(state);
        break;
    case 0x19:
        UnimplementedInstruction(state);
        break;
    case 0x1a:
        UnimplementedInstruction(state);
        break;
    case 0x1b:
        UnimplementedInstruction(state);
        break;
    case 0x1c:
        UnimplementedInstruction(state);
        break;
    case 0x1d:
        UnimplementedInstruction(state);
        break;
    case 0x1e:
        UnimplementedInstruction(state);
        break;
    case 0x1f:
        UnimplementedInstruction(state);
        break;
    case 0x20:
        UnimplementedInstruction(state);
        break;
    case 0x21:
        UnimplementedInstruction(state);
        break;
    case 0x22:
        UnimplementedInstruction(state);
        break;
    case 0x23:
        UnimplementedInstruction(state);
        break;
    case 0x24:
        UnimplementedInstruction(state);
        break;
    case 0x25:
        UnimplementedInstruction(state);
        break;
    case 0x26:
        UnimplementedInstruction(state);
        break;
    case 0x27:
        UnimplementedInstruction(state);
        break;
    case 0x28:
        UnimplementedInstruction(state);
        break;
    case 0x29:
        UnimplementedInstruction(state);
        break;
    case 0x2a:
        UnimplementedInstruction(state);
        break;
    case 0x2b:
        UnimplementedInstruction(state);
        break;
    case 0x2c:
        UnimplementedInstruction(state);
        break;
    case 0x2d:
        UnimplementedInstruction(state);
        break;
    case 0x2e:
        UnimplementedInstruction(state);
        break;
    case 0x2f:
        UnimplementedInstruction(state);
        break;
    case 0x30:
        UnimplementedInstruction(state);
        break;
    case 0x31:
        UnimplementedInstruction(state);
        break;
    case 0x32:
        UnimplementedInstruction(state);
        break;
    case 0x33:
        UnimplementedInstruction(state);
        break;
    case 0x34:
        UnimplementedInstruction(state);
        break;
    case 0x35:
        UnimplementedInstruction(state);
        break;
    case 0x36:
        UnimplementedInstruction(state);
        break;
    case 0x37:
        UnimplementedInstruction(state);
        break;
    case 0x38:
        UnimplementedInstruction(state);
        break;
    case 0x39:
        UnimplementedInstruction(state);
        break;
    case 0x3a:
        UnimplementedInstruction(state);
        break;
    case 0x3b:
        UnimplementedInstruction(state);
        break;
    case 0x3c:
        UnimplementedInstruction(state);
        break;
    case 0x3d:
        UnimplementedInstruction(state);
        break;
    case 0x3e:
        UnimplementedInstruction(state);
        break;
    case 0x3f:
        UnimplementedInstruction(state);
        break;
    case 0x40:
        UnimplementedInstruction(state);
        break;
    case 0x41:
        UnimplementedInstruction(state);
        break;
    case 0x42:
        UnimplementedInstruction(state);
        break;
    case 0x43:
        UnimplementedInstruction(state);
        break;
    case 0x44:
        UnimplementedInstruction(state);
        break;
    case 0x45:
        UnimplementedInstruction(state);
        break;
    case 0x46:
        UnimplementedInstruction(state);
        break;
    case 0x47:
        UnimplementedInstruction(state);
        break;
    case 0x48:
        UnimplementedInstruction(state);
        break;
    case 0x49:
        UnimplementedInstruction(state);
        break;
    case 0x4a:
        UnimplementedInstruction(state);
        break;
    case 0x4b:
        UnimplementedInstruction(state);
        break;
    case 0x4c:
        UnimplementedInstruction(state);
        break;
    case 0x4d:
        UnimplementedInstruction(state);
        break;
    case 0x4e:
        UnimplementedInstruction(state);
        break;
    case 0x4f:
        UnimplementedInstruction(state);
        break;
    case 0x50:
        UnimplementedInstruction(state);
        break;
    case 0x51:
        UnimplementedInstruction(state);
        break;
    case 0x52:
        UnimplementedInstruction(state);
        break;
    case 0x53:
        UnimplementedInstruction(state);
        break;
    case 0x54:
        UnimplementedInstruction(state);
        break;
    case 0x55:
        UnimplementedInstruction(state);
        break;
    case 0x56:
        UnimplementedInstruction(state);
        break;
    case 0x57:
        UnimplementedInstruction(state);
        break;
    case 0x58:
        UnimplementedInstruction(state);
        break;
    case 0x59:
        UnimplementedInstruction(state);
        break;
    case 0x5a:
        UnimplementedInstruction(state);
        break;
    case 0x5b:
        UnimplementedInstruction(state);
        break;
    case 0x5c:
        UnimplementedInstruction(state);
        break;
    case 0x5d:
        UnimplementedInstruction(state);
        break;
    case 0x5e:
        UnimplementedInstruction(state);
        break;
    case 0x5f:
        UnimplementedInstruction(state);
        break;
    case 0x60:
        UnimplementedInstruction(state);
        break;
    case 0x61:
        UnimplementedInstruction(state);
        break;
    case 0x62:
        UnimplementedInstruction(state);
        break;
    case 0x63:
        UnimplementedInstruction(state);
        break;
    case 0x64:
        UnimplementedInstruction(state);
        break;
    case 0x65:
        UnimplementedInstruction(state);
        break;
    case 0x66:
        UnimplementedInstruction(state);
        break;
    case 0x67:
        UnimplementedInstruction(state);
        break;
    case 0x68:
        UnimplementedInstruction(state);
        break;
    case 0x69:
        UnimplementedInstruction(state);
        break;
    case 0x6a:
        UnimplementedInstruction(state);
        break;
    case 0x6b:
        UnimplementedInstruction(state);
        break;
    case 0x6c:
        UnimplementedInstruction(state);
        break;
    case 0x6d:
        UnimplementedInstruction(state);
        break;
    case 0x6e:
        UnimplementedInstruction(state);
        break;
    case 0x6f:
        UnimplementedInstruction(state);
        break;
    case 0x70:
    
    /*....*/
    case 0xfe:
        UnimplementedInstruction(state);
        break;
    case 0xff:
        UnimplementedInstruction(state);
        break;
    }
    state->pc += 1; //for the opcode
}
