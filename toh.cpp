#include <iostream>

using namespace std;



    
    void toh(int n,int A,int B,int C){
    
        if(n==1){
         cout<<"move disk from"<<A<<"to "<<C<<endl;
            return;
        }    
        
        toh(n-1,A,C,B);
        cout<<"move disk from"<<A<<"to"<<C<<endl;
        toh(n-1,B,A,C);
        
    }


    
    
       

int main()
{
   
   
    
    toh(4,1,2,3);
 

    
    return 0;
}
