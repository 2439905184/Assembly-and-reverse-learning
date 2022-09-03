#include <stdio.h>
#define equal 0

void call()
{
    printf("call 函数被调用\n");
}

int main()
{
    printf("输入call来调用函数\n");
    while(1)
    {
        char in[4];
        gets(in);
        if(strcmp(in,"call") == equal)
        {
            call();
        }
    }
    return 0;
}