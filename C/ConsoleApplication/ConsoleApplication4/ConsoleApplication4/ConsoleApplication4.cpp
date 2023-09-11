#include <iostream>

int main()
{

    double d = 0.009/0.003;
    int i = (int)(d + 0.0000001);
    double d1 = 0.1 * 0.1, d2 = 0.01;

    int bSame = (d1 - 0.0000001 < d2 && d1 < d2 + 0.0000001);
    printf("d= %.16f i=%d\n", d,i);
    printf("bSame = %d\n",bSame);

    return 0;
}
