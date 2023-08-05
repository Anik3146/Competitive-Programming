#include<stdio.h>
#include<math.h>

int main(){

    int num,i,sum=0,count=0,rem,total_prime=0;
    scanf("%d",&num);

    while(num>0){
            rem=num%10;
            num/=10;

        for(i=2;i<sqrt(rem)+1;i++){
                if(rem%i==0 && rem!=i){
                count++;
                break;
            }
        }
            if(count==0 && rem>1){
                total_prime++;
                sum+=rem;
            }
            count=0;

            }
            printf("Sum = %d\n",sum);
             printf("Average = %.2f\n",(sum*1.)/total_prime);



    return 0;

}
