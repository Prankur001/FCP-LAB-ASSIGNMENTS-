#include<stdio.h>
void main()
{
    int numb[13] = {7,2,9,4,5,6,1,8,3,10,13,12,11,};
    float temp;
    temp = 0;
    // traverse 
    int i;
    for(i=0;i<13;i++){
        printf("value at index is  %d %d",i,numb[i]);
        temp = temp+numb[i];
    
    }
    printf("sum is %f",temp);
    printf("average of numb is %f",temp/13);


    

}