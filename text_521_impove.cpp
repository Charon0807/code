#include<stdio.h>
int main()
{
	int year, month, day, i;
	int buf[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int sum=0;
	printf("please enter year month day\n");
	scanf_s("%d %d %d", &year, &month, &day);
	for (i = 0; i < month - 1; i++) {
		sum = sum + buf[i];
	}
	sum = sum + day;
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		sum += 1;
		printf("%d,%d,%d是一年中的第%d天", year,month,day,sum);
	}
	return 0;
}