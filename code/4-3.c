#include <stdio.h>

int main()
{
    int n;
    scanf("%d\n", n);
    if(n%2 == 1){
        printf("true");
    }
    if(n == 2){
        printf("true");
    }
    else{
        printf("false");
    }

    return 0;
}

