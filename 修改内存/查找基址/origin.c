#include <stdio.h>

#define equal 0
int default_coin = 100; // 默认金币
int coin_plus = 2;      // 每次+2
int final_coin = 0;     // 最终结算的金币

// 游戏增加金币的函数
void add()
{
	final_coin = default_coin + coin_plus;
}
// 游戏开始
void game_start()
{
	printf("game start\n");
	printf("please try to find a base address of final_coin \n");
	printf("input add to make c+=1 \n");
	printf("input min to make c-=1 \n");
	printf("default coin is %d address %p\n",default_coin,&default_coin);
	printf("coin_plus is %d address %p\n",coin_plus,&coin_plus);
	printf("final_coin is %d address %p\n",final_coin,&final_coin);
}

int main()
{
	game_start();
	//主循环 用于卡主程序 给CE调试用
	while(1)
	{
		char s[3];
		gets(s);
		if(strcmp(s,"add") == equal)
		{
			final_coin += coin_plus;
			printf("final_coin is %d address %p\n",final_coin,&final_coin);
		}
		if(strcmp(s,"min") == equal)
		{
			final_coin -= coin_plus;
			printf("final_coin is %d address %p\n",final_coin,&final_coin);
		}
	}
}