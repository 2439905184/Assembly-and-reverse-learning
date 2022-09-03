#include <stdio.h>
#include "data.h"

int main()
{
    int magic_length = 4;
    FILE *fp = fopen("data.bin","rb");
    struct GameAchive achive;
    fread(achive.magic,sizeof(achive.magic),1,fp);
    fread(achive.image_data,sizeof(achive.image_data),1,fp);

    printf("maigc head is %s\n",achive.magic);

    for(int i=0; i<4;i++)
    {
        printf("data is %d\n",achive.image_data[i]);
    }
    fclose(fp);
    while (1){}
    return 0;
}