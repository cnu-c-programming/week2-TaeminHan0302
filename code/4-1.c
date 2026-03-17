#include <stdio.h>

int main()
{
    int a;
    int b;
    char c;
    
    scanf("%d %d %c\n", &a, &b, &c);
    if(c == '+'){
        a = a + b;
        printf("%d\n", a);
    }
    if(c == '-'){
        a = a - b;
        printf("%d\n", a);
    }
    if(c == '*'){
        a = a*b;
        printf("%d\n", a);
    }
    if(c == '/'){
        a = a/b;
        printf("%d\n", a);
    }

    return 0;
}

