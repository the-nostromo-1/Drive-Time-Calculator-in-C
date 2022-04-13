// Create a drive time calculator
// distance = rate * time
// time = distance / rate
//04/12/2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float distance, rate, timeInHours, timeInMinutes;
	//
	printf("Please enter the distance you must travel in miles\n");
	scanf_s("%f", &distance);
	//
	printf("Please enter your average speed in MPH\n");
	scanf_s("%f", &rate);
	//
	timeInHours = (distance / rate);
	timeInMinutes = (timeInHours * 60);
	//
	printf("Your total time for %.2f miles is %.2f hour(s) or %.2f minutes\n", distance, timeInHours, timeInMinutes);
	return 0;
}