#include"DataStructures.h"
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;	//����һ����Ϊfp���ļ�ָ��
	if ((fp = fopen("  ", "r")) == NULL)
	{
		printf("Error:��Ҫ�򿪵��ļ������ڻ��ʽ����\n");
		system("pause");
		return 0;
	}
}