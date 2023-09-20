#include <math.h>

int quadeq_resolve(double a, double b, double c, double *x1, double *x2) {
    if (a == 0) {
        if (b == 0) return -2;
        return -1;
    }

    double d = b * b - 4 * a * c;

    if (d > 0) {
	*x1 = (-1 * b + sqrt(d)) / (2 * a);
	*x2 = (-1 * b - sqrt(d)) / (2 * a);
	return 2; 
    } else {
        if (d == 0) {
	    *x1 = -1 * b / (2 * a);
	    return 1;
	} else {
	    return 0;
	}
    }
}
