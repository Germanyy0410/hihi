#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<set>
#include<stack>

using namespace std;

int main() {
    string exp = "{{}{{}}}";
    if (exp.length() % 2 != 0) return -1;

    stack<char> s;
    
    for (int i=exp.size()-1; i >= 0; i--) {
        if (exp[i] == '}') {
            for (int j = i-1; j >= 0; j--) {
                if (exp[j] == '{') {
                    s.push(exp[i]);
                    s.push(exp[j]);
                    exp.erase(exp.begin()+i);
                    exp.erase(exp.begin()+j);
                }
                break;
            }
        }
    }


}