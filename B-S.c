#include <stdio.h>

int Binary_Search (int array[] , int target , int len)
{
    int begining , end , middle ;
    begining = 0 ;
    end = len ;

    while (begining <= end)
    {
        middle = (begining + end) / 2 ;
        if (array[middle]== target)
        {
            return middle;
        }

        else if (target < array[middle])
        {
            end = middle - 1 ;
        }

        else {
            begining = middle + 1 ;
        }
    }

    return -1 ;
}

int main (void)
{
    int array[] = {1,4,7,8,9,10} ;
    printf("%d",Binary_Search (array, 9 , 6));
}