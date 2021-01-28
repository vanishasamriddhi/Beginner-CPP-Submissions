#include <iostream>
 using namespace std;
 int main()
 {
     int i,n, sum;
     cout<<"ENTER THE LAST DIGIT:"<<endl;
     cin>>n;
     for(i=2; i<=n; i+=2) 
    { 

  sum += i;
  
  }
  cout<<"Sum of the even digits till "<<n<<"are "<<sum<<endl;
    return 0;
 }
