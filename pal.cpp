#include <algorithm>
#include <string>
#include <iostream>
#include <cctype> 
using namespace std;
 int main() 
{   int v;
    string str;
    string tmp;
    getline(cin, str);
    v = str.length();
    for (int i = 0; i <v ; i++){
      if(ispunct(str[i]))str.erase(i,1);
      if(str[i]==' ')str.erase(i,1);
    if (isupper(str[i])) str[i] = tolower(str[i]);}
    tmp = str;
    reverse(str.begin(), str.end());
    if (str == tmp)
        cout << 1;
    else
        cout << 0;
    return 0;
}
