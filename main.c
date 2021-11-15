#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "disassemble8080.h"

/*
    1.) Open file of compiled 8080 code
    2.) Read it into memory buffer
    3.) Skip through memory buffer calling Dissasemble8080Op
    4.) Advance the PC by amount returned by Disassemble8080Op()
    5.) Quit at the end of the buffer
*/

int main(int argc, char**argv)
{
    FILE *f= fopen(argv[1], "rb");
    if (f==NULL)
    {
        printf("error: Couldn't open %s\n", argv[1]);
        exit(1);
    }

    // Get the file size and read it into a memory buffer
    fseek(f, 0L, SEEK_END);
    int fsize = ftell(f);
    fseek(f, 0L, SEEK_SET);

    unsigned char *buffer = malloc(fsize);

    fread(buffer, 1, fsize, f);
    fclose(f);

    int pc = 0;
    
    while (pc < fsize)
    {
        pc += Disassemble8080Op(buffer, pc);
    }

    return 0;
}