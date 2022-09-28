#include<math.h>
int reverse(int x){
    int i;
    int sign=0;
    int rem,length=0;
    int temp=x;
    int value=0;
    int pMAX  = 2147483648-1;
    int nMAX = -2147483648;
    if((x<=pMAX)&&(x>=nMAX))
    {
        if((x & 2147483648)==2147483648)
        {
            sign=1;
        }
        printf("Sign: %d\n",sign);
        while(temp!=0)
        {
            temp=temp/10;
            length++;
        }
        while(x!=0)
        {
            rem=x%10;
            x=x/10;
            printf("rem: %d ",rem);
            value=value+rem*pow(10,--length);  
            if((value>=pMAX) || (value<=nMAX))
            {
                value=0;
                break;
            }
        }
    }
    printf("value: %d",value);
   // if(sign==1)
        //value = (-1)*(value);
    {
        return value;       
    }

}
