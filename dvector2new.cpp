#include <stdlib.h>
#include "Header1new.h"
#define NR_END 1
double *dvector2new(long nl,long nh)
/* allocate a double vector with subscript range v[nl..nh] */
{
        double *v;

	v=(double *)malloc((unsigned int) ((nh-nl+1+NR_END)*sizeof(double)));
	if (!v) nrerror3new("allocation failure in dvector()");
	return v-nl+NR_END;
}
