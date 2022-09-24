#include<stdio.h>
int lengthOfLongestSubstring(char * s){
    int length=0;
    int j=0,i=0;
    int length1=0;
    int test[200][200]={0};
    while(*(s+i)!='\0')
    {
        j=i;
        length=0;
        while(*(s+j)!='\0')
        {
            char ch=*(s+j);
            if(test[ch][0]==1)
            {
            	i=test[0][ch]+1;
            	for(int n=0;n<200;n++)
            	{
            			test[n][0]=0;
            			test[0][n]=0;

            	}
            	printf("j=%d, length=%d\n",j,length);
            	printf("Index=%d\n",i);
            	//test[200][200]={0};
                break;
            }
            else
            {
                test[ch][0]=1;
                test[0][ch]=j;
                j++;
                i++;
                length++;
             }
        }
        if(length1>length)
        {
            length=length1;
        }
        else
        {
            length1=length;
        }
    }
    return length1;
}

int main(void)
{
	char ch[200];
	printf("Enter\n");
	gets(ch);
	int value =lengthOfLongestSubstring(ch);
	printf("Length: %d",value);
	return 0;
}
