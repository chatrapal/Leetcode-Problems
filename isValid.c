bool isValid(char * s){
      int i=0,j=0,flag=1,temp=0,k=0;
    char a[10000],check;
    int copy=0;
    while(s[i]!='\0')
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            copy=++j;
           // printf("copy: %d\n",copy);
           if(a[0]=='\0')
           {
               a[0]=s[i];
               //printf("First a[0]: %c, j: %d\n",a[0],j);
           }
            else
            {
                while(copy!=0)
                {
                	copy--;
                    a[copy+1]=a[copy];
                    //printf(" a[%d]: %c, j: %d\n",copy+1,a[copy+1],j);
                    
                    //a[j]=temp;
                }
                //a[copy+1]=a[copy];
                a[copy]=s[i];
                //printf(" a[%d]: %c, j: %d\n",copy,a[copy],j);
                
            }
            a[j]='\0';
            //printf(" a[%d]: %c\n",copy,a[copy]);
        }
        else
        {
            if(s[i]==')')
                check='(';
            else if(s[i]=='}')
                check='{';
            else
                check='[';
           if(a[0]==check)
           {
           	//printf("s[%d]: %c\n",i,s[i]);
           		j--;
           		k=0;
               while(a[k]!='\0')
                {
                    //temp=s[j];
                    a[k]=a[k+1];
                    //printf("a[%d]:%c, check: %c\n",k,a[k],check);
                   	k++;
                    //a[j+1]=a[j];
                }
               a[k]='\0';
           }
            else
            {
                flag=0;
            }
        }
        i++;
    }
    if(a[0]!='\0')
    {
        flag=0;
    }
        
    return flag;
}
