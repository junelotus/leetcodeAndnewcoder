#include <math.h>
#include <exception>
#include <string>
#include<iostream>
#include <boost/accumulators/accumulators.hpp>
#include <boost/accumulators/statistics/max.hpp>
#include <boost/accumulators/statistics/mean.hpp>
#include <boost/accumulators/statistics/min.hpp>
#include <boost/accumulators/statistics/rolling_mean.hpp>
#include <boost/accumulators/statistics/stats.hpp>
#include <boost/accumulators/statistics/tail.hpp>
#include <boost/accumulators/statistics/variance.hpp>
#include <boost/circular_buffer.hpp>
/*累加实现了累加的功能,关于滑动哦该窗口的配置，结合rolling_mean使用，得到的是最后窗口size个数的数字的均值*/
using namespace std;
namespace stats = boost::accumulators;
class rolling_mean_test{
public:
rolling_mean_test():rolling_offset_(stats::tag::rolling_window::window_size = 3)
{}

void fun(){
for(float i =1.0;i<20.0;i+=1)
	rolling_offset_(i);
cout<<stats::rolling_mean(rolling_offset_)<<endl;
//cout<<rolling_offset_<<endl;
return ;
}

private :
stats::accumulator_set<float, stats::stats<stats::tag::rolling_mean> > rolling_offset_;//stats::stats<stats::tag::rolling_mean>这个set 里面可以有多个值，比如stats::stats<stats::tag::max, stats::tag::min,stats::tag::mean, stats::tag::variance>　表示要计算的多个值
};

int main(){
/*stats::accumulator_set<float, stats::stats<stats::tag::rolling_mean> >
      rolling_offset_(stats::tag::rolling_window::window_size = 10);

rolling_offset_(6.0);
rolling_offset_(8.0);
rolling_offset_(9.0);
cout<<stats::rolling_mean(rolling_offset_)<<endl;
*/
rolling_mean_test rmt;
rmt.fun();

return 0;
}
