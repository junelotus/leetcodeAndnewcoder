// #include <bits/stdc++.h>
// using namespace std;
// bool comp(pair<int,int> a,pair<int,int> b)
// {
//     if(a.first-a.second==b.first-b.second) return a.first<b.first;
//     return abs(a.first-a.second)<abs(b.first-b.second);

// }
// pair<int,int> fun(vector<pair<int,int>>re )
// {
//      int min =INT_MAX;
//      int flag =0;
//      int qoh=0;
// for(int j=0;j<re.size();j++){
//     pair<int,int> cu =re[j]; 
//     int cua = cu.first;
//     int cub = cu.second;
//     int qianyi=0;
//     int houyi =0;
//     for(int i=0;i<re.size();i++)
//     {
//         if(i==j) continue;
//         int a = re[i].first;
//         int b =re[i].second;
//         if(b==a+1) continue;
//         else{
//             if(a>cua&&a<cub)
//             {
//                 qianyi-=1;
//                 houyi+=1;

//             }
//             if(b>cua&&b<cub)
//             {
//                 qianyi+=1;
//                 houyi-=1;

//             }

//         }


//     }
//     qianyi+=cub-cua-1;
//     houyi+=cub-cua-1;

//     if(min>std::min(qianyi,houyi))
//     {
//         if(qianyi<houyi)
//          qoh  = 1;
//          else 
//          qoh=-1;

//         flag =j;
//         min= std::min(qianyi,houyi);


//     }
// }
// return pair<int,int>(flag,qoh);
//     //return qianyi<houyi?1:2;


// }


// void move(vector<pair<int,int>> &re,int t,int first,int second,int &counter)
// {
     
    
//     for(int i=0;i<re.size();i++)
//     {
//         int &a = re[i].first;
//         int &b = re[i].second;
//         if(a>first&&a<second)
//             a+=t;
//         if(b>first&&b<second)
//             b+=t;

//             if(a+1==b)
//              {
//                  int size =re.size();
//                  std:swap(re[i],re[size-1]);
//                  re.resize(size-1);
//                  counter--;

//              }


//     }
//     // if(counter>0)
//     // {


//     //              int size =re.size();
//     //              std::swap(re[0],re[size-1]);
//     //              re.resize(size-1);
//     //              counter--;
//     // }

     

// }


// int solve(vector<int> n)
// {
//     size_t size = n.size();
//     int counter = size/2;
//     int sum=0;
//     vector<pair<int,int>> re(counter,make_pair(-1,-1));
//     for(int i=0;i<size;i++)
//     {
//         int d = n[i];
//         // cout<<"d="<<d<<endl;
//         if(re[d-1].first==-1)
//         re[d-1].first =i;
//         else re[d-1].second=i;

//     }

//     // {
//     //     cout<<"re.size()="<<re.size()<<endl;
//     //     for(int i=0;i<re.size();i++)
//     //         cout<<"lonly "<<re[i].first<<" "<<re[i].second<<endl;

//     // }
//     for(int i=0;i<re.size();i++)
//     {
//         // cout<<"aaa"<<endl;
//         if(re[i].first+1==re[i].second)
//            { 
//             //    cout<<"bbb"<<endl;
//                counter--;
//                std::swap(re[i],re[re.size()-1]);
//                re.resize(re.size()-1);
//                i--;
//            }

//     }
//     if(counter==0) return 0;




//     while(counter>1)
//     {
        
//         // cout<<"ddd"<<endl;
//         // cout<<"sum="<<sum<<"  counter ="<<counter<<endl;
        
   
//         std::sort(re.begin() ,re.end(),comp);
        
//         pair<int,int>  dd = fun( re );
//         // {
//         // cout<<"to move "<<re[dd.first].first<<" "<<re[dd.first].second<<endl;
//         // cout<<"re.size()="<<re.size()<<endl;
//         // for(int i=0;i<re.size();i++)
//         //     cout<<"lonly "<<re[i].first<<" "<<re[i].second<<endl;

//         // }

//         int second =re[dd.first].second;
//         int first =re[dd.first].first;
         
//         sum+= second- first-1;
//         counter--;
//         std::swap(re[dd.first],re[re.size()-1]);
//           re.resize(re.size()-1);
//         // cout<<"sum="<<sum<<"  counter ="<<counter<<endl;
//         // cout<<"d="<<dd.first<<" "<<dd.second<<endl;
        
//         move(re,dd.second,first,second,counter);
//         // cout<<"sum="<<sum<<"  counter ="<<counter<<endl;
        
        
            



        

//     }

//     if(counter==1) sum+=re.back().second-re.back().first-1;
//     return sum;


// }

// int main()
// {
//     int c ;
//     cin>>c;
    
// vector<int> n(2*c,0);
//     for(int i=0;i<c;i++)
//     {
//         cin>>n[2*i]>>n[2*i+1];

//     }
//     if(c<=1) {cout<<0<<endl;return 0;}
//     // {
//     //     for(int i=0;i<n.size();i++)
//     //         cout<<"lony"<<n[i] <<endl;

//     // }

//     cout<<solve(n)<<endl;
//     return 0;
// } 

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[2*n],mark[2*n];
//     for(int i=0;i<2*n;i++)
//     {
//         cin>>a[i];
//         mark[i]=1;
//     }

//     int left=0, right, count=0;
//     while(left<2*n)
//     {
//         if(mark[left])
//         {
//             mark[left]=0;
//             right=left+1;
//             while(right<2*n && a[right]!=a[left])
//             {
//                 count+=mark[right];
//                 ++right;
//             }
//             mark[right]=0;
//         }
//         left++;
//     }
//     cout<<count<<endl;
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> re(2*n,0);
    vector<int> flag(2*n,1);
    for(int i=0;i<n;i++)
        cin>>re[2*i]>>re[2*i+1];

    int counter =0;
    for(int i=0;i<2*n;i++)
    {
        int d = re[i];
        
        if(flag[i] )
        {
            flag[i]=0;
            int k = i+1;
            while(k<2*n && re[k]!=d )
                counter+=flag[k++];
            flag[k] = 0;    


        }



    }
 cout<<counter<<endl;
    
    return counter;
    
}

小Q是篮球训练队的教练，篮球队新加入了N名队员，第i名队员的篮球水平值为ai。
小Q现在要把他们按照以下的要求分为A队和B队进行训练:
1、A队的队员水平值之和严格大于B队的队员水平值之和
2、对于A队中的任意一名队员，如果把他分配到B队，A队的水平值之和就会严格小于B队的水平值之和。
3、每个队员必须要加入一个队伍
小Q现在想知道有多少种方案可以按照以上要求完成分队。

 给你n张卡片，卡片上仅包含大写英文字母，现你可从这n张卡片中选出k张，要求得到尽可能高的分数。
关于分数的计算方式，在你所选择的k张卡片中，含有相同字母的卡片分数为卡片数乘以相同卡片个数。
就样例而言，选择九张D和其他任意一张，得到的结果为9*9+1 。 