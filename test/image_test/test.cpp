#include <iostream>
using namespace std;

#define PIC_WIDTH   640  //1920  // 640
#define PIC_HEIGHT  416  //1208   // 416

#define picture_size  PIC_WIDTH * PIC_HEIGHT * 4   //640*416*4

typedef struct{
  int camera_index;
  uint64_t delta_time;
  uint64_t timestamp;
  uint8_t cpu_data[picture_size];
}__attribute__((packed)) SendRaw ;    
int main()
{

cout<<sizeof(SendRaw)<<endl;
return 0;

}
