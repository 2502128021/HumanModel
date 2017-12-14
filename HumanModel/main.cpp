#include"DataStructures.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;	//定义一个名为fp的文件指针
	if ((fp = fopen("  ", "r")) == NULL)
	{
		printf("Error:所要打开的文件不存在或格式错误\n");
		system("pause");
		return 0;
	}
}