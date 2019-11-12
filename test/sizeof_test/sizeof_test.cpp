#include <iostream>
using namespace std;
class ShortHeader
  {
  /*  ShortHeader() :
        sync0_(0xAA),
        sync1_(0x44),
        sync2_(0x13)
    {}

    uint8_t sync0_;
    uint8_t sync1_;
    uint8_t sync2_;
    uint8_t message_length_;
    uint16_t message_id_;
    uint16_t week_;
    uint32_t gps_ms_;
*/
void (*f)();

    void ParseHeader(const uint8_t* data)
    {
	uint8_t      sync0_ = data[0];
    	 uint8_t sync1_ = data[1];
      	uint8_t sync2_ = data[2];
    	uint8_t  message_length_ = data[3];
   	 uint8_t  message_id_ = 1362;//ParseUInt16(&data[4]);
     	uint8_t week_ = 3456;//ParseUInt16(&data[6]);
     	uint8_t  gps_ms_ =34567;// ParseUInt32(&data[8]);
    }
int wode()
{
return 3;
}

  };

int sum_(int a[])
{return sizeof(a);

}

int main()
{
int Array[]={5,8,6};
cout<<sizeof(Array)<<endl;

cout<<sum_(Array)/sizeof(int)<<endl;

void * wode;
cout<<sizeof(wode)<<"  "<<sizeof(int)<<endl;

cout<<sum_(Array)<<endl;

cout<<sizeof(ShortHeader)<<endl;

return 0;


}
