#include <func.h>
void test1()
{
	const char *p="abcdef";
    printf("%p: %s\n", &p , p);//打印指针p的地址和p指向的字符串内容
	printf("%p: %s\n",p,p);//打印指针p所存地址和p指向的字符串内容
    p="qwedma";
    printf("%p: %s\n", p , p);//打印指针p所存地址和p指向的字符串内容
//    p[0]='1';                     //尝试把p指向的第一个字符q修改为1,p是指向常量区的，只读不可写
	char q[]="qwedma";
    printf("%p: %s\n", q , q);
}
int main()
{
	test1();
	printf("main:%p\n",main);
	printf("test1:%p\n",test1);
	return 0;
}

