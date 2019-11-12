#include <set>
#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
class wode{
    public:
float a;
float b;
wode(float aa,float bb):a(aa),b(bb){}
bool operator==(wode w)
{
    return a==w.a &&b==w.b;
}
wode(Point p)
{
    a= p.x;
    b=p.y;
}

};
 
    int maxPoints(vector<Point> &p) {
        size_t size =p.size();
        if(size<=2) return size;
        vector<vector<wode>> re;
        int k=0;
        bool flag =false;
        for(int i=0;i<size;i++)
         for(int j=i+1;j<size;j++)
         {
                float a =0;
                float b=0;
             if((p[j].x-p[i].x)==0)
             {

                 a= INT_MAX;
                 b=0;
                                  
             }
             else if((p[j].y-p[i].y)==0)
             {
                 a=0;
                 b=INT_MAX;

             }
             else {
                  a =static_cast<float>(p[j].y-p[i].y)/static_cast<float>(p[j].x-p[i].x);
                  b =static_cast<float>(p[j].y)-a*static_cast<float>(p[j].x);
                }
                //string &current = re[make_pair(a,b)];
                for(k=0;k<re.size();k++)
                 {
                     vector<wode> hang = re[k];
                     if(hang[0]==wode(a,b))
                      {
                          if(find(hang.begin()+1,hang.end(),wode(p[i]))==hang.end())
                             hang.push_back(wode(p[i]));
                          if(find(hang.begin()+1,hang.end(),wode(p[j]))==hang.end())
                             hang.push_back(wode(p[j]));
                          flag =true;
                          break;
                      }
                 }

                 if(!flag)
                 {

                        vector<wode> hang(1,wode(a,b));
                        hang.push_back(wode(p[i]));
                        hang.push_back(wode(p[j]));
                        re.push_back(hang);

                 }
                 flag =false;
                
         }

int max=INT_MIN;
// vector<vector<wode>>::iterator it =re.begin();
// while(it!=re.end())
// {
//     size_t  d =(*it).size();
//     if(max<d )
//     max=d ;
//     it++;
// }
return max-1;

        
    }
};

In file included from a.cc:1:
In file included from /home/web/newjudge/include/tools.h:24:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/unordered_set:47:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/hashtable.h:35:
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/hashtable_policy.h:85:11: error: implicit instantiation of undefined template 'std::hash >'
noexcept(declval()(declval()))>
^
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/type_traits:138:14: note: in instantiation of template class 'std::__detail::__is_noexcept_hash, std::hash > >' requested here
: public conditional<_B1::value, _B2, _B1>::type
^
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/type_traits:148:39: note: in instantiation of template class 'std::__and_ > >, std::__detail::__is_noexcept_hash, std::hash > > >' requested here
: public integral_constant
^
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/unordered_map.h:46:34: note: in instantiation of template class 'std::__not_ > >, std::__detail::__is_noexcept_hash, std::hash > > > >' requested here
typename _Tr = __umap_traits<__cache_default<_Key, _Hash>::value>>
^
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/unordered_map.h:100:15: note: in instantiation of default argument for '__umap_hashtable, std::vector >, std::hash >, std::equal_to >, std::allocator, std::vector > > > >' required here
typedef __umap_hashtable<_Key, _Tp, _Hash, _Pred, _Alloc> _Hashtable;
^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
./solution.h:7:54: note: in instantiation of template class 'std::unordered_map, std::vector >, std::hash >, std::equal_to >, std::allocator, std::vector > > > >' requested here
unordered_map,vector> re;
^
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/system_error:134:12: note: template is declared here
struct hash;
^
In file included from a.cc:1:
In file included from /home/web/newjudge/include/tools.h:25:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/unordered_map:48:
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/unordered_map.h:522:7: error: multiple overloads of 'erase' instantiate to the same signature 'iterator (iterator)' (aka 'int (int)')
erase(iterator __position)
^
./solution.h:7:54: note: in instantiation of template class 'std::unordered_map, std::vector >, std::hash >, std::equal_to >, std::allocator, std::vector > > > >' requested here
unordered_map,vector> re;
^
/usr/bin/../lib/gcc/x86_64-linux-gnu/5.4.0/../../../../include/c++/5.4.0/bits/unordered_map.h:517:7: note: previous declaration is here
erase(const_iterator __position)
^
In file included from a.cc:2:
./solution.h:14:28: error: no member named 'find' in 'std::vector >'
if(current.find(i)==current.end())
~~~~~~~ ^
./solution.h:16:28: error: no member named 'find' in 'std::vector >'
if(current.find(j)==current.end())
~~~~~~~ ^
./solution.h:25:20: error: member reference type 'unordered_map, vector >::iterator' (aka 'int') is not a pointer
size_t d =it->second.size();
~~ ^
./solution.h:8:22: warning: comparison of integers of different signs: 'int' and 'size_t' (aka 'unsigned long') [-Wsign-compare]
for(int i=0;i ~^~~~~
./solution.h:9:25: warning: comparison of integers of different signs: 'int' and 'size_t' (aka 'unsigned long') [-Wsign-compare]
for(int j=i+1;j ~^~~~~
./solution.h:26:11: warning: comparison of integers of different signs: 'int' and 'size_t' (aka 'unsigned long') [-Wsign-compare]
if(max ~~~^~
3 warnings and 5 errors generated.