#include <stdio.h>
#include <string.h>

int main() {
    unsigned char ch;
	int temp;

	printf("Enter an ASCII character: ");
	scanf("%c", &ch);

	printf("The ASCII value of %c is:\n", ch);
    printf("\tDecimal -- %u\n", ch);
	printf("\tHexadecimal -- %x\n", ch);
	printf("\tBinary -- ");

	for(int i = 7; i >= 0; i--){
		temp = ch >> i;

		if (temp & 01){
			printf("1");
		} else {
			printf("0");
		}
	}

	printf("\n");
}