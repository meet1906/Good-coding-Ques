bool canConstruct(char * ransomNote, char * magazine){
    
    int i, as;
    int a[10000] = {0};
    //printf("$$$ %d\n", a[97]);
    for(i=0; i<strlen(ransomNote); i++)
    {
        as = (int)ransomNote[i];
        a[as]++;
        //printf("%d, %d\n", a[as], as);
    }
    for(i=0; i<strlen(magazine); i++)
    {
        as = (int)magazine[i];
        a[as]--;
        //printf("* %d, %d\n", a[as], as);
        /*if(a[as] < 0)
            return(0);*/
    }
    for(i=0;i<strlen(ransomNote); i++)
    {
        as = (int)ransomNote[i];
        //printf("** %d, %d", a[as], as);
        if(a[as] > 0)
            return(0);
    }
    return(1);
    
    
    
    
    /*int i,j;
    if(strlen(ransomNote) > strlen(magazine))
    {
        return(0);
    }
    for(i=0; i<strlen(ransomNote); i++)
    {
        for(j=0; j<strlen(magazine); j++)
        {
            if(ransomNote[i] == magazine[j])
            {
                ransomNote[i]='0';
                magazine[j]='0';
            }
        }
    }
    for(i=0; i<strlen(ransomNote); i++)
    {
        if(ransomNote[i] != '0')
        {
            return false;
        }
    }
    return true;*/
    /*int i,j=0;
    for(i=0;i<strlen(ransomNote);i++)
    {
        if(ransomNote[i] == magazine[j])
        {
            
        }
        else
        {
            j++;
        }
    }
    for(i=0; i<strlen(ransomNote); i++)
    {
        if(ransomNote[i] != '0')
        {
            return(0);
        }
    }
    return(1);*/
    
}
