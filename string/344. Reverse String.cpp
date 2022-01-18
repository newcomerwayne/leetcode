Pointer solution:
void reverseString(char* s, int sSize)
{
    int i;
    char tmp;
     for( i = 0; i < sSize; i++, sSize-- )
     {
        tmp = *(s + i);
        *(s + i) = *(s + sSize - 1);
        *(s + sSize - 1) = tmp;    
     }
    return s;
}

Array solution:
void reverseString(char* s, int sSize)
{
    
    int i = 0,j = sSize-1;
    char temp;
    
    while(i < j){
        
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        
        i++;j--;
    }  
}
