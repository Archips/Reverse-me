#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* int32_t (* const)() _init() */
/* { */
/*     int32_t (* const eax)() = __gmon_start__; */
/*     if (__gmon_start__ != 0) */
/*     { */
/*         eax = __gmon_start__(); */
/*     } */
/*     return eax; */
/* } */

/* int32_t sub_1030() */
/* { */
/*     int32_t var_4 = data_7004; */
/*     /1* jump -> data_7008 *1/ */
/* } */

/* int32_t strcmp(char const* arg1, char const* arg2) */
/* { */
/*     /1* tailcall *1/ */
/*     return strcmp(arg1, arg2); */
/* } */

/* int32_t sub_1046() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0); */
/* } */

/* void __libc_start_main(int32_t (* main)(int32_t argc, char** argv, char** envp), int32_t argc, char** ubp_av, void (* init)(), void (* fini)(), void (* rtld_fini)(), void* stack_end) __noreturn */
/* { */
/*     /1* tailcall *1/ */
/*     return __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end); */
/* } */

/* int32_t sub_1056() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(8); */
/* } */

/* int32_t printf(char const* format, ...) */
/* { */
/*     /1* tailcall *1/ */
/*     return printf(); */
/* } */

/* int32_t sub_1066() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x10); */
/* } */

/* int32_t fflush(FILE* fp) */
/* { */
/*     /1* tailcall *1/ */
/*     return fflush(fp); */
/* } */

/* int32_t sub_1076() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x18); */
/* } */

/* int32_t puts(char const* str) */
/* { */
/*     /1* tailcall *1/ */
/*     return puts(str); */
/* } */

/* int32_t sub_1086() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x20); */
/* } */

/* void exit(int32_t status) __noreturn */
/* { */
/*     /1* tailcall *1/ */
/*     return exit(status); */
/* } */

/* int32_t sub_1096() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x28); */
/* } */

/* size_t strlen(char const* arg1) */
/* { */
/*     /1* tailcall *1/ */
/*     return strlen(arg1); */
/* } */

/* int32_t sub_10a6() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x30); */
/* } */

/* int32_t memset(void* arg1, int32_t arg2, size_t arg3) */
/* { */
/*     /1* tailcall *1/ */
/*     return memset(arg1, arg2, arg3); */
/* } */

/* int32_t sub_10b6() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x38); */
/* } */

/* int32_t __isoc99_scanf(char const* format, ...) */
/* { */
/*     /1* tailcall *1/ */
/*     return __isoc99_scanf(); */
/* } */

/* int32_t sub_10c6() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x40); */
/* } */

/* int32_t atoi(char const* nptr) */
/* { */
/*     /1* tailcall *1/ */
/*     return atoi(nptr); */
/* } */

/* int32_t sub_10d6() */
/* { */
/*     /1* tailcall *1/ */
/*     return sub_1030(0x48); */
/* } */

/* void __cxa_finalize(void* d) */
/* { */
/*     /1* tailcall *1/ */
/*     return __cxa_finalize(d); */
/* } */

/* int32_t __convention("regparm") _start(int32_t arg1, void (* arg2)()) __noreturn */
/* { */
/*     int32_t stack_end = arg1; */
/*     __libc_start_main(main, __return_addr, &ubp_av, nullptr, nullptr, arg2, &stack_end); */
/*     /1* no return *1/ */
/* } */

/* int32_t sub_111c() __pure */
/* { */
/*     return; */
/* } */

/* int32_t __x86.get_pc_thunk.bx() __pure */
/* { */
/*     return; */
/* } */

/* void* deregister_tm_clones() */
/* { */
/*     return &__TMC_END__; */
/* } */

/* int32_t register_tm_clones() */
/* { */
/*     return 0; */
/* } */

/* void __do_global_dtors_aux() */
/* { */
/*     if (__TMC_END__ == 0) */
/*     { */
/*         if (__cxa_finalize != 0) */
/*         { */
/*             __cxa_finalize(__dso_handle); */
/*         } */
/*         deregister_tm_clones(); */
/*         __TMC_END__ = 1; */
/*     } */
/* } */

/* int32_t frame_dummy() */
/* { */
/*     /1* tailcall *1/ */
/*     return register_tm_clones(); */
/* } */

/* int32_t __x86.get_pc_thunk.dx() __pure */
/* { */
/*     return; */
/* } */

int32_t no()
{
    puts("Nope.");
    exit(1);
    /* no return */
}

int32_t xd()
{
    puts("Iii sapores crescit rei habetur …");
    return puts("Author gi ex si im fallat istius…");
}

int32_t ok()
{
    int32_t eax;
    int32_t var_c = eax;
    return puts("Good job.");
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    int32_t var_c = 0;
    printf("Please enter key: ");
    char var_39[1024];
	memset(&var_39, 0, 1024);
	if (1 != scanf("%23s", &var_39))
    {
        no();
        /* no return */
    }
    char var_38;
	printf("var_38 -> %c\n", var_38);
	printf("var_39 -> %c\n", var_39);
    if (0x30 != var_38)
    {
        no();
        /* no return */
    }
    if (0x30 != var_39)
    {
        no();
        /* no return */
    }
	ok();
	/* fflush(*stdin); */
    /* char var_21; */
    char var_21[9];
	memset(&var_21, 0, 9);
    var_21[0] = 0x64;
    char var_3a = 0;
    int32_t var_18 = 2;
    int32_t var_14 = 1;
    while (1)
    {
        char var_45_1 = 0;
        int32_t eax_3;
        if (strlen(var_21) < 8)
        {
            eax_3 = var_18 < strlen(&var_39);
            var_45_1 = eax_3;
        }
        eax_3 = var_45_1;
        if ((eax_3 & 1) == 0)
        {
            break;
        }
        int32_t eax_6;
        eax_6 = var_39[var_18];
        char nptr = eax_6;
        /* int32_t eax_7; */
        /* eax_7 = &var_38[var_18]; */
        /* char var_3c_1 = eax_7; */
        /* void var_37; */
        /* int32_t eax_8; */
        /* eax_8 = *(&var_37 + var_18); */
        /* char var_3b_1 = eax_8; */
        var_21[var_14] = atoi(&nptr);
        var_18 = (var_18 + 3);
        var_14 = (var_14 + 1);
    }
    var_21[var_14] = 0;
    /* if (strcmp(&var_21, "delabere") != 0) */
    if (strcmp(var_21, "delabere") != 0)
    {
    	printf("in last if -> var_21 = %s\n", var_21);
		no();
        /* no return */
    }
    ok();
    return 0;
}

int32_t xxd()
{
    puts("Iii sapores crescit rei habetur …");
    return puts("Author gi ex si im fallat istius…");
}

int32_t n()
{
    int32_t eax;
    int32_t var_c = eax;
    return puts("Nope. ");
}

int32_t xxxd()
{
    puts("Iii sapores crescit rei habetur …");
    return puts("Author gi ex si im fallat istius…");
}

int32_t ww()
{
    puts("Good job. ");
    puts("Please entrer key: ");
    puts("%23s. ");
    puts("delabere. ");
    return puts("%s, ");
}

int32_t xyxxd()
{
    puts("Iii sapores crescit rei habetur …");
    return puts("Author gi ex si im fallat istius…");
}
