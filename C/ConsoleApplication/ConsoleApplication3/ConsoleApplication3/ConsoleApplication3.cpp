#include <stdio.h>
int main(int argc, char const* argv[])
{

    double a = 0.009;
    double b = 0.003;
    double d1 = 01 * 0.1;
    double d2 = 0.1;

    int c = (int)a;
    int d = (int)b;
    int bSame(d1 == d2);

    printf("double(%.16f),int(%d\n)", c);
    printf("double(%.16f),int(%d\n)", d);

    printf("bSame =%d\n", bSame);

    return 0;
}
