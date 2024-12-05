#include<iostream>
using namespace std;

#include<fstream>

int main()
{
    ofstream fout("data.txt");
    int a=10;
    char str[20]="AJAY PALHAL";
    double dbl=1000.101;

    fout<<a<<" "<<str<<" "<<dbl;
    fout.close();

    ifstream fin("data.txt");
    fin>>a>>str>>dbl;
    cout<<a<<" "<<str<<" "<<dbl<<endl;
    fin.close();


}