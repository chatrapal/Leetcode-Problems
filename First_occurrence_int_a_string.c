int strStr(char* haystack, char* needle) {

    int haystacklen = strlen(haystack);
    int needlelen = strlen(needle);
    int frnt = 0;
    int back = needlelen - 1;
    int needleSum = 0;
    int haystackSum = 0;
    int found=0;
    int f;
	int m;
    
    printf("haystacKLen: %d , needlelen: %d\n",haystacklen,needlelen);

    if (needlelen > haystacklen) {
        return -1;
    } else 
    {
        for (int i = 0; i < needlelen; i++) 
        {
            needleSum += *(needle + i);
            haystackSum += *(haystack+i);
        }
        printf("needleSum: %d\n",needleSum);

        for (int i=needlelen,k=0 ;i<=haystacklen;i++,k++) {
            printf("haystackSum: %d , i: %d\n",haystackSum, i);
            if(needleSum == haystackSum)
            {
				m=i-needlelen;
            	f=m;
            	printf("\nAbout to search from index: %d\n",m);
               for(int n=0;n<needlelen;n++)
               {
               	found=1;
               	if(haystack[m++]!=needle[n])
               	{
               		found=0;
               		break;
				}
			   }
            }
            if(found==1)
            {
            	printf("Found");
            	return f;
			}
            haystackSum = haystackSum - *(haystack+k) + *(haystack+i);
        }
        return -1;
    }
}
