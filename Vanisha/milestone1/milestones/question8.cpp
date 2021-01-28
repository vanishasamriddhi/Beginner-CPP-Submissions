#include <iostream>
 using namespace std;
 int main()
 {
     int i,n, sum;
     cout<<"ENTER THE LAST DIGIT:"<<endl;
     cin>>n;
     for(i=1; i<=n; i+=2) 
    { 

  sum += i;
  
  }
  cout<<"Sum of the odd digits till "<<n<<"are "<<sum<<endl;
    return 0;
 }
