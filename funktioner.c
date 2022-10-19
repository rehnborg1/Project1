#include "headerlys.h"

///////////////////////////////////////////// Initierar portarna /////////////////////////////////////////
void setup(void)
{
	DDRD = ((1 << LYS1) | (1 << LYS2));
	DDRB = (1 << LYS3);
	PINB = (1 << KNAPP1);
	PINB = (1 << KNAPP2);
	
	return;
}

///////////////////////////////////////////// sekvens framåt /////////////////////////////////////////////
void sekvensfram()
{
	if ((KNAPP1ON) && (!KNAPP2ON))
	{
		LYS1_ON;
		LYS2_OFF;
		LYS3_OFF;
		_delay_ms(100);
		LYS1_OFF;
		LYS2_ON;
		LYS3_OFF;
		_delay_ms(100);
		LYS1_OFF;
		LYS2_OFF;
		LYS3_ON;
		_delay_ms(100);
	}
}

///////////////////////////////////////////// sekvens bakat /////////////////////////////////////////////
void sekvensbak()
{
	if ((KNAPP2ON) && (!KNAPP1ON))
	{
		LYS1_OFF;
		LYS2_OFF;
		LYS3_ON;
		_delay_ms(100);
		LYS1_OFF;
		LYS2_ON;
		LYS3_OFF;
		_delay_ms(100);
		LYS1_ON;
		LYS2_OFF;
		LYS3_OFF;
		_delay_ms(100);
	}
}

///////////////////////////////////////////// Knappar av, dioder av /////////////////////////////////////////////
void lys_off ()
{
	if ((!KNAPP1ON) && (!KNAPP2ON))
	{
		
	
	LYS1_OFF;
	LYS3_OFF;
	LYS2_OFF;
	}
}

///////////////////////////////////////////// Knappar på, dioder på /////////////////////////////////////////////
void lys_on ()
{
	if ((KNAPP1ON) && (KNAPP2ON))
	{
		
	
	LYS1_ON;
	LYS3_ON;
	LYS2_ON;
	}
}