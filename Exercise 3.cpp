#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
	int year;
	int color, zoo;
	setlocale(2, "rus");
	printf("Введите год: \n");
	printf("year = ");
	scanf_s("%d", &year);
	printf("Год ");
	color = year % 10;
	zoo = year % 12;
	switch (color)
	{
	  case 0: printf("белo"); break;
	  case 1: printf("белo"); break;
	  case 2: printf("чёрнo"); break;
	  case 3: printf("чёрнo"); break;
	  case 4: printf("зелёнo"); break;
	  case 5: printf("зелёнo"); break;
	  case 6: printf("краснo"); break;
	  case 7: printf("краснo"); break;
	  case 8: printf("жёлтo"); break;
	  case 9: printf("жёлтo"); break;
	}
	switch (zoo)
	{
	  case 0: printf("й обезьяны"); break;
	  case 1: printf("й курицы"); break;
	  case 2: printf("й собаки"); break;
	  case 3: printf("й свиньи"); break;
	  case 4: printf("й крысы"); break;
	  case 5: printf("й коровы"); break;
	  case 6: printf("го тигра"); break;
	  case 7: printf("го зайца"); break;
	  case 8: printf("го дракона"); break;
	  case 9: printf("й змеи"); break;
	  case 10: printf("й лошади"); break;
	  case 11: printf("й овцы"); break;
	}
	return 0;
}