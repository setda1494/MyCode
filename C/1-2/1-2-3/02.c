#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

void main()
{
    /*
        START
            count - 0,pos_sum =0,nega_sum =0
            while(count = 50)do
                reda(data)
                if(data>0)
                    pos_sum = pos_sum + data
                else if (data < 0)
                    nega_sum = nega_sum +data
                count = count + 1
            endwhile
        END
    */
    int count = 0;
    int pos_sum = 0, nega_sum = 0;
    int data;
    int maxcount = 5;

    /*
    while (count < 50)
    {
        scanf("%d",&data);
        if (data > 0)
        {
            pos_sum = pos_sum + data;
            printf("pos_sum = %d", pos_sum);
        }
        else if(data < 0)
        {
            nega_sum = nega_sum + data;
            printf("nega_sum = %d", nega_sum);
        }
        count++;
    }
    */

    while (count < maxcount)
    {
        scanf("%d", &data);
        if (data > 0)
        {
            pos_sum = pos_sum + data;
            printf("pos_sum = %d", pos_sum);
        }
        else if (data < 0)
        {
            nega_sum = nega_sum + data;
            printf("nega_sum = %d", nega_sum);
        }
        count++;
    }

}
