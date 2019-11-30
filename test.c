#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//打印1-10
int one(){
	int num = 0;
	do{
		printf("%d\n", num);
		num += 1;
	} while (num <= 10);
	system("pause");
	return 0;
}
//求1-10的阶乘和
int Factor(int num){
	int result = 1;
	for (int i = 1; i <= num; i++){
		result *= i;
	}
	return result;
}

int two(){
	int result = 0;
	for (int i = 1; i <= 10; i++){
		result += Factor(i);
	}
	printf("result = %d\n",result);
	system("pause");
	return 0;
}
//打印 Welcome to China !
int three(){
	char str1[] = "Welcome to China !";
	char str2[] = "##################";
	int left = 0;
	int right = strlen(str2) - 1;
	while (left <= right){
		str2[left] = str1[left];
		str2[right] = str1[right];
		system("cls");
		printf("%s\n", str2);
		left++;
		right--;
		Sleep(250);
		//ms,Sleep()操作系统函数,Linux/Mac系统上,Sleep单位为s
	}
	system("pause");
	return 0;
}
//最多输入3次密码进行登录
int four(){
	int i = 0;
	int count = 3;
	for (; i < 3; i++){
		printf("请输入密码:\n");
		char passwd[1024] = { 0 };
		scanf("%s", &passwd);
		if (strcmp(passwd, "88888888") == 0){
			printf("登录成功\n");
			break;
		}
		else{
			count--; 
			printf("您的输入有误!您还有%d次机会\n",count);
		}
	}
	if (i == 3){
		printf("请于30秒后重试\n");
	}
	
	system("pause");
	return 0;
}
//在数组中查找数字
int main(){
	//给定一个新的整数,查找这个数字是否在数组中存在
	//如果找到了,就返回这个数字所在的下标;
	int arr[] = { 9, 5, 2, 7 };
	int num = 0;
	printf("请输入您要找的数字:\n");
	scanf("%d", &num); 
	int i = 0;
	for (; i < 4; i++){
		if (arr[i] == num){
			printf("找到了!这个数字的下标为 %d\n", i);
			break;
		}
	}
	if (i == 4){
			printf("不好意思,您要找的数不在该区域!\n");
		}
	system("pause");
	return 0;
}