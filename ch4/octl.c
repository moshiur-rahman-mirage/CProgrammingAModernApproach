#include<stdio.h>
void octl() {
	int dcml;
	printf("Enter decimal number:");
	scanf_s("%d", &dcml);

	int x = convert(dcml);
	printf("%d\n", x);
}

int convert(int dcml) {

	//123
	
	if (dcml < 8) {
		printf("Returning base digit %d\n", dcml);
		return dcml;
	}
	int result = convert(dcml / 8) * 10 + (dcml % 8); // 17
	printf("returning %d for dcml=%d\n", result, dcml);
	return result;

	
}