#include <cstdio>
#include <conio.h>
#include <iostream>

int main()
{
	system("cls");
	char ch;
	while (true) {
		ch = getch();
		system("cls");
		printf("\n%d\n", ch);
		if (ch == '\e') {
			break;
		}
	}
	return 0;
}
