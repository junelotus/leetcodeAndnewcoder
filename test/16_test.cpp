#include <iostream>
using namespace std;


unsigned short ParseUInt16(const unsigned char* buffer)
  {
    unsigned short number;
    std::copy(buffer, buffer+2, reinterpret_cast<unsigned char*>(&number));
    return number;
  }

int main()
{
const unsigned char  buffer[2]={52,5};
unsigned short wode = ParseUInt16(buffer);
cout<<wode<<endl;

return 0;



}
