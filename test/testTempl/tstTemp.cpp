#include <bits/stdc++.h>
using namespace std;

template <class T>
void ConvertRGBA2Grey( uint8_t *dev_input, T *dev_output, uint32_t width,
                      uint32_t height
                       ) {
  int block_num = 512;

  T *wode =dev_output ;

//   dim3 dim_grid((width * height + block_num - 1) / block_num);
//   dim3 dim_block(block_num);
//   ConvertRGBA2GreyKernel<<<dim_grid, dim_block>>>(dev_input, dev_output, width,
//                                                   height);
}

template void ConvertRGBA2Grey( uint8_t *dev_input, uint8_t *dev_output, uint32_t width,
                      uint32_t height 
                                );
template void ConvertRGBA2Grey(   uint8_t *dev_input, float *dev_output, uint32_t width,
                      uint32_t height  
                                );



template<class T>
void fun(T *a)
{
    T *b=a;
    return  ;

}
template  void fun(int *a);
template  void fun(float *a);

 
int main()
{


int a=1;
void * b = static_cast<void*>(&a);
fun(&a);
fun(b);
uint8_t *dev_input =NULL;
ConvertRGBA2Grey(dev_input,b,1,2);
return 0;


}