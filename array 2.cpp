#include<iostream>
using namespace std;
int main(){
    int *p , *q;
    p = new int[4];
    p[0] = 1; p[1] =2 ;p[2] = 3 ; p[3]=4;
   /* for(int i=0;i<4;i++){
        cout<<p[i]<<" ";

    }*/
    q= new int [8];
     for(int i=0; i<4;i++){
        q[i]=p[i];

    }

     delete(p);
      p=q ;
     q = NULL;
     for(int i=0;i<8;i++){
        cout<<p[i]<<" ";

    }
    cout<<p[1];


return 0;
}