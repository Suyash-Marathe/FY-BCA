#include <stdio.h>
int main ()

{
	int age;
	char gender;
	
	printf("Enter Your Gender M / F : ");
	scanf("%c", &gender);
	
	printf("Enter Your Age : ");
	scanf("%d", &age);
	
	if (gender == 'M')
	{
		if (age >= 18)
		{
			printf("Allowed For Driving.");
		}
		else
		{
			printf("Not Allowed For Driving.");
		}
	}
	else
	{
		if (age >= 21)
		{
			printf("Allowed For Driving.");
		}
		else
		{
			printf("Not Allowed For Driving.");
		}
	}
	
	return 0;
}
