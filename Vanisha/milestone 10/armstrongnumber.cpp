#include <iostream>
using namespace std;
// void cube(){
//  int num;
//  cin>>num;
 
//  cout<<num*num*num<< endl;
   
// }
int isarmstrong(int n){
    int  lastnumber, temp, sum;
    
    temp=n;
    sum=0;
    while(temp!=0){
        lastnumber= temp%10;
        sum += lastnumber*lastnumber*lastnumber;
        temp /= 10;
    }
    if(n==sum)
    return 1;
    else
    return 0;
    
}

void check(int start, int end){
    while(start<= end){
        if(isarmstrong(start))
        cout<<start<<endl;
        start++;
    }
}



int main()
{
   cout<<"Enter the starting range :"<<endl;
   int start;
   cin>>start;
   cout<<"Enter the ending range :"<<endl;
   int end;
   cin>>end;
   check(start, end);
   
   

    return 0;
}
