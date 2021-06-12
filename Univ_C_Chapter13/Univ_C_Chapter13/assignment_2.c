#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main(void)
{
	typedef struct _student
	{
		char name[10];
		int c_programming;
		int math;
		int english;
	} student;

	student Kim = { .name = "Ki\0m", .c_programming = 95, .english = 80 };
	student* q = &Kim;
	student* p = (student*)malloc(sizeof(student) * 1);
	strcpy(p->name, "Lee");
	p->math = 80;

	printf("%s\n", Kim.name);
	printf("%.2f\n", (p->math + q->c_programming) / 2.0);
	printf("%c\n", *(q->name + 1));
	printf("%s\n", strcat(Kim.name, p->name));
	printf("%d\n", strlen(p->name));

	free(p);

	return 0;
}