//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, j=0;
//	char a[80] = {}, b[80] = {}, c[40] = {};
//		for (i = 0; i < 8; i++)
//			scanf("%c", &a[i]);
//		for (i = 0; i < 8; i++)
//			scanf("%c", &b[i]);
//		
//		for (i = 0; i < 8; i = i + 2)
//		{
//			c[j] = b[i];
//			j++;
//		}
//		strcat(a, c);
//		for (i = 0; i <10; i++)
//		    printf("%c", a[i]);
//			
//		for (i = 0; i < 8; i++)
//			printf("%c", c[i]);
//		return 0;
//
//}

//
//二次修改


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, j = 0;
//	char a[80] = {}, b[80] = {}, c[40] = {};
//	
//		scanf("%s", a);
//	   
//	for (i = 0; i < 8; i++)          //字符串的整体输入与for循环输入单个字符有差异
//		scanf("%c", &b[i]);
//
//	for (i = 0; i < 8; i = i + 2)
//	{
//		c[j] = b[i];
//		j++;
//	}
//
//	printf("%s", strcat(a, c));
//
//	
//	return 0;
//
//}

//
//3次修改

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i, j = 0;         //FGHXDFHSS
//不回家换个 好看
//	char a[80] = {}, b[80] = {}, c[40] = {};
//	scanf("%s", a);   
//
//
//	scanf("%s", b);
//
//	for (i = 0; i < 8; i = i + 2)
//	{
//		c[j] = b[i];
//		j++;
//	}
//	c[j] = 0;   //注意前边还有一个   j++   ！！！！！！！！！！！坑！！！
// 
//	printf("%s", strcat(a, c));
//
//
//	return 0;
//
//}
