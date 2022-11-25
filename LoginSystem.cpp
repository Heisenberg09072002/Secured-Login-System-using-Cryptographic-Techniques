/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<fstream>
#include<string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <sstream>
using namespace std;

int key=7;

void decode_(char c)
{
    fstream fin;
    fstream fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);
 
    while (fin >> noskipws >> c) {
 
        // Remove the key from the
        // character
        int temp = (c - key);
        fout << (char)temp;
    }
 
    fin.close();
    fout.close();
}

void encode_(string file,char c)
{
    fstream fin, fout;
    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);
 
    while (fin >> noskipws >> c) {
        int temp = (c + key);
 
        fout << (char)temp;
    }
 
    fin.close();
    fout.close();
}

static std::vector<char> ReadAllBytes(char const* filename)
{
    ifstream ifs(filename, ios::binary|ios::ate);
    ifstream::pos_type pos = ifs.tellg();

    std::vector<char>  result(pos);

    ifs.seekg(0, ios::beg);
    ifs.read(&result[0], pos);

    return result;
}

string usn;
int tm;
void valid(string str)
{
    string dir,user;
    ifstream file;
    dir = str+".txt";
    file.open(dir.c_str());
    if(!file.is_open() && file.fail())
    {
        //file.close();
        return;
    }
    else
    {
        tm++;
        if(tm==3)
        {
            cout<<"\nThis username already exists\nPlease try Again.";
            //file.close();
            return;
        }
        cout<<"\nThis username already exists!\nCreate a username:";
        cin>>usn;
        //file.close();
        valid(usn);
    }
}

int main()
{
    int choice,i,exit=0;
    string ans,psd,name,fname,usern,pw,line,nusn;
    ofstream fileo;
    ifstream filei;
    cout<<"----------------------------------------------Welcome to our system!------------------------------------------------------\n";
    while(exit==0)
    {
        cout<<"\nChoose one option:\n1. SignIn/LogIn(press 1 to select this)\n2. SignUp/Register(press 2 to select this)\n\npress any key and enter to exit\n";
        cin>>choice;
        if(choice==1)
        {
            cout<<"Enter your username:";
            cin>>usn;
            cout<<"\nEnter your password:";
            cin>>psd;
			char a2='2';
			decode_(a2);
            fname="decrypt.txt";
            filei.open(fname.c_str());
            if(!filei.is_open() && filei.fail())
            {
                cout<<"\nYou are not registered, please register before logging in.\n";
                filei.close();
                continue;
            }
            getline(filei,usern);
            getline(filei,line);
            getline(filei,pw);
            if(usn==usern && psd==pw)
            {
                cout<<"\nYou are successfully logged in:)\nYOUR PROFILE SAYS:\n";
                cout<<"User-name:"<<usern<<endl;
                cout<<"Name:"<<line<<endl;
                filei.close();
            }
            else{
                cout<<"\nWrong username or password!\nPlease try Again.\n";
            }
            cout<<endl;
        }
        else if(choice==2)
        {
            cout<<"\nEnter your name:";
            cin.ignore();
            getline(cin,name);
            cout<<"\nCreate a username:";
            cin>>usn;
            tm=0;
            valid(usn);
            if(tm>=3)
            {
                continue;
            }
            cout<<"\nCreate a password:";
            cin>>psd;
            fname=usn+".txt";
            //cout<<fname;
            fileo.open(fname.c_str());
            fileo<<usn<<endl<<name<<endl<<psd<<endl;
            cout<<"\nYou are successfully registered:)";
            fileo.close();
            char a1='1';
            encode_(fname,a1);}
        else
        {
            exit=1;
        }
    }
    cout<<"\n----------------------------------------------Thank you for visiting:)----------------------------------------------------\n";
}
