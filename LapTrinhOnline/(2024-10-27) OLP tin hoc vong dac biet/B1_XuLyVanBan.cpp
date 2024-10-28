#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string line, result;
    
    while (getline(cin, line)) 
    {
        for (char c : line) {
            if (c != ' ') {    
                result += c;
            }
        }
    }
    
    cout << result << endl;
}
