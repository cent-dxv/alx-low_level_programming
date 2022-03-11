#include <stdio.h>

int main()
{
	char alp = 'a';
	for ( ; alp <= 'z' ; alp++ )
		if( alp != 'q' && alp != 'e' )
			putchar(alp);

	putchar('\n');


	return(0);

}


