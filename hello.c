# include <stdio.h>

int main (void)
{ 
	char f, m, l;
	int age;

	printf("Please Type in your 3 credential letter for your name follow by age: ");
	scanf("%c%c%c%d", &f,&m,&l,&age);
	printf("This are my initials: %c%c%c and my age is: %d. \n", f,m,l, 30);
		return (0);
}
