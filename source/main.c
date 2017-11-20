#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int a[SIZE] = { 2,6,4,8,10,12,89,68,45,37 };
	int pass;
	size_t i;
	int hold;
	int c=0,d=1;
	int b = 0;
	
	puts("Data items in original order");
	
	for (i = 0; i < SIZE; ++i)
	{
		printf("%4d", a[i]);
	}

	printf("\n");

	
	
	for (pass = 1; pass < SIZE; ++pass)
		{
		c = c + 1;
			b = 0;
			for (i = 0; i < SIZE - d; ++i)
			{
		
				if (a[i] > a[i + 1])
				{
					hold = a[i];
					a[i] = a[i + 1];
					a[i + 1] = hold;
					b = b++;
				}
				
				

			}
			printf("第%d回合交換%d次\n",c, SIZE - d);
			
			if (b == 1)
			{

			
				puts("\nData items in ascending order");
				
				for (i = 0; i < SIZE; ++i)
				{
					printf("%4d", a[i]);
				}

				puts("");
				printf("總共pass幾回合:%d\n", pass);
				system("pause");
				return 0;
			}
	
		
	

			d = d + 1;
			
		}
	
	
	
	




}