#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int64_t ___syscall_malloc()
{
    puts("Nope.");
    exit(1);
    /* no return */
}

int64_t ____syscall_malloc()
{
    return puts("Good job.");
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    int32_t var_c = 0;
    int64_t rax;
    rax = 0;
    printf("Please enter key: ");
    int64_t rax_1;
    rax_1 = 0;
    char var_48;
    if (1 != __isoc99_scanf("%23s", &var_48))
    {
        ___syscall_malloc();
        /* no return */
    }
    char var_47;
    if (0x32 != var_47)
    {
        ___syscall_malloc();
        /* no return */
    }
    if (0x34 != var_48)
    {
        ___syscall_malloc();
        /* no return */
    }
    fflush(0);
    char var_29;
    memset(&var_29, 0, 9);
    var_29 = 0x2a;
    char var_49 = 0;
    int64_t var_20 = 2;
    int32_t var_14 = 1;
    while (1)
    {
        char var_4d_1 = 0;
        int64_t rax_4;
        if (strlen(&var_29) < 8)
        {
            rax_4 = var_20 < strlen(&var_48);
            var_4d_1 = rax_4;
        }
        rax_4 = var_4d_1;
        if ((rax_4 & 1) == 0)
        {
            break;
        }
        int64_t rax_7;
        rax_7 = &var_48[var_20];
        char nptr = rax_7;
        int64_t rax_8;
        rax_8 = &var_47[var_20];
        char var_4b_1 = rax_8;
        void var_46;
        int64_t rax_9;
        rax_9 = *(&var_46 + var_20);
        char var_4a_1 = rax_9;
        &var_29[var_14] = atoi(&nptr);
        var_20 = (var_20 + 3);
        var_14 = (var_14 + 1);
    }
    &var_29[var_14] = 0;
    switch (strcmp(&var_29, "********"))
    {
        case 0:
        {
            ____syscall_malloc();
            return 0;
            break;
        }
        case 1:
        {
            ___syscall_malloc();
            /* no return */
        }
        case 2:
        {
            ___syscall_malloc();
            /* no return */
        }
        case 3:
        {
            ___syscall_malloc();
            /* no return */
        }
        case 4:
        {
            ___syscall_malloc();
            /* no return */
        }
        case 5:
        {
            ___syscall_malloc();
            /* no return */
        }
        case 0x73:
        {
            ___syscall_malloc();
            /* no return */
        }
        case 0xfffffffe:
        {
            ___syscall_malloc();
            /* no return */
        }
        case 0xffffffff:
        {
            ___syscall_malloc();
            /* no return */
        }
    }
    ___syscall_malloc();
    /* no return */
}
