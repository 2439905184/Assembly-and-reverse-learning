#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct GameAchive
{
	char magic[4]; // GameAchive 魔术头
	//int image_data[4]; // 假设图像数据 图像为4*1像素大小 数组的0表示白色，数组的1表示黑色
};

int main()
{
	FILE *file = fopen("data.bin","wb");
	struct GameAchive achive;
	strcpy(achive.magic,"Game");
	int content[4] = {1,0,1,1};
	fwrite(&achive,sizeof(achive),1,file);
	fwrite(&content,sizeof(content),1,file);
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