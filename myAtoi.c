#include<math.h>
int myAtoi(char * s){
    char a[20];
    int start=0;
    int i=0,j=0;
    int sign=0,length=0;
    double value=0;
    int nMAX = -2147483648;
    int pMAX = 2147483648-1;
    
    while(s[i]!='\0')
    {

        if(s[i]>='0' && s[i]<='9')
        {
            a[length++]=s[i];
            printf("a[%d]:%c ",length-1,a[length-1]);
            start=1;
        }
        else if((start==0)&&(s[i]=='-' || s[i]=='+')&&(s[i+1]>='0' && s[i+1]<='9'))
        {
            sign= (s[i]=='-') ? 1: 0;
        }
        else if((start==0)&&(s[i]<='0' || s[i]>='9'))
        {
            if(s[i]!=' ')
             break;
        }
        else if(start==1)
        {
            break;   
        }
        i++;
        /*if(s[i]=='+' || s[i]=='-')
        {
            sign=s[i];
            start=1;
        }
        else if((start==1) && s[i]>='0' && s[i]<='9')
        {
            a[j]=s[i];
            j++;
            
        }
        else
        {
            start=0;
        }
        i++;*/   
    }
    int power = 3*pow(10,11);
    printf("Length: %d,sign:%d, %d \n",length,sign,power);
    while(j<length)
    {
        double diff = (int)(a[j]-48);
        double power=power1(10,length-1-j);
        if(sign==1)
        {
            value = value - diff*power;
        }
        else
            value =  value+diff*power;
          printf("\nValue: %d, a[%d]:%c,diff:%d",value,j,a[j],diff);  
        if(value>pMAX)
            value = pMAX;
        else if(value<nMAX)
            value =  nMAX;
        //printf("\nValue: %d, a[%d]:%c,",value,j,a[j]);
        j++;
    }
    /*if(value>pMAX)
        value = pMAX;
    else if(value<nMAX)
        value = nMAX;*/
    /*if(sign==1)
        value = (-1)*(value);*/
    return value;

}
int power1(int base,int exp)
{
    int value=1;
    while(exp!=0)
    {
        value = value*base;
        exp--;
    }
    printf("Valuepower:%d\n",value);
    return value;
}
