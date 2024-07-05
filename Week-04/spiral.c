 #include<stdio.h>

int main()
 {
    int m,n;
    printf("Enter m size\n");
     scanf("%d",&m);
    printf("Enter n size\n");

      scanf("%d",&n);

         printf("Enter your matrix\n");

    int mat[m][n];

    for (int i = 0; i <m; i++)
    {
        for (int j = 0; j <n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }

    int top,right,left,down,dir;

    top=0;
    left=0;
    right=n-1;
    down=n-1;
    dir=0;
    int i;

    
    while(top<=down && left<=right)
    {
        if(dir==0)
        {
            for(i=left;i<=right;i++)
              
                printf("%d ",mat[top][i]);
            top++;
        }
        else if(dir==1)
        {
            for(i=top;i<=down;i++)
          
                    printf("%d ",mat[i][right]);
            right--;
        }
        else if(dir==2)
        {
            for(i=right;i>=left;i--)
               
                  printf("%d ",mat[down][i]);
         down--;
        }
        else if(dir==3)
        {
            for(i=down;i>=top;i--)
         
                    printf("%d ",mat[i][left]);
            left++;
        }
        dir=(dir+1)%4;
    }


    return 0;
}