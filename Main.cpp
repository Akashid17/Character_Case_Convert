
#include<iostream>

using namespace std;

class CharacterX
{
    public:

        void CharacterConvert(char);
};

void CharacterX::CharacterConvert(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        cout<<char(ch+32)<<endl;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        cout<<char(ch-32)<<endl;
    }
    else
    {
        cout<<"Wrong Character Entered\n";
    }
}

int main()
{
    char cValue = '\0';

    cout<<"Enter Character\n";
    cin>>cValue;

    CharacterX cobj;

    cobj.CharacterConvert(cValue);

    return 0;
}