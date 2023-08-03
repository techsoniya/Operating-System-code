#include<stdio.h>
#include<stdlib.h>
int main()
{
    int RQ[100],i,n,TotalHeadMoment=0,initial;
    printf("Enter the number of Requests");
    scanf("%d",&n);
    printf("Enter the requests sequence \n");
    for(i=0;i<n;i++)
       scanf("%d",&RQ[i]);
    printf("enter initial head position \n");
    scanf("%d",&initial);
    //logic for FCFS disk schdeuling
    printf("Sequence of request access: \n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",RQ[i]);
        TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-initial);
        initial=RQ[i];
    }
    printf("\n Total head Moment is %d  ",TotalHeadMoment);
    return 0;
}
/*
Enter the number of Requests
7
Enter the requests sequence 
82 170 43 140 24 16 190 
enter initial head position 
50
Sequence of request access: 
82 170 43 140 24 16 190
 Total head Moment is 642  [1] + Done*/
