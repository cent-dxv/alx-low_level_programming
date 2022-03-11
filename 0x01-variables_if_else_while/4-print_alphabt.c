#include <stdio.h>
/* description
* When I was having that alphabet soup,
* I never thought that it would pay off
 */
int main(void)
{
	char alp = 'a';

	for ( ; alp <= 'z' ; alp++)
		if (alp != 'q' && alp != 'e')
			putchar(alp);

	putchar('\n');


	return (0);

}


