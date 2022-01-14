////#include <stdio.h>
////struct class {
////	char wclass[20];
////	char people;
////
////};
////int main()
////{
////	struct class c1 = { "五年级二班",42 };
////	
////	
////    printf("在%s", c1.wclass);
////	printf("有%d人\n", c1.people);
////	return 0;
////}
#include <stdio.h>
struct class {
	char sk[20];
	short people;

};
int main()
{
	struct class s1 = { "今天滑板有多少人？" , (NULL) };
	printf("%s\n", s1.sk);
	scanf_s("%d", &s1.people);
	printf("有%d人", s1.people);

	return 0;
}
//#include <stdio.h>

//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a = 0)
//		printf("hah");
//	{
//		if (b == 3)
//			printf("haha");
//		else
//			printf("zeze");
//
//	}
//
//		return 0;
//}
//#include <stdio.h>

//int main()
//{
//	int a = 1;
//	if (a % 2 == 1)
//	{
//		printf("是奇数");
//	}
//	else
//	{
//		printf("不是奇数");
//	}
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int a = 0;
//		while (a < 100)
//		{
//			if (a % 2 == 1)
//				printf("%d\n",a);
//			a++;
//		}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("请输入一个数字：");
//	scanf_s("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("您输入的是奇数");
//	}
//	else
//		printf("您输入的是偶数");
//	return 0;
//}
