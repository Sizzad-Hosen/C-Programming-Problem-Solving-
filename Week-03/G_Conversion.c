#include<stdio.h>
#include<string.h>



int main()
{

     char str[100001];
     scanf("%s",str);

     for(int i=0; i<strlen(str); i++){

        if(str[i]==','){
            printf(" ");

        }

       else if(str[i]>='a' && str[i]<='z' ){

     
      char ans = str[i]-32;


            printf("%c",ans);
        }

        else if(str[i]>='A' && str[i]<='Z'){


      char ans = str[i]+32;
     


            printf("%c", ans);


        }
        else{
            printf("%c",str[i]);

        }

     }
     return 0;
}