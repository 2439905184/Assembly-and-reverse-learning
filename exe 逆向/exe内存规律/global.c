#include <stdio.h>

int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;

int main()
{
    printf("a %p\n",&a);
    printf("b %p\n",&b);
    printf("c %p\n",&c);
    printf("d %p\n",&d);
    printf("e %p\n",&e);
    printf("f %p\n",&f);
}
/* 解释说明
我们可以看见这些变量都是程序的全局变量，并且发现变量地址都是有一种规律的。
即一般情况下每个int类型变量占用4个字节的空间。
一般情况下32位exe的程序基址默认为0000 0000 0040 0000
*/