#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void no()
{
	printf("Nope.\n");
	exit(1);
}

void ok(void) {

	printf("Good job.\n");
}

int main(void) {

	size_t			len;
	int				ascii_code;
	int				ret;
	char			c1;
	char			c2;
	char			c3;
	char			tmp[3];
	char			key[24];
	char			password[9];
	unsigned int	index_key;
	int				index_pwd;

	printf("Please enter key: ");
	if (scanf("%23s", key) != 1)
		no();
	if (key[0] != '0' || key[1] != '0')
		no();
	
	fflush(stdin);

	memset(password, 0, 9);

	password[0] = 'd';
	index_key = 2;
	index_pwd = 1;

	while (1) {
	
		len = strlen(password);
		ret = 0;
		
		if (len < 8) {

			len = strlen(key);
			ret = index_key < len;
		}
		
		if (!ret)
			break;
		
		c1 = key[index_key];
		c2 = key[index_key + 1];
		c3 = key[index_key + 2];
		
		tmp[0] = c1;
		tmp[1] = c2;
		tmp[2] = c3;
		
		ascii_code = atoi(tmp);
		password[index_pwd] = ascii_code;
		
		index_key += 3;
		index_pwd ++;
	}

	password[index_pwd] = '\0';
	
	if (!strcmp(password, "delabere"))
		ok();
	else
		no();
	
	return (0);
}
