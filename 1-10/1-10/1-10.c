////#include <stdio.h>
////struct class {
////	char wclass[20];
////	char people;
////
////};
////int main()
////{
////	struct class c1 = { "���꼶����",42 };
////	
////	
////    printf("��%s", c1.wclass);
////	printf("��%d��\n", c1.people);
////	return 0;
////}
#include <stdio.h>
struct class {
	char sk[20];
	short people;

};
int main()
{
	struct class s1 = { "���컬���ж����ˣ�" , (NULL) };
	printf("%s\n", s1.sk);
	scanf_s("%d", &s1.people);
	printf("��%d��", s1.people);

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
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
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
//	printf("������һ�����֣�");
//	scanf_s("%d", &a);
//	if (a % 2 == 1)
//	{
//		printf("�������������");
//	}
//	else
//		printf("���������ż��");
//	return 0;
//}
