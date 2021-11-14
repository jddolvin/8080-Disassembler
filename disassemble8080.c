/* Algorithm for disassembling 8080 code:
 1.) Read the code into a buffer

 2.) Get a pointer to the beginning of the buffer

 3.) Use the byte at the pointer to determine the opcode

 4.) Print out the name of the opcode using the bytes 
 after the opcode as data, if applicable.
 
 5.) Advance the pointer the number of bytes used by that instruction
 (1, 2, or 3 bytes for the 8080 instruction set)
 
 6.) If not at the end of the buffer, go to step 3
*/

int Disassemble8080Op(unsigned char *codeBuffer, int pc)
{
    unsigned char *code = &codeBuffer[pc];
    int opbytes = 1;
    printf("%04x ", pc);
    switch (*code)
    {
        case 0x00: printf("NOP"); break;
        case 0x01: printf("LXI  B,#%02x%02x", code[2], code[1]); opbytes=3; break;
        case 0x02: printf("STAX B"); break;
        case 0x03: printf("INX  B"); break;
        case 0x04: printf("INR  B"); break;
        case 0x05: printf("DCR  B"); break;
        case 0x06: printf("MVI  B,#$%02x", code[1]); opbytes=2; break;
        case 0x07: printf("RLC"); break;
        case 0x08: printf("NOP"); break;

    }
    printf("\n");
    return opbytes;
}