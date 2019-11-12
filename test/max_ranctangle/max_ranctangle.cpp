
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.size() == 0 || matrix[0].size() == 0) return 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        int res = 0;
        vector<int> height(cols, 0);
        vector<int> left(cols, 0);
        vector<int> right(cols, cols);
        for (int i = 0; i < rows; i++) {

            int curleft = 0, curright = cols;
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    height[j]++;
                } else {
                    height[j] = 0;
                }
                cout<< height[j]<<" ";
            }
            cout<<endl;




            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == '1') {
                    left[j] = std::max(left[j], curleft);//当前行最短的值 和上面是1的最短的值，说明以当前行为底，最左可以延伸到的地方,若上方为1 ，则是当前行最左和上行最左的比较，如果上一行此列为0,直接是当前行的最左即可
                    
                } else {
                    left[j] = 0;
                    curleft = j+1;
                }
                 cout<< left[j]<<" ";
            }





            cout<<endl;
            for (int j = cols-1; j >= 0; j--) {
                if (matrix[i][j] == '1') {
                    right[j] = std::min(right[j], curright);
                } else {
                    right[j] = cols;
                    curright = j;
                }
                cout<< right[j]<<" ";
            }
            cout<<endl;
            cout<<endl;
            cout<<endl;
            for (int j = 0; j < cols; j++) {
                //cout << height[j] << " " << (right[j] - left[j]) << endl;
                res = std::max(res, height[j]*(right[j] - left[j]));
            }
        }
        return res;
    }
};

[["0","1","1","0","1"],
 ["1","1","0","1","0"],
 ["0","1","1","1","0"],
 ["1","1","1","1","0"],
 ["1","1","1","1","1"],
 ["0","0","0","0","0"]]

height: 0 1 1 0 1 
left: 0 1 1 0 4 
right: 5 5 3 3 5 

height: 1 2 0 1 0 
left: 0 1 0 3 0 
right: 5 4 5 2 2 

height: 0 3 1 2 0 
left: 0 1 1 3 0 
right: 5 4 4 2 5 

height: 1 4 2 3 0 
left: 0 1 1 3 0 
right: 5 4 4 2 4 

height: 2 5 3 4 1 
left:   0 1 1 3 0 
right:  5 4 4 2 4 

height: 0 0 0 0 0 
left: 0 0 0 0 0 
right: 5 5 5 5 5 




class Solution {
public:
    int maximalRectangle(vector<vector<char> > &m) {
        int size= m.size();
        if(size==0) return 0;
        int subsize =m[0].size();
        if(subsize==0) return 0;
         int re =0;
         vector<int> h(subsize,0);
         int d =0;
        for(int i=0;i<size;i++)
         {   for(int j=0;j<subsize;j++)
            {
                if(m[i][j]!='0') 
                     h[j]++;
                else
                     h[j]=0;
                    //  cout<<h[j]<< " ";
                
            }
            // cout<<endl;
            vector<int> cu;
            int j=0;
         for( ;j<subsize;j++)
         {
             if(cu.size()<=1)
                d=-1;
                else d =cu[cu.size()-2];
             while(!cu.empty() &&(h[j])<(h[cu.back()] ) )
               {
                     re=std::max(re,(j-d-1)*(h[cu.back()] ));
                    //  cout<<"i = "<<i<<"j="<<j<<" "<<re<<endl;
                     cu.pop_back();
                     if(cu.empty()) break;
                     if(cu.size()<=1)
                d=-1;
                else d =cu[cu.size()-2];
                     
               }
              
            
            cu.push_back(j);
         }

          
             if(cu.size()<=1)
                d=-1;
                else d =cu[cu.size()-2];
             while(!cu.empty())
               {
                    re=std::max(re,(subsize-d-1)*(h[cu.back()] ));
                    //  cout<<"i = "<<i<<"j="<<cu.back()<<" "<<re<<endl;
                    cu.pop_back();
                   if(cu.size()<=1)
                    d=-1;
                   else 
                    d =cu[cu.size()-2];
                     
                     
               }
            
             
         
       
         
         }
            

        return re;      
        }
};
         