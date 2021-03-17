void reverse(char *s) {
    // Your code goes here
    int k=strlen(s);
   int i=0;
   while (i<k/2)
   {
       char m=*(s+i);
       *(s+i)=*(s+k-i-1);
       *(s+k-i-1)=m;
       i++;
   }
}
