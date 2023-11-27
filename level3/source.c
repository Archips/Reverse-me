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

	unsigned long	var1;
	int				var2;
	size_t			var3;
	int				var4; // bool
	char			_4c;
	char			_4b;
	char			_4a;
	/* int				_49; */
	char			tmp[3];
	char			_48[31];
	char			_29[9];
	unsigned long	_20;
	int				_18;
	int				_14;
	int				_10;
	/* int				_c; */

	/* _c = 0; */
	printf("Please enter key: ");
	_10 = scanf("%s", _48);
	if (_10 != 1)
		no();
	if (_48[1] != '2')
		no();
	if (_48[0] != '4')
		no();

	fflush(stdin);
	memset(_29, 0 , 9);
	_29[0] = '*';
	/* _49 = 0; */
	_20 = 2;
	_14 = 1;

	while (1) {
	
		var3 = strlen(_29);
		var1 = _20;
		var4 = 0;
		if (var3 < 8) {
			
			var3 = strlen(_48);
			var4 = var1 < var3;
		}
		if (!var4)
			break;
		_4c = _48[_20];
		_4b = _48[_20 + 1];
		_4a = _48[_20 + 2];
		tmp[0] = _4c;
		tmp[1] = _4b;
		tmp[2] = _4a;
		var2 = atoi(tmp);
		_29[_14] = var2;
		_20 = _20 + 3;
		_14 = _14 + 1;
	}
	_29[_14] = '\0';
	_18 = strcmp(_29, "********");
	if (_18 != 0)
		no();
	else
		yes();
	return(0);
}
