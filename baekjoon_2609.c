#pragma warning(disable:4996)

#include <stdio.h>

int greatest_common_multiple(int a,int b) {
	if (b == 0) return a;
	else return greatest_common_multiple(b, a % b);
}


int main() {
	int a, b;
	scanf("%d %d", &a ,&b);

	printf("%d\n", greatest_common_multiple(a, b));	//최대공약수
	printf("%d", a*b/greatest_common_multiple(a, b));	//최소공배수
}

/*
* 최대공약수 알고리즘 : 유클리드 호제법
* a가 b로 나누어 지지 않았을 때
* a를 b로 나눈 나머지를 구함
* b를 (a를 b로 나눈 나머지)로 나누어지지 않기 때문에
* b를 (a를 b로 나눈 나머지)로 나눈 나머지를 구함
* 그것이 최대 공약수
* 
* 최소 공배수는 두 수를 곱해서 최대공약수로 나눔
*/