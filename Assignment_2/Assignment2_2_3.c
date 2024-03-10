#include<stdio.h>
#include<string.h>

int main()
{
	int empID, deptNo;
	char designation[20];
	printf("Enter the employee details:\n");
	printf("Employee ID: ");
	scanf("%d",&empID);
	printf("Department No.: ");
	scanf("%d",&deptNo);
	printf("Designation: ");
	scanf("%s",designation);
	switch(deptNo)
	{
		case 10:
			printf("Employee with employee id %d is working in Marketing department as %s.\n",empID,designation);
			break;
		case 20:
			printf("Employee with employee id %d is working in Management department as %s.\n",empID,designation);
			break;
		case 30:
			printf("Employee with employee id %d is working in Sales department as %s.\n",empID,designation);
			break;
		case 40:
			printf("Employee with employee id %d is working in Designing department as %s.\n",empID,designation);
			break;
	}
	return 0;
}
