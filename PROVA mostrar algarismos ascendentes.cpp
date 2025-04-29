#include <stdio.h>

main()

{
	int num, c, d, u;
	
	for (num=100; num <=999; num++)
	{
		c = num/100;
		d = (num%100)/10;
		u = num % 10;
		if (c < d && d < u)
		   printf("%d\t", num);
	}
}
