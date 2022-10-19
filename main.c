#include "headerlys.h"

int main(void)
{
	setup(); // anropar setup

	
	while (1)
	{
		sekvensfram(); // anropar sekvens framåt
		sekvensbak(); // anropar sekvens bakåt
		lys_off(); // anropar knappar av, lysdioder av
		lys_on(); // anropar knappar på, lysdioder på
	}

	return 0;
}
