#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void no(void) {

	printf("Nope.");
	exit(1);
}

void yes(void) {

	printf("Good job.");
}

int main(void) {

	int				ascii_code;
	size_t			len;
	int				ret;
	char			c1;
	char			c2;
	char			c3;
	char			tmp[3];
	char			key[31];
	char			password[9];
	unsigned long	index_key;
	int				index_pwd;

	printf("Please enter key: ");
	if (scanf("%30s", key) != 1)
		no();
	if (key[0] != '4' || key[1] != '2')
		no();

	fflush(stdin);
	
	memset(password, 0 , 9);
	
	password[0] = '*';
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
	
		index_key = index_key + 3;
		index_pwd = index_pwd + 1;
	}
	
	password[index_pwd] = '\0';

	if (!strcmp(password, "********"))
		yes();
	else
		no();

	return(0);
}
