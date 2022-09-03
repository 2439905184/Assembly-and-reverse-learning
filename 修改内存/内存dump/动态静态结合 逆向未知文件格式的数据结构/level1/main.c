#include <stdio.h>

int main()
{
    int magic_length = 4;
    FILE *fp = fopen("data.bin","rb");
    char magic[4];
    int data[4];
    fread(magic,magic_length,1,fp);
    printf("pointer at %d\n",ftell(fp));
    fread(data,sizeof(int),4,fp);
    printf("magic is %s\n",magic);
    for(int i=0; i<4;i++)
    {
        printf("data is %d\n",data[i]);
    }
    fclose(fp);
    while (1){}
    return 0;
}