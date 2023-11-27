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
