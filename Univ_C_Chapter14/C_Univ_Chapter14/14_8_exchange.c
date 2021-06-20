// 외부변수 선언
extern int a, b;

void exchange()
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}