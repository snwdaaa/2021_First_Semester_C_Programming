#include <stdio.h>

int main(void)
{
	struct student
	{
		char name[10];
		float c_programming;
		float math;
		float english;
	};

	struct student s = { "Kim", 48.5, 52, };

	printf("%s\n", s.name);
	printf("%d\n", sizeof(s.name));
	printf("%d\n", (int)s.c_programming);
	printf("%.2f\n", (s.c_programming + s.math) / 2);
	printf("%.2f\n", s.english);

	return 0;
}