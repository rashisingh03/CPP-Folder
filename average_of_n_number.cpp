#include<iostream>//Include the input/output stream library to enable input and output operations
using namespace std;//Use the standard namespace for cout, cin, etc.

int main(){//start of the main function
    int n,number,sum=0,average=0;//declare integer variables n, number, sum, and average
    cout<<"Enter the number:"<<endl;//enter the number of n
cin>>n;
for(int i=1;i<=n;i++){//using for loop
    cout<<"Enter the number:"<<i<<endl;//the user to enter the number of values n
    cin>>number;//input value n from the user

    sum+=number;//Add the input number to the running sum
}
 average=sum/n;//here weputting the formula of average(sum of all number/n numbers)
 cout<<"the average is:"<<average<<endl;
 return 0;
}
