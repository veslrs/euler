#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LANG_TABLE \
    ENTRY(C, C) \
    ENTRY(CHAPEL, Chapel) \
    ENTRY(CPP, C++) \
    ENTRY(FORTRAN, Fortran) \
    ENTRY(JULIA, Julia) \
    ENTRY(PASCAL, Pascal) \
    ENTRY(PYTHON, Python) \
    ENTRY(RISCV,RISC-V Assembly) \
    ENTRY(RUST, Rust)

typedef enum {
#define ENTRY(a, b) a,
    LANG_TABLE
#undef ENTRY
    LANG_COUNT
} langs;

int main(void)
{
    int roll;
    srand(time(NULL));
    roll = rand() % LANG_COUNT;
#define ENTRY(a, b) if ((roll) == (a)) printf("The language you will use for the next task is: %s\n", #b);
    LANG_TABLE
#undef ENTRY
    return 0;
}
