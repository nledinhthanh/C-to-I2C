#include <stdio.h>
#include <stdlib.h>
#include  <conio.h>
#include <math.h>

void main()
{
	//int a = 6;
	//float b = 5.3;

		//float x = a * b, y = a + b;
		//printf("\n %f %f", x, y);

	//float xp2, xp1, xp0;
	//printf("\n insert the value of x^2 :");
	//scanf_s ("%f", &xp2 );
	//printf("\n insert the value of x :");
	//scanf_s("%f", &xp1);
	//printf("\n insert the value of  :");
	//scanf_s("%f", &xp0);
	//float delta = xp1 * xp1 - 4 * xp2 * xp0;
	//printf("\n%.0f", delta);
//		enum { T0, T1, T2 };
//		enum day { cn, t2, t3, t4, t5, t6, t7 } n1;
//		enum day n2;
//		char something[] = " somethingsomething";
//		int i, j = 20000, k = T2;
//		char testing[] = "365";

//		i = t7;
//		n1 = -1000;
//		n2 = j; 
	
		

	//	printf("\n n1 = %d n2 = %d i = %d ", n1, n2, i);
	//	printf("\n k = %d T1 = %d", k, T1);
	//	printf("\na=%10.0f, b=%10d, c=%101d, d=%10d", -3456,25e3, 4653, 456398461 );
	//	printf("\n N = %s", testing);
	//	printf("\n \n N = %.d", 0x16d);
	

	//	printf("\n\n %s %10.2f\n", something, 12.567);
	int i1, r;
	//float rt1;
	printf("\n input the number to be compare : ");
	scanf_s("%d", &i1);
	printf("%d", i1);
	if (i1 > 0)
	{
		int acs = 0;
		printf("\n %d", acs);
		//rt1 = sqrt(i1);
		//rt1 = ceil(rt1);
		//printf("\n rt1 = %f", rt1);

		for (int i = 1; i < i1; i++)
		{
			//r = (int)rt1;
			r = i1 % i;
			if (r == 0)
			{

				acs = acs++;
				printf("\n %d", acs);
			}

		}
		if (acs <= 1)
		{
			printf("\n\n the number was inserted is a prime number");

		}
		else
		{
			printf("\n\n the number was inserted isn't a prime number");
		}

	}
	return 0;
	
}