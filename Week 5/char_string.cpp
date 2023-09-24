#include <iostream>
#include <string.h>
using namespace std;

int findlength(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }

    // for(int i=0;i<n;i++){
    //     if(ch[i] == '\0'){
    //         //ruk ja na bhai
    //         break;

    //     }
    //     else{
    //         index++;
    //     }
    // }
    return index;
}

void reversestring(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}

void convertToUppercase(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}
void replaceChar(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        if (ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
}

bool checkPalindrome(char ch[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (ch[s] == ch[e])
        {
            s++;
            e--;
        }
        else
        {
            return false;
        }
    }
    // while loop ke bad agar ye yaha prr aya to
    // ye palindrome h aur return true krna h
    return true;
}

int main()
{

    // char ch[100];
    // cin.getline(ch, 100); // it takes a sentence with space and tab

    // int len=findlength(ch,100);
    // cout<<"The length is:"<<len<<endl;
    // cout<<"Using inbuild function:"<<strlen(ch)<<endl;

    // cout << "Before :" << ch << endl;
    // int len = findlength(ch, 100);
    // reversestring(ch, len);
    // cout << "After:" << ch << endl;

    // int len=findlength(ch,100);
    // convertToUppercase(ch,len);
    // cout<<ch<<endl;

    // int len=findlength(ch,100);
    // replaceChar(ch,len);
    // cout<<ch<<endl;

    // int len=findlength(ch,100);
    // bool check=checkPalindrome(ch,len);
    // if(check == true){
    //     cout<<"It is Palindrome"<<endl;
    // }
    // else{
    //     cout<<"It is not a Palindrome"<<endl;

    // }

    //     string name;
    // //    getline(cin,name);
    //     cin>>name;
    //     string temp="";
    //     cout<<"Length of the string:"<<name.length()<<endl;
    //     cout<<"String is empty or not:"<<temp.empty()<<endl; //for true it will give 1 and for false 0
    //     cout<<"Char position is:"<<name.at(0)<<endl;

    //     cout<<"Front character is:"<<name.front()<<endl;
    //     cout<<"Back character is:"<<name.back()<<endl;

    // string str1="Pratik";
    // string str2=" Nikam";
    // cout<<"Before appending:"<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;
    // //appending
    // str1.append(str2);
    // cout<<"After appending:"<<endl;
    // cout<<str1<<endl;
    // cout<<str2<<endl;

    // string desc="This is a car";
    // desc.erase(4,3); // erase this ke s ke bad 3 character ko delete karega
    // cout<<desc;

    // string first="Pratik nikam";
    // string second="D ";
    // first.insert(7,second);
    // cout<<first<<endl;

    // string name="Pratik";
    // cout<<"Before adding:"<<name<<endl;
    // name.push_back('S');
    // cout<<"After adding:"<<name<<endl;
    // name.pop_back();
    // cout<<"After removing:"<<name<<endl;

    // string str1="tere nal challi hasin koi na";
    // string str2="hasin";
    // if(str1.find(str2) == string::npos){
    //     cout<<"Not found";
    // }
    // else{
    //     cout<<"Found";
    // }

    // string str1="Pratik";
    // string str2="nikam";
    // if(str1.compare(str2) ==0){
    //     cout<<"Matching";
    // }
    // else{
    //     cout<<"Not matching";
    // }

    // it print the exact word which you want
    string str1 = "this is my car, which was taken by my mom";
    cout << str1.substr(16, 5);

    return 0;
}