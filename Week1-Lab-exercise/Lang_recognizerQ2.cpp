#include <iostream>
#include <string>
using namespace std;

int main()
{
    int state = 0;
    string input;
    cout << "Enter input string :";
    cin>>(cin, input);
    for(int i=0;i<input.length();i++)
    {
        if(i == 0)
            state = 1;
        else{
            if(input[i] == input[i-1])
                state = 0;
            else    
                state = 1;
        }
    }
    if (state == 0)
        cout<<"String accepted\n";
    else
        cout<<"String not accepted\n";

    return 0;
}