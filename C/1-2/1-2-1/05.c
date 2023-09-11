#include <iostream>

void main()
{

    double d = 0.009 / 0.003;
    // i = (int)d;
    int i = (int)(d + 0.5);
    double d1 = 0.1 * 0.1, d2 = 0.01;

    //int bSame = (d1 == d2);
    int bSame = fabs(d1-d2)<0.000001;
    printf("d= %.16f i=%d\n", d, i);
    printf("bSame = %d\n", bSame);
}
