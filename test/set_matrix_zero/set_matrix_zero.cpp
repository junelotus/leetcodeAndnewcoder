class Solution {
public:
    void setZeroes(vector<vector<int> > &m) {
        size_t size =m.size();
        if(size==0) return ;
        size_t subsize =m[0].size();
        if(subsize==0) return ;
        int a =0;
        int b=0;
        int t =0;
        while(a<size&&b<subsize)
        {
            int i=a,j=b;
            for( ;i<size;i++)
               { for( ;j<subsize;j++)
                {
                    if(m[i][j]==0)
                 {
                     for(int k=0;k<subsize;k++)
                       if(m[i][k]==1)
                            m[i][k]=0;
                      for(int k=0;k<size;k++)
                        if(m[k][j]==1) 
                            m[k][j]=0;
                             a=i+1;
                             b=j+1; 

                        break;          

                 }
                }

                if(j<subsize) break;
                a++;
                b=0;
                }
         

        }      return ;
    }
};

        // for(int i=0;i<size;i++)
        //  {
        //      for(int j=0;j<subsize;j++)
        //      {
                  
        //          if(m[i][j]==0)
        //          {
        //              for(int k=0;k<subsize;k++)
        //                if(m[i][k]==1)
        //                     m[i][k]=2;
        //               for(int k=0;k<size;k++)
        //                 if(m[k][j]==1) 
        //                     m[k][j]=2;      

        //          }

        //      }


        //  }

        // for(int i=0;i<size;i++)
        //  {
        //      for(int j=0;j<subsize;j++)
        //         if(m[i][j]==2)
        //             m[i][j]=0;
             
        //      }
  class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        bool firstRow=false, firstCol=false;
        for (int i=0; i<m; ++i) {
            for (int j=0; j<n; ++j) {
                if (matrix[i][j]==0) {
                    matrix[i][0]=matrix[0][j]=0;
                    if (i==0) firstRow=true;
                    if (j==0) firstCol=true;
                }
            }
        }
        for (int i=1; i<m; ++i) {
            for (int j=1; j<n; ++j) {
                if (matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
            }
        }
        if (firstRow) {
            for (int i=0; i<n; ++i) matrix[0][i]=0;
        }
        if (firstCol) {
            for (int i=0; i<m; ++i) matrix[i][0]=0;
        }
    }
};