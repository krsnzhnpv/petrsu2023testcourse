#include <stdio.h>

#include "myfunc.h"
#include "quadeq.h"

int main()
{
    printf("Hello World!\n");
    double x1, x2;
    int n = quadeq_resolve(2, 20, 3, &x1, &x2);
    switch(n)
    {
        case 2:
        printf("2 roots: x1 = %f, x2 = %f\n", x1, x2);
            break;

        case 1:
            printf("1 root: x = %f\n", x1);
	    break;

        case 0:
        printf("No roots\n");
	    break;
    }

    return myfunc(2);
}
