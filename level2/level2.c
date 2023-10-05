#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void no()
{
	printf("Nope.\n");
	exit(1);
}

void ok()
{
	printf("Good job.\n");
	exit(1);
}

int	main(void)
{
	char key[1024];

	printf("Please enter key: ");
	if (1 != scanf("%s", key))
		no();
	if (key[0] != '0')
		no();
	if (key[1] != '0')
		no();
	fflush(stdin);

	int i = -1;
	while (key[++i])
		printf("%c", key[i]);

	/* char nb[4]; */

	/* while (true) { */

		

	/* } */

	return (0);
}


/* int32_t no() __noreturn */
/* { */
/*     puts("Nope."); */
/*     exit(1); */
/*     /1* no return *1/ */
/* } */

/* int32_t ok() */
/* { */
/*     int32_t eax; */
/*     int32_t var_c = eax; */
/*     return puts("Good job."); */
/* } */

/* int32_t main(int32_t argc, char** argv, char** envp) */
/* { */
/*     int32_t var_c = 0; */
/*     printf("Please enter key: "); */
/*     char var_39; */
/*     if (1 != __isoc99_scanf("%23s", &var_39)) */
/*     { */
/*         no(); */
/*         /1* no return *1/ */
/*     } */
/*     char var_38; */
/*     if (0x30 != var_38) */
/*     { */
/*         no(); */
/*         /1* no return *1/ */
/*     } */
/*     if (0x30 != var_39) */
/*     { */
/*         no(); */
/*         /1* no return *1/ */
/*     } */
/*     fflush(*stdin); */
/*     char var_21; */
/*     memset(&var_21, 0, 9); */
/*     var_21 = 0x64; */
/*     char var_3a = 0; */
/*     int32_t var_18 = 2; */
/*     int32_t var_14 = 1; */
/*     while (true) */
/*     { */
/*         char var_45_1 = 0; */
/*         int32_t eax_3; */
/*         if (strlen(&var_21) < 8) */
/*         { */
/*             eax_3 = var_18 < strlen(&var_39); */
/*             var_45_1 = eax_3; */
/*         } */
/*         eax_3 = var_45_1; */
/*         if ((eax_3 & 1) == 0) */
/*         { */
/*             break; */
/*         } */
/*         int32_t eax_6; */
/*         eax_6 = &var_39[var_18]; */
/*         char nptr = eax_6; */
/*         int32_t eax_7; */
/*         eax_7 = &var_38[var_18]; */
/*         char var_3c_1 = eax_7; */
/*         void var_37; */
/*         int32_t eax_8; */
/*         eax_8 = *(&var_37 + var_18); */
/*         char var_3b_1 = eax_8; */
/*         &var_21[var_14] = atoi(&nptr); */
/*         var_18 = (var_18 + 3); */
/*         var_14 = (var_14 + 1); */
/*     } */
/*     &var_21[var_14] = 0; */
/*     if (strcmp(&var_21, "delabere") != 0) */
/*     { */
/*         no(); */
/*         /1* no return *1/ */
/*     } */
/*     ok(); */
/*     return 0; */
/* } */
