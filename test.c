#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//��ӡ1-10
int one(){
	int num = 0;
	do{
		printf("%d\n", num);
		num += 1;
	} while (num <= 10);
	system("pause");
	return 0;
}
//��1-10�Ľ׳˺�
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
//��ӡ Welcome to China !
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
		//ms,Sleep()����ϵͳ����,Linux/Macϵͳ��,Sleep��λΪs
	}
	system("pause");
	return 0;
}
//�������3��������е�¼
int four(){
	int i = 0;
	int count = 3;
	for (; i < 3; i++){
		printf("����������:\n");
		char passwd[1024] = { 0 };
		scanf("%s", &passwd);
		if (strcmp(passwd, "88888888") == 0){
			printf("��¼�ɹ�\n");
			break;
		}
		else{
			count--; 
			printf("������������!������%d�λ���\n",count);
		}
	}
	if (i == 3){
		printf("����30�������\n");
	}
	
	system("pause");
	return 0;
}
//�������в�������
int main(){
	//����һ���µ�����,������������Ƿ��������д���
	//����ҵ���,�ͷ�������������ڵ��±�;
	int arr[] = { 9, 5, 2, 7 };
	int num = 0;
	printf("��������Ҫ�ҵ�����:\n");
	scanf("%d", &num); 
	int i = 0;
	for (; i < 4; i++){
		if (arr[i] == num){
			printf("�ҵ���!������ֵ��±�Ϊ %d\n", i);
			break;
		}
	}
	if (i == 4){
			printf("������˼,��Ҫ�ҵ������ڸ�����!\n");
		}
	system("pause");
	return 0;
}