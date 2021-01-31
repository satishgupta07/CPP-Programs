#include<iostream>
using namespace std;

void asciisubseq(string s, string ans) {

     if(s.length() == 0) {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    asciisubseq(ros, ans);
    asciisubseq(ros, ans+ch);
    asciisubseq(ros, ans+to_string(code));
}

int main() {

    asciisubseq("ABC","");
    return 0;
}