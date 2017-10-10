#include <iostream>

using namespace std;

class queue
{
    public:
        int h, t;
        int a[10];
    public:
        queue
        {
            h = 0;
            t = -1;
        }

        void add_q(int e)
        {
            t++;
            a[t] = e;
        }

        int pop()
        {
            if(h < t)
            {
                h++;
                return(a[h-1]);
            }
        }

        int peek()
        {
            return a[h];
        }

        bool isfull()
        {
            if(t == 10)
                return true
            else
                return false
        }

        bool isempty()
        {
            if(t < h)
                return true
            else
                return false
        }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
