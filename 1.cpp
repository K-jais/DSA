string reverseWord(string str){
    char temp=' ';
    int i=0;
  if(str.length()%2==0)
  {
      while(i<(str.length()/2)){
         temp=str[i];
         str[i]=str[str.length()-i-1];
         str[str.length()-i-1]=temp;
         i++;
      }
  }else{
      while(i<((str.length()/2)+1)){
         temp=str[i];
         str[i]=str[str.length()-i-1];
         str[str.length()-i-1]=temp;
         i++;
      }
  }
  return str;
}
