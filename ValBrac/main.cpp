#include <iostream>
#include <string>

using namespace std;

class stack
{
    public:
        int p, len;
    public:
        stack(int l)
        {
            p = -1;
            len = l;
        }

    char a[50];

    public:
    void push(char t)
    {
        //if( ?!isfull() )
        //{
            p++;
            a[p] = t;
          // s += t;
        //}
    }

    char pop()
    {
        if( !isempty() )
        {
            p--;
            return a[p+1];
        }
        else
        {
            cout << "Nothing left to pop!";
        }
    }

    char peek()
    {
        return a[p];
    }

    bool isempty()
    {
        if(p == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isfull()
    {
        if(p == len)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int i = 0, flag = 0, l;
    string br, wish;

    do
    {
    cout << "Enter Your Bracket Expression!" << endl;
    cin >> br;
    l = br.length();

    stack s1(l), s2(l);

    for(i = 0; i < l; i++)
    {
        s1.push(br.at(i));
    }

    s2.push(s1.pop());

    while(!s1.isempty())
    {
        switch(s1.peek())
        {
            case ')':
                s2.push(s1.pop());
                break;

            case '}':
                s2.push(s1.pop());
                break;

            case ']':
                s2.push(s1.pop());
                break;

            case '(':
                if(s2.peek() == ')')
                {
                    s1.pop();
                    s2.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
                break;

            case '{':
                if(s2.peek() == '}')
                {
                    s1.pop();
                    s2.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
                break;

            case '[':
                if(s2.peek() == ']')
                {
                    s1.pop();
                    s2.pop();
                }
                else
                {
                    flag = 1;
                    break;
                }
                break;

            default:
                cout << "Now why would you enter anything other than a bracket?!";
                flag = 1;
                break;
        }

        if(flag == 1)
            break;
    }

    if(flag == 1 || !s2.isempty())
        cout << "Invalid Input!\n";
    else
        cout << "Your bracket thing is okay!\n";

    flag = 0;
    cout << "Do you want to continue?\n";
    cin >> wish;

    }while(wish.at(0) == 'Y' || wish.at(0) == 'y');

    return 0;
}
