//Program treba binarnni broj pretvorit u decimalni.

#include <stdio.h>
#include <math.h>
int binaryToDecimal(long binarni)
{
    int decimalni = 0, temp = 0, ostatak;
    while (binarni!=0)
    {
        ostatak = binarni % 10;
        binarni = binarni / 10;
        decimalni = decimalni + ostatak*pow(2,temp);
        temp++;
    }
    return decimalni;
}

int main()
{
    long binarni;
    printf("Unesi binarni broj: ");
    scanf("%ld", &binarni);

    printf("Decimalni broj je: %d", binaryToDecimal(binarni));
    return 0;
}
