int main(){
char ch , max_ch,str[100];
int i , len , max_times , low_let[26] = {0};
int dig[10] = {0};
printf("enter text : ");
len = read_text(str,sizeof(str),1);
max_ch = max_times = 0;
for(i=0;i<len;i++)
{
    if((str[i]>='a') && (str[i]<='z'))
    {
        ch = str[i] - 'a';
        low_let[ch]++;

        if(low_let[ch]>max_times)
        {
            max_times = low_let[ch];
            max_ch = str[i];
        }
    }else if((str[i]>='0') && (str[i]<='9'))
    {
        dig[str[i]-'0']++;
    }
}
printf("*****lower case letters appearances\n");
for(i=0;i<26;i++)
{
    if(low_let[i] != 0)
    {
        printf("letter %c appeared %d times\n",'a'+i,low_let[i]);
    }
}
printf("*****digit appearances\n");
for(i=0;i<10;i++)
{
    if(dig[i] != 0)
    {
        printf("digit %d appeared %d times\n",i , dig[i]);
    }
}
if(max_times != 0)
{
    printf("'%c'   appears    %d   times\n", max_ch,max_times);
}
  return 0;
}

