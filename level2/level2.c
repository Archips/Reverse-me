#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void no(void) {

	printf("Nope.\n");
}

void ok(void) {

	printf("Good job.\n");
}

int main(void) {

	unsigned int	var1;
	size_t			var2;
	int				var3;
	int				var4;
	char			_3d;
	char			_3c;
	char			_3b;
	/* unsigned int	_3a; */
	char			tmp[3];
	char			_39[24];
	char			_21[9];
	unsigned int	_18;
	int				_14;
	/* int				_10; */
	unsigned int	_c;

	_c = 0;
	printf("Please enter key: ");
	_c = scanf("%23s", _39);
	if (_c != 1)
		no();
	if (_39[1] != '0')
		no();
	if (_39[0] != '0')
		no();
	
	fflush(stdin);

	memset(_21, 0, 9);

	_21[0] = 'd';
	/* _3a = 0; */
	_18 = 2;
	_14 = 1;

	while (1) {
		var2 = strlen(_21);
		var1 = _18;
		var4 = 0;
		if (var2 < 8) {

			var2 = strlen(_39);
			var4 = var1 < var2;
		}
		if (!var4)
			break;
		_3d = _39[_18];
		_3c = _39[_18 + 1];
		_3b = _39[_18 + 2];
		tmp[0] = _3d;
		tmp[1] = _3c;
		tmp[2] = _3b;
		var3 = atoi(tmp);
		_21[_14] = var3;
		_18 = _18 + 3;
		_14 = _14 + 1;
	}
	_21[_14] = '\0';
	var3 = strcmp(_21, "delabere");
	if (!var3)
		ok();
	else
		no();
	return (0);
}
