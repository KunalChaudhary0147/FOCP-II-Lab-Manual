/*write a single function Result to take atleast 2 and atmost 5 marks and give average of the result.*/

#include<iostream>
using namespace std;
float Result(float a , float b , float c = 0.0f , float d = 0.0f , float e = 0.0f)
{    
    return (a + b + c + d + e);
}

int main(){
    cout<<"average of 2 marks is "<<Result(80.5f,90.5f)<<endl;
    cout<<"average of 3 marks is "<<Result(80.5f,90.5f,85.0f)<<endl;
    cout<<"average of 4 marks is "<<Result(80.5f,90.5f,85.0f,88.0f)<<endl;
    cout<<"average of 5 marks is "<<Result(80.5f,90.5f,85.0f,88.0f,92.0f)<<endl;
    return 0 ;
}
