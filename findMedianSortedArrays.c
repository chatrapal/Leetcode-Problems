double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int total_length=nums1Size + nums2Size;
    double Median=0;
    double arr[nums1Size+nums2Size];
    int index,iseven=0;
    int m=0,n=0,i;
    //for(m=0;m<nums1Size;m++)
    //printf("First: %d \n",*(nums1+m));
    //for(n=0;n<nums2Size;n++)
    //printf("Seconds: %d \n",*(nums2+n));
    m=0;
	n=0;
   	 	if(total_length%2==0)
   	 	{
    	    index=total_length/2;
        	iseven=1;
    	}
    	else
    	{
       	 	index = total_length/2;
        	iseven=0;
    	}
    //printf("Index is %d\n",index);
    for(i=0;i<total_length;i++)
    {
    	//printf("nums1Size=%d , m=%d , nums2Size=%d , n=%d\n",nums1Size,m,nums2Size,n);
       if(m<nums1Size && n<nums2Size)
        {
            if(*(nums1+m)<=*(nums2+n))
            {
                arr[i]=*(nums1+m);
                m++;
            }
            else
            {
                arr[i]=*(nums2+n);
                n++;
            }
        }
        else if(n<nums2Size)
        {
            arr[i]=*(nums2+n);
           // printf("nums2 %f %d\n",arr[i],i);
            n++;
        }
        else if(m<nums1Size)
        {
            arr[i]=*(nums1+m);
            m++;  
        } 
        /*if(*(nums1+m)<=*(nums2+n)&&(m<nums1Size))
        {
            arr[i]=*(nums1+m);
            m++;
        }
        else if(*(nums1+m)>=*(nums2+n)&&(n<nums2Size))
        {
            arr[i]=*(nums2+n);
            n++;
        }
        else
        {
            if(m<nums1Size)
            {
                arr[i]=*(nums1+m);
            }
            else
            {
                arr[i]=*(nums1+n);
                n++;
            }
        }*/
        // printf("ARR value is %f , %d\n",arr[i],i);  
        if(i==index && !iseven)
        {
            Median = arr[i];
           // printf("odd median is %f",Median);
            break;
        }
        else if(i==index && iseven)
        {
            Median = (arr[i]+arr[i-1])/2;
           // printf("Even median is %f",Median);
            break;
        }
    }
   // printf("\nthe arr is ");
   // for(int j=0;j<=i;j++)
   // printf("%f ",arr[j]);
    return Median;
}
