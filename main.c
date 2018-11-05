#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[7];
    int a;
    while(fgets(str, sizeof(str), stdin)){
        scanf("%c",a);
        str=a;
        printf("%s", str);
    }

    
    return 0;
}
