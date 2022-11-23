/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//count occurrence of repeated word in a text 
#include <iostream>
#include<cstring>

using namespace std;


int main()
{
   string str =  "kuldeep this is this kumar kuldeep hello ";
   string sub[50];
   string s = " ";
   int i =0;
   int j = 0;
   char sep = ' ';
   while(i<str.length())
   {
       if(str[i]!=sep)
       {
           s+=str[i];
           
       }
       else
       {
           sub[j]=s;
           s=" ";
           j++;
       }
       
       i++;
   }
   sub[j]=s;
  int n =j+1;
  int visited[n];
  for( i=0;i<n;i++)
  {
      if(visited[i]!=1)
      {
          int count =1;
          for( j=i+1;j<n;j++)
          {
              if(sub[i]==sub[j])
              {
                  count++;
                  visited[j]=1;
              }
          }
         if(count !=1)
         {
              cout<<sub[i]<<"->"<<count<<" "<<"Times"<<endl;
         }
        }
  }
    return 0;
}
