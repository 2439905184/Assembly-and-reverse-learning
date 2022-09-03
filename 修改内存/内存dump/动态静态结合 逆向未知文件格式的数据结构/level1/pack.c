#include <stdio.h>
#include <string.h>
#include "data.h"

int main()
{
	FILE *file = fopen("data.bin","wb");
	struct GameAchive achive;
	strcpy(achive.magic,"Game");
	int content[4] = {1,0,1,1};
	memcpy(achive.image_data,content,sizeof(content));
	
	fwrite(&achive,sizeof(achive),1,file);
	//fwrite(&content,sizeof(content),1,file);
	fclose(file);
	return 0;
}
//imhex 模式代码 可以查看数据结构和数据
/*
struct Data
{
  char head[4];
  s32 a[4] @0x4;
};
Data data @0x0;*/