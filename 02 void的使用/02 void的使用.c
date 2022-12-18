#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1閵嗕焦妫ょ猾璇茬€烽弰锟芥稉宥呭讲娴犮儱鍨卞鍝勫綁闁插繒娈�
void test01()
{
	//void a = 10; //缂傛牞鐦ч崳銊ф纯閹恒儲濮ら柨娆欑礉閸ョ姳璐熸稉宥囩叀闁挾绮癮閸掑棝鍘ゆ径姘毌閸愬懎鐡ㄧ粚娲？
}


//2閵嗕礁褰叉禒銉╂鐎规艾鍤遍弫鎷岀箲閸ョ偛鈧拷
void func()
{
	//return 10;
}

void test02()
{
	//func();
	//printf("%d\n", func());
}


//3閵嗕線妾虹€规艾鍤遍弫鏉垮棘閺佹澘鍨悰锟�
int func2(void)
{
	return 10;
}
void test03()
{
	//printf("%d\n", func2(10));
}


//4閵嗕箍oid *  娑撳洩鍏橀幐鍥嫛
void test04()
{
	void * p = NULL;

	int  * pInt = NULL;
	char * pChar = NULL;

	//pChar = (char *)pInt;
	pChar = p; //娑撳洩鍏橀幐鍥嫛  閸欙拷娴犮儰绗夐棁鈧憰浣稿繁閸掑墎琚崹瀣祮閹广垹姘ㄩ崣锟芥禒銉х舶缁涘褰垮锕佺珶鐠у鈧拷

	printf("size of void *   = %d\n", sizeof(p));

}

int main(){
	//test02();
	//test03();
	test04();
	system("pause");
	return EXIT_SUCCESS;
}