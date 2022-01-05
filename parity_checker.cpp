#include<bits/stdc++.h>
using namespace std; 

int check_parity(int n) 
{
    int b;
    
    b = n ^ (n >> 1); 
    b = b ^ (b >> 2); 
    b = b ^ (b >> 4); 
    b = b ^ (b >> 8); 
    b = b ^ (b >> 16); 

    
    if (b & 1){
        return 1;
    }       
    else      
        return 0; 
} 

int main() 
{ 
    
    int n;
    cout<<"Enter the input: ";
    cin>>n;
    
    int ans=check_parity(n);
   
    if(ans==0){
        cout<<"Even Parity"<<endl;
    }   
    else
        cout<<"Odd Parity"<<endl;

    return 0; 
} 