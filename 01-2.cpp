#include<iostream>
#include<filesystem>

using namespace std;
using namespace filesystem;

int main()
{
    path file {"text.txt"};
    
    cout << "current_path       : " << current_path()
         << "\nabsolute_path    : " << absolute(file)
         << "\ncanonical(file)  : " << canonical(file)
         << '\n';
    
}