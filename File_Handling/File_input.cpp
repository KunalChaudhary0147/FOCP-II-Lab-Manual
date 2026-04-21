#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout("kunal.txt");

    fout<<"My name is Kunal"<<endl;
    fout<<"\n 1234567 \n hghuds \n jainfa sifns\n";

    cout<<"Data written to file successfully."<<endl;
}