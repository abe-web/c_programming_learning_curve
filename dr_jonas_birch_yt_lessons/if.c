/* if */
#include <stdio.h>

int main()
{
	int speed;

	printf("How fast are you driving? (mp/h)\n");
	scanf("%d", &speed);	

	if (speed > 55)
	{
		printf("You are driving too fast\n");
	}
	else if (speed > 35)
	{
		printf("You are driving slightly below the speed limit\n");
	}
	else
	{
		printf("OK\n");
	}

	return 0;

}
