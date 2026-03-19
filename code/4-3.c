#include <stdio.h>

int main()
{
    int n;
    int k = 1;
    scanf("%d", &n);
    
    if(n <= 1){
       k = 0;
    } else {
        for(int i = 2; i < n; i++){
            if(n % i == 0){
                k = 0;
                break;
            } 
        }
    }  
    if (k == 1){
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}

