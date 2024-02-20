int lengthOfLastWord(char* s) {

    int length = strlen(s);
    int retlen=0;
    int found=0;
    //printf("%d",length);

    while(length--)
    {
        if(s[length]!=' ')
        {
            retlen++;
            found=1;
        }
        else if(found==1)
        {
            break;
        }
    }
    return retlen;    
}
