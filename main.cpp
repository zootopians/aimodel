#include <iostream>
#include <fstream>
#include <string>

using namespace std;



class reader {
    private:
    string userText;
    int wordCount;
    string word[100];

    public:
    void inputText (){
        
        cin>>userText;
    }
    void analyseText(){
        for (int i;i<=userText.length();i++){
           
        }
    }
};

class usercontrol {
    private:
        string password ,a ;
    public:
        string userid ;
        int addUser (){
            cout << "creating a user ID:"<< endl << "username : ";
            cin >> userid;
            cout << "password : ";
            cin >> a ;
            cout << "re-enter password : ";
            cin >> password;
            ofstream MyFile("users.txt");
            MyFile << userid << endl << "." << password ;
            MyFile.close();
        }

};
