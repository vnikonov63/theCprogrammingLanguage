#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
	int c, state, rep;

	rep = 0;

	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (rep == 0)
				putchar('\n');
			state = OUT;
			rep += 1;

		} else {
			state = IN;
			putchar(c);
			rep = 0;	
		}
	}
}
