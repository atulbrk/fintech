#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{char str[20];
  int c=0;  
       cin>>str;
       int n=strlen(str);
    for(int i = 0; i < n/2; i++){  
    
        if(str[i] != str[n-i-1]){  
            c = 1;  
            break;  
        }  
    }  
      
    if(c==0)  
       {
       	 cout<<"True";
	   }
    else  
       {
	   cout<<"False";  
        
		 }  
    return 0;  
}  
