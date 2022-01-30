#pragma warning(disable:4996)

#include <stdio.h>

int greatest_common_multiple(int a,int b) {
	if (b == 0) return a;
	else return greatest_common_multiple(b, a % b);
}


int main() {
	int a, b;
	scanf("%d %d", &a ,&b);

	printf("%d\n", greatest_common_multiple(a, b));	//�ִ�����
	printf("%d", a*b/greatest_common_multiple(a, b));	//�ּҰ����
}

/*
* �ִ����� �˰��� : ��Ŭ���� ȣ����
* a�� b�� ������ ���� �ʾ��� ��
* a�� b�� ���� �������� ����
* b�� (a�� b�� ���� ������)�� ���������� �ʱ� ������
* b�� (a�� b�� ���� ������)�� ���� �������� ����
* �װ��� �ִ� �����
* 
* �ּ� ������� �� ���� ���ؼ� �ִ������� ����
*/