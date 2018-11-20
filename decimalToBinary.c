#include <stdio.h>
#include <stdlib.h>

long binary, rest, factor = 1;
long decimalToBinary(int decimal);

void main(void) {
	int decimal;

	printf("\n\nRecursao: Converter decimal para binario!");
	printf("\n-----------------------------------------");
	printf("\nInsira o numero a ser convertido: ");
	scanf("%i", &decimal);
	binary = decimalToBinary(decimal);
	printf("\nO numero %i em binario eh: %i", decimal, binary);
}

long decimalToBinary(int decimal){
	//verify is decimal number is different than zero
	if(decimal != 0){
		//get the rest of decimal divide 2(binary)
		rest = decimal % 2;
		//increment binary with rest plus factor
		binary += (rest * factor);
		//multiple factor per 10 (2 in binary)
		factor *= 10;
		//keep calling the function itself recursively until decimal less than zero
		decimalToBinary(decimal / 2);
	}
	return binary;
}
