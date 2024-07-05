#include<stdio.h>
int binary(int arr[],int size,int element){

    int low=0;
    int high=size-1;
    int mid;

    while(low<=high){
        mid=(low+high)/2;

        if(arr[mid]==element){

            return mid;

        }
        if(arr[mid]<element){
            low=mid+1;

        }
        else{
            high=mid-1;

        }

        
    }
    return -1;



}
int main()
{

     int arr[]={1,3,5,7,10,20,30,40,100};
     int size=sizeof(arr)/sizeof(int);
     int element=100;
     int search=binary(arr,size,element);
     printf("The element index is %d\n",search);
     return 0;
}