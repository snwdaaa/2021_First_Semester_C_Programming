// 비트 연산에 마스크를 사용한 예

#include<stdio.h>

int main()
{
	char a = 'A', b, c; // 대문자 A -> 0110 0001
	char mask = 0x0F; // 마스크 값 (0000 1111) (2) 설정, 마스크 -> 값을 특정하게 걸러주는 역할

	printf("%X & %X = %X\n", a, mask, a & mask); // mask는 0000 1111 이므로 앞의 4비트는 무조건 0, 뒤의 4비트는 a의 값이 그대로 나옴
	printf("%X | %X = %X\n", a, mask, a | mask); // mask는 0000 1111 이므로 앞의 4비트는 a의 값, 뒤의 4비트는 무조건 1

	mask = 'a' - 'A'; // 소문자 a에서 대문자 A를 뺀 값이 마스크, 97 - 65 = 32 -> 0010 0000

	b = a ^ mask;
	printf("%c ^ %d = %c\n", a, mask, b);
	a = b ^ mask;
	printf("%c ^ %d = %c\n", b, mask, a);

	return 0;
}