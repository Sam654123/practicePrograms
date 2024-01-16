#include <iostream>

using namespace std;

class test
{
    int objNo;
    static int objCnt;

public:
    test()
    {
        objNo = ++objCnt;
    }
    ~test()
    {
        --objCnt;
    }
    void dispObjNumber()
    {
        cout << "object number: " << objNo << endl;
    }
    static void showcount()
    {
        cout << "Total object count: " << objCnt << endl;
    }
};

int test::objCnt = 0;

// Main Function
int main()
{
    test t1, t2;
    cout << "After creating Object t1 and t2" << endl;
    test::showcount();

    test t3;
    cout << "After creating Object t3" << endl;
    test::showcount();

    t1.dispObjNumber();
    t2.dispObjNumber();
    t3.dispObjNumber();

    return 0;
}
