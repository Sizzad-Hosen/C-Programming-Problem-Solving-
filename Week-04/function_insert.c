#include <stdio.h>

int cng_value(int arr[], int n,int x) {

    for(int i = 0; i < n; i++) {
      arr[2]=x;
    printf("%d ",arr[i]);

    }
  
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i <n; i++)
    {
          scanf("%d",&arr[i]);
    }
    
 int x;
 scanf("%d",&x);


 
    int result = cng_value(arr,n,x);


    return 0;
}
