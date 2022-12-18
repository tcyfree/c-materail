锘�??//#define _CRT_SECURE_NO_WARNINGS  //VS锟斤拷锟斤拷锟斤拷使锟矫达拷统锟解函锟斤�?,锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟疥，锟斤拷锟斤拷锟揭伙拷锟斤拷锟斤拷锟斤拷锟脚ｏ拷C4996
#include<stdio.h>   // std 锟斤拷准 i input  锟斤拷锟斤�??   o  output 锟斤拷锟�? 
#include<string.h>  // strcpy   strcmp  strcat  strstr
#include<stdlib.h>  // malloc  free


//1锟斤拷typedef使锟斤拷  锟津化结构锟斤拷丶锟斤拷锟�?? struct
//struct Person
//{
//	char name[64];
//	int age;
//};
//typedef struct Person  myPerson;

//锟斤拷要锟斤拷�??  锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟�?
//锟斤�??  typedef  原锟斤拷  锟斤拷锟斤�??
typedef struct Person
{
	char name[64];
	int age;
}myPerson;

void test01()
{
	struct Person p1 = { "锟斤拷锟斤�??", 19 };

	myPerson p2 = { "锟斤拷锟斤�??", 20 };
}


// 2锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤拷锟斤�?
void test02()
{
	//char * p1, p2;  //p1锟斤拷char *  锟斤�?? p2 锟斤拷char


	typedef char * PCHAR;
	PCHAR p1, p2;


	char *p3, *p4; // p3 锟斤�?? p4锟斤拷锟斤拷char *
}


//3锟斤拷锟斤拷叽锟斤拷锟斤拷锟街诧拷锟�??
typedef int MYINT; //typedef long long MYINT; 只锟斤拷要锟芥换 long long 锟酵匡拷锟斤拷锟斤�??
void test03()
{
	MYINT a = 10;

	MYINT a2 = 10;
}


//锟斤拷锟斤拷锟斤拷锟�??
int main1(){

	


	system("pause"); // 锟斤拷锟斤拷锟斤拷锟斤拷锟酵�??  锟斤拷锟斤拷锟斤拷锟斤拷

	return EXIT_SUCCESS; //锟斤拷锟斤�?? 锟斤拷锟斤拷锟剿筹拷�??  0
}