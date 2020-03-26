
#include <iostream>
using namespace std;
class MyException
{
        int mValue;
        public:
        MyException(int value) : mValue(value)
        {
            cout<<mValue<<endl;
        }
};
class MyDerivedException : public MyException
{
        int mValue;
        int mAnotherValue;
        public:
        MyDerivedException(int value, int anotherValue) : MyException(value), mAnotherValue(anotherValue)
        {
            cout<<mAnotherValue<<endl;   
        }
};
void doSomething()
{
        throw MyDerivedException(10,20);
}
int main()
{
        try
        {
            doSomething();
        }
        catch (MyDerivedException &exception)
        {
            cout << "Caught Derived Class Exception" <<endl;
        }
        catch (MyException &exception)
        {
            cout << "Caught Base Class Exception"<<endl;
        }
        return 0;
}


