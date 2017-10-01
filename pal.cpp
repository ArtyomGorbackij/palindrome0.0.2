#include <algorithm>
#include <string>
#include <iostream>
#include <cctype> 
using namespace std;
 int main() 
{
    string str;
    string tmp;
    cin >> str;
    str.erase(remove_if(str.begin(), str.end(), (int(*)(int))ispunct), str.end());
    str.erase(remove_if(str.begin(), str.end(), (int(*)(int))isspace), str.end());
    transform(str.begin(), str.end(), str.begin(), (int(*)(int))tolower);
    tmp = str;
    reverse(str.begin(), str.end());
    if (str == tmp)
        cout << 1;
    else
        cout << 0;
    return 0;
}
