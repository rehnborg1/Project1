#include "headerlys.h"

int main(void)
{
	setup(); // anropar setup

	
	while (1)
	{
		sekvensfram(); // anropar sekvens fram�t
		sekvensbak(); // anropar sekvens bak�t
		lys_off(); // anropar knappar av, lysdioder av
		lys_on(); // anropar knappar p�, lysdioder p�
	}

	return 0;
}
