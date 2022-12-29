#include<iostream>
#include<sstream>
using namespace std;

string intToString(int a){
    stringstream sso;
    sso<<a;// add to stringstream
    string sa;
    sso>>sa;// read from stringstream
    //cout<<sa<<" "<<sa.length()<<endl;
    return sa;
}
int countWords(string sentence){
    stringstream stream(sentence);
    string word;
    int count=0;
    while (stream>>word) {
        cout<<" : "<<word<<endl;
        count++;
    }
    return count;
}
string reverseWords(string s) {
    stringstream stream(s);
    string ans;string word;
    while (stream>>word) {
        word.push_back(' ');
        ans=word+ans;
    }
    ans.pop_back();
    return ans;
}



int main(){
    cout<<"hello"<<endl;
    /* Understanding String stream - #include<sstream> */
    
    /*Integer to string - simple put int in stringstream**/
    int a=1234;
    string sa=intToString(a); cout<<sa.length()<<endl;
    sa="Its not in our stars to hold our destiny , but in ourselves .";
    cout<<countWords(sa)<<endl;
    
    
    return 0;
}
