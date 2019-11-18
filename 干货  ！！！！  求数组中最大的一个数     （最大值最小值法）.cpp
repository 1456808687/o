//法一
//#include<stdio.h>
//int main()
//{
//	int i, j, a[10] = {}, max;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (j =0; j < 10; j++)
//	{
//		if (i == 0) {
//			max = a[0];
//			continue;
//		}
//
//		if (max < a[j])
//		{
//			 max = a[j];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//法二
//#include<stdio.h>
//int main()
//{
//	int i, j, a[10] = {}, max=-9999999;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (j = 0; j < 10; j++)
//	{
//		
//		if (max < a[j])
//		{
//			max = a[j];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//错误程序
//


//#include<stdio.h>
//int main()
//{
//	int i, j, a[10] = {}, max =a[0];          //a[0]还未进行输入    无法赋值给   max
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (j = 1; j < 10; j++)
//	{
//
//		if (max < a[j])
//		{
//			max = a[j];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}