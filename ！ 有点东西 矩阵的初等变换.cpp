//#include<stdio.h>
//int main()
//{
//	int a[3][3] = {}, i, j, b[3][3] = {};
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i + 1 == 3)
//				b[0][j] = a[2][j];    //Ö±½ÓÐÐÌæ»»
//			else
//				b[i + 1][j] = a[i][j];
//		}
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);
//			if (j == 2)
//				printf("\n");
//		}
//	}
//	return 0;
//}