/********************************************************************************
when destination reached level < 200,the water should be pumped to destination from source.
And the motor should stop pumping when the source tank level reaches below 200.
This code contains different combination.
*********************************************************************************/
#include <stdio.h>
int main()
{
    int source,destination;
    scanf("%d",&source);
    scanf("%d",&destination);
    int sourcelevel=source;
    int destinationlevel=destination;
    if(source>200){
        if(destination<200)
        {
            printf("Motor is ON\n");
            while(sourcelevel>=200){
                printf("Level of Destination 2=%d\n",destinationlevel);
                printf("Level of Source 1=%d\n",sourcelevel);
                destinationlevel++;
                sourcelevel--;
            }
            if(sourcelevel<=200){
            printf("Motor is OFF\n");
            printf("Source tank has low level water\n");
            }
            if(destinationlevel>980){
                printf("Destination tank is FULL\n");
                printf("Motor is OFF\n");
            }
            
        }
    }
    if(source==980&&destination==980)
    printf("Both tank is full\nMotor OFF");
    else if(source<200 && destination<200){
    printf("Motor is off\n");
    printf("No water in source tank\n");
    }
    else if(source==destination)
    printf("Both tank has same level of water level\nMotor is OFF\n");
    else if(destinationlevel>200 && destinationlevel<980)
    printf("Motor is OFF\n");
    else if(source<200)
    printf("Motor is OFF\nSource tank is under level\n");
    else if((destination==980 || destination>980 ))
    printf("Motor is OFF\nDestination Tank is FULL\n");
    return 0;
}

