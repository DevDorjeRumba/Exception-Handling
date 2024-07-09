                                   //Bad Allocation
#include <iostream>
#include <new>

using namespace std;

class Resource
{
private:
    int* data;
public:
    Resource(){}
    Resource(long long sizee)
    {
        cout<<"\nAcquiring  Resource"<<endl;
        data = new int[sizee];
        cout<<"\nAcquired Resource"<<endl;
    }

    ~Resource()
    {
        cout<<"\nReleasing Resource"<<endl;
        delete[] data;
        cout<<"\nReleased Resource"<<endl;
    }
};

int main()
{
    try
    {
        long long sizee = 1000000000000000000LL;
        Resource obj1(sizee);
        cout<<"\nResource Object Created Successfully"<<endl;
    }
    catch(const bad_alloc& e)
    {
        cout<<"\nException Caught: "<<e.what()<<endl;
    }


    return 0;
}
