#include <stdio.h>

int main()
{
    int k;
    for(int i=1; i<10; i++){
        for(int a  = 1; a < 10; a++){
            k = a * i;
            printf("%d * %d = %d\n", i, a, k);
        }
    }
    return 0;
}

