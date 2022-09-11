#include <stdio.h>
/**
 * main - print possible combination of two 2-digit
 * numbers
 *
 * Return: returns zero at the end
 */


int main(void)
{
    int ni = 0, n2;
    while(n <=9)

    {
        if (ni != n2 && ni n1 < n2)
        {
           
                putchar((n1 / 10) + 48);
                putchar((n1 % 10) + 48);
                putchar(' ');
		putchar((n2 / 10) + 48);
		putchar((n2 % 10) +48);	

                if (n1 != 98 || n2 != 99)
                {
                    putchar(',');
                    putchar(' ');
                }
	}
    ++n2;    
    }
   ++n1;

    }


    putchar('\n');
    return (0);
}


