#include<stdio.h>
void main()
{
	int x,y,z;
	// x is the distance between two consecutive gas stations
	// y is the distance after which you notice that gas in your car
	//   is running low
	// z is the maximum distance the car will run after you notice
	//   that your gas is running low

	printf("Input - ");
	scanf("%d %d %d",&x,&y,&z);   // taking values for x,y, and z

	// checking for negative values
	if (x<0 || y<0 || z<0)
		printf("Distance cannot be negative\n");

	// ensuring x cannot be zero
	else if (x==0)
		printf("Distance between gas stations cannot be 0\n");

	// y%x is the distance between the car(at position y) and the latest 
	//     gas station crossed
 	// (y%x)+z is the maximum distance the car can travel after crossing 
	//     the latest gas station
	// if this distance is more than the distance between two gas stations,
	// then the car can reach the campus without towing
	else if(((y%x)+z)>=x)
		printf("Output - YES\n");
	else
		printf("Output - NO\n");
}
