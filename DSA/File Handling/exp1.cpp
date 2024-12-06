#include<iostream>
using namespace std;

#include<fstream>

int main()
{
    ofstream fout("data.txt", ios_base::app);
    int a=10;
    char str[20]="Java Developer";
    double dbl=1000.101;

    fout<<a<<" "<<str<<" "<<dbl;
    fout.close();

    ifstream fin("data.txt");
    fin>>a>>str>>dbl;
    cout<<a<<" "<<str<<" "<<dbl<<endl;
    fin.close();


}


// File handling is used to store and read data permanently.
// Real-world uses: saving game progress, logs, or user data.
// Examples: Bank systems, student records, and configuration files.
// It makes programs flexible and data reusable across sessions.