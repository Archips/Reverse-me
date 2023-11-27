#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*password = "__stack_check";
	char	key[1024];

	printf("Please enter key: ");
	scanf("%s", key);
	if (strcmp(password, key))
	{
		printf("Nope.\n");
	}
	else
	{
		printf("Good job.\n");
	}
	return (0);
}

/* int32_t main(int32_t argc, char** argv, char** envp) */
/* { */
/*     int32_t var_c = 0; */
/*     int32_t var_7e; */
/*     __builtin_strcpy(&var_7e, "__stack_check"); */
/*     printf("Please enter key: "); */
/*     void var_70; */
/*     __isoc99_scanf(&data_2029, &var_70, &_GLOBAL_OFFSET_TABLE_); */
/*     if (strcmp(&var_70, &var_7e) != 0) */
/*     { */
/*         printf("Nope.\n"); */
/*     } */
/*     else */
/*     { */
/*         printf("Good job.\n"); */
/*     } */
/*     return 0; */
/* } */
