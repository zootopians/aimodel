#include <iostream>
using namespace std;

string userid;

class reader {
    private:
    string userText;
    int wordCount;
    string word[100];

    public:
    void inputText (){
        cout<<userid<<">>";
        cin>>userText;
    }
    void analyseText(){
    }

};