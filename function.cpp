/*Polymorphism*/

#include<iostream>
using namespace std;

int sum(int a ,int b){
    cout<<"this is int \n";
    return a+b;
}

float sum(float a ,float b){
     cout<<"this is float \n";
    return a+b;
}

double sum(double a ,double b){
     cout<<"this is double \n";
    return a+b;
}

int main(){
    cout<<sum(1.1f,2.1f);
    return 0 ;
}