#include <stdio.h>

int main()
{
	int num;
	printf("Enter your a number between 1 and 7: ");
	scanf("%i", &num);
	switch (num) {
	case 1:
		puts("Do you know of Smitty Werbenjagermanjensen? He was #1!");
		break;
	case 2:
		puts("Takes 2 to tango!");
		break;
	case 3:
		puts("They say 3 is a crowd.");
		break;
	case 4:
		puts("May the 4th be with you.");
		break;
	case 5:
		puts("After 5, things start to dive.");
		break;
	case 6:
		puts("You chose 6, pick-up sticks!");
		break;
	case 7:
		puts("Ah 7, I see you're a man of culture as well.");
		break;
	default:
		printf("No no no, %i is not between 1 and 7 ...\n", num);
		break;
	}
	return 0;
}
