#include <iostream>
#include <string>
#include <map>
using namespace std;
int main() {
    string string_of_characters,n;

    //1)Accept string from user 

    cout<<"Enter set of meaninful or non-meaningful characters :";
    getline(cin,string_of_characters);
    cout<<"\n"<<"You entered : "<<string_of_characters<<endl;
    cout<<"Length of your entered string : "<<string_of_characters.length()<<endl;
    string m=string_of_characters;

    //2)Checking for palindrome or not

    for (int i=m.length()-1;i>=0;i=i-1) {
        n=n+string_of_characters[i];
    }
    cout<<"Entered string in reverse order : "<<n<<endl;

    for(int i=0;i<m.length();i=i+1) {
        m[i]=toupper(m[i]);
        n[i]=toupper(n[i]);
    }

    cout<<"Coversion of forward string to upper case letters : "<<m<<endl;
    cout<<"Coversion of reverse string to upper case letters : "<<n<<endl;

    if (n==m) {
        cout<<"Palindrome"<<endl;
    }
    else {
        cout<<"Not Palindrome"<<endl;
    }

    //3)Frequency of each word 

    map<char, int> charFreq;

    for (char c : string_of_characters) {
        c = tolower(c);
        if (isalpha(c)) {
            ++charFreq[c];
        }
    }

    for (const auto&pair : charFreq) {
        cout<<pair.first<<": "<<pair.second <<endl;
    }


    //4)Replace all vowels with a character

    for(int i=0;i<string_of_characters.length();i=i+1) {
        if (string_of_characters[i]=='a' || string_of_characters[i]=='e' || string_of_characters[i]=='i' || string_of_characters[i]=='o' || string_of_characters[i]=='u'
        || string_of_characters[i]=='A' || string_of_characters[i]=='E' || string_of_characters[i]=='I' || string_of_characters[i]=='O' || string_of_characters[i]=='U' ) {
            string_of_characters[i]='*';
        }

    }

    cout<<"Entered string after replacing all vowels by * : "<<string_of_characters;

    return 0;
}

    