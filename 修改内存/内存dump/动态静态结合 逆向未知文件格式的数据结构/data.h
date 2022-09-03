struct GameAchive
{
	char magic[4]; // GameAchive 魔术头
	int image_data[4]; // 假设图像数据 图像为4*1像素大小 数组的0表示白色，数组的1表示黑色
};