#include <stdio.h>
#include <windows.h>

int main()
{
    //故意放了个错误码，必须为128的十进制int才能验证通过
    int verify = 64;
    if (verify == 128)
    {
        MessageBox(NULL,"cracked!","title",MB_OK);
    }
    else
    {
        MessageBox(NULL,"crack failed!","title",MB_OK);
    }
    return 0;
}