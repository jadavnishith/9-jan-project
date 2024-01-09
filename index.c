#include <stdio.h>
int main ()
{
    // Question 1

    // for (int n=0; n<=5; n++){
    //     for (int t=0; t<=20; t++){
    //         if(n==0||t==0||n==5||t==20){
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    // Question 2

    // int tej[3][3]={{8,20,30},
    //                {13,35,9},
    //                 {2,7,6}};
    // int n;
    // int t;
    // int sum=0;
    // int avg;
    // for(n=0; n<=2; n++){
    //     for(t=0; t<=2; t++){
    //         sum+=tej[n][t];
    //     }
    // }
    // avg=sum/9;
    // printf("Array Average is :- %d",avg);

    // Question 3
        int tej[3][3]={{1,2,3},
                       {5,6,7},
                       {10,11,12}};
        int sum=0;
        int sum2=0;
        for(int n=0; n<=2; n++){
            for(int t=0; t<=2; t++){
                if(n==t){
                    sum+=tej[n][t];
                }
                else{
                    sum2+=tej[n][t];
                }
            }
        }
        printf("%d ",sum);
        printf("%d",sum2);
    return 0;
}