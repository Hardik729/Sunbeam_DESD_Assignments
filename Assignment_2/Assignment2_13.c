#include<stdio.h>

int main()
{
	int x,y;
	printf("Enter the x and y coordinates of a point:\n");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0)
		printf("Given point (%d,%d) lies in the 1st quadrant.\n",x,y);
	else if(x>0 && y<0)	
		printf("Given point (%d,%d) lies in the 2nd quadrant.\n",x,y);
	else if(x<0 && y<0)
		printf("Given point (%d,%d) lies in the 3rd quadrant.\n",x,y);
	else if(x>0 && y<0)
		printf("Given point (%d,%d) lies in the 4th quadrant.\n",x,y);
	else if(x==0 && y==0)
		printf("given point lies on the origin.\n");
	else
		printf("Invalid input\n");
	return 0;
}
