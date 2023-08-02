#include<iostream>
#include<string>
using namespace std;
int main()
{

string name;
cout << "Enter a variable name: ";
cin >> name;

    if(name[0]>='0' && name[0]<='9')
    {
    cout<<"Invalid"<<endl;
    return main();
    }

    else if((name=="int") || (name=="float") || (name=="string") || (name=="public") || (name=="static"))
    {
    cout<<"Invalid"<<endl;
    return main();
    }

    for(int i=0;i<name.size();i++)
    {
        if((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z') || (name[i]>='0' && name[i]<='9')||
        (name[i]!='@' && name[i]!='!' && name[i]!='#') && name[i]!='$' && name[i]!='*')
        {
        continue;
        }
        else
        {
        cout<<"Invalid"<<endl;
    return main() ;
        }
    }

    cout<<"Valid"<<endl;
    return main() ;
    }

