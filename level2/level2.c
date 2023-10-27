#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
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
	char key[1024]; //var_39
	memset(&key, 0, 1024);
	printf("Please enter key: ");
	if (1 != scanf("%s", key))
		no();
	if (key[0] != '0')
		no();
	if (key[1] != '0')
		no();
	printf("key -> %s\n", key);
	fflush(stdin);
	char var_21[9];
	memset(&var_21, 0, 9);
	var_21[0] = 0x64;
	printf("strlen var_21 -> %d\n", strlen(var_21));
	char var_3a = 0;
	int var_18 = 2;
	int var_14 = 1;
	var_21[1] = 0x64;
	printf("2nd strlen var_21 -> %d\n", strlen(var_21));
	/* while (1) { */
	/* 	char var_45_1 = 0; */
	/* 	int eax_3; */
	/* 	if (strlen(var_21) < 8) */
	/* 		eax_3 = var_18 < strlen(key); */
	/* 	if ((eax_3 & 1) == 0) */
	/* 		break; */
	/* 	int eax_6; */
	/* 	printf("key[%d] -> %c\n", var_18, key[var_18]); */
	/* 	eax_6 = key[var_18]; */
	/* 	char nptr = eax_6; */
	/* 	var_21[var_14] = atoi(&nptr); */
	/* 	var_18 = var_18 + 3; */
	/* 	var_14 = var_14 + 1; */
	/* } */
	var_21[var_14] = 0;
	if (strcmp(var_21, "delabere") != 0)
		no();
	ok();
	return (0);
}
