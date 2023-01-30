#include <stdio.h>

/* both IN and OUT are an example of Symbolic Constants */
#define IN 1 /* inside the word */
#define OUT 0 /* outside the word */

main() {
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc = 0; 
// Is this a  good practice? Isn't it obfuscated?

	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("number of lines: %d number of words: %d number of characters: %d\n", nl, nw, nc);
	
}
