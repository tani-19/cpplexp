#include <iostream>
#include <stdexcept>
using namespace std;
int main()
{
int a=10,b=0,c;
try{
if(b==0)
{
throw runtime_error("divide by zero is an error");
c=a/b;
}
}
catch(int error)
{
cout<<"exception ocured :"<<endl<<error;
}
catch(...)
{
cout<<"some exception occured"<<endl;
}
return 0;
}
