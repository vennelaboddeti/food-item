#include<stdio.h>
void main()
{
	int choice;
	printf("enter a number (1-5):\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("FOOD ITEM - chole bhature\nPRICE - Rs99\n");
		break;
	    case 2:printf("FOOD ITEM - biryani\nPRICE - Rs129\n");
		break;
		case 3:printf("FOOD ITEM - dal makni\nPRICE - Rs79\n");
		break;
		case 4:printf("FOOD ITEM - idli and dosa\nPRICE - Rs99\n");
		break;
		case 5:printf("FOOD ITEM - rasgulla\nPRICE - Rs49\n");
	}
	
}
