#include <stdio.h>

int main()
{
    int i = 1000, j = 1000, product;

    while (i < 9000){
        while (j < 9000)
        {
            product = j * i;
            printf("%d, ", product);

            j++;
        }

        i++;
    }
}