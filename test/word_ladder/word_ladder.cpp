#include <map>
#include <string>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
// class Solution {
// public:
// bool isDistanceOne(string a,string b)
// {
//     int counter =0;
//     size_t size =a.size();
//     size_t t=0;
     
//     while(t<size)
//     {
//         if(a[t]!=b[t]) counter++;
//         if(counter>=2) return false;
//         t++;
//     }
//     if(counter==1) return true;
//     return false;


// }

// void buildRe(unordered_map<string,vector<string>> &re,string start,string end,   vector<string>& dict,unordered_map<string,bool> &flag){
//      vector<string>::iterator it = dict.begin();
      
//     while(it!=dict.end())
//     {
//         string first =*it;
//         // cout<<first<<" ";
//         flag[first] = false;
//          vector<string>::iterator it1 = dict.begin();    
//         while(it1!=dict.end())
//         {
            
//             string second = *it1;
//             if(isDistanceOne(first,second))
//                { re[first].push_back(second);
//             //    cout<<second<<" ";
//                }
//             it1++;
//         }
//         if(isDistanceOne(first,end))
//                 re[first].push_back(end);
//         // cout<<endl;
//         it++;
//     }
//     // cout<<start<<" ";
//       if( std::find(dict.begin(),dict.end(),start)!=dict.end()) return ;
//      vector<string>::iterator it1 = dict.begin();    
//         while(it1!=dict.end())
//         {
            
//             string second = *it1;
//             if(isDistanceOne(start,second))
//                 { re[start].push_back(second);
//             //    cout<<second<<" ";
//                }
//             it1++;
//         }
//         // cout<<endl;

        
    
// return ;

// }
//     vector<vector<string>> findLadders(string start, string end, vector<string>& dict) {
//         //unordered_set<string>  dict{wordList.begin(),wordList.end()}; 
//         if(std::find(dict.begin(),dict.end(),end) == dict.end()) return {};
//         if(start==end) return {{start,end}};
//         size_t size=start.size();
//         if(size==1) return {{start,end}};
//         unordered_map<string,vector<string>> re;
//         unordered_map<string,bool> flag;
//         buildRe(re,  start,  end,  dict,flag);
        
//         vector<vector<string>> result;
//         vector<string> hang;
//         find(result,re,  start,  end,hang,flag);
//         // cout<<result.size()<<endl;
//         //unordered_set<string>  dictt{result.begin(),result.end()};
//         //vector<vector<string>>  resultt{dictt.begin(),dictt.end()};
//         return  result;
        
//     }



//     void find(vector<vector<string>> &result,unordered_map<string,vector<string>> re,string start,string end,vector<string> sub,unordered_map<string,bool> flag)
//     {
//         //cout<<start<<endl;
//         if(flag[start]) return ;
//         if(start==end)
//         {
//                 sub.push_back(end);
//                 while(!result.empty() &&result.back().size()>sub.size())
//                     {
//                         result.pop_back();
//                         // cout<<"nide"<<endl;

//                     }

//                 if(result.empty()||(result.back().size()==sub.size()&&result.back()!=sub))
//                    { 
//                        result.push_back(sub);    
//                        //cout<<"wode"<<endl;
//                    }

//     //                for(int i=0;i<re.size();i++)
//     // {for(int j=0;j<result[i].size();j++)
//     // cout<<result[i][j]<<" ";

//     // cout<<endl;
//     // }
                
//                 return ;

//         }
//         vector<string> cu = re[start];
//         flag[start] =true;
//         sub.push_back(start);
//         // cout<<"test"<<endl;
//         for(auto str :cu)
//             find(   result, re,  str,  end, sub, flag);
//         flag[start] =false;    
   


//     }


// };

// int main()
// {
// //     "hit"
// // "cog"
// // ["hot","dot","dog","lot","log","cog"]

// // "hit"
// // "cog"
// // ["hot","dot","dog","lot","log"]

// // "hot"
// // "dog"
// // ["hot","cog","dog","tot","hog","hop","pot","dot"]

// // [["hot","hog","dog"],["hot","dot","dog"],["hot","hog","dog"],["hot","dot","dog"]]
// // [["hot","dot","dog"],["hot","hog","dog"]]

// // "qa"
// // "sq"
// // ["si","go","se","cm","so","ph","mt","db","mb","sb","kr","ln","tm","le","av","sm","ar","ci","ca","br","ti","ba","to","ra","fa","yo","ow","sn","ya","cr","po","fe","ho","ma","re","or","rn","au","ur","rh","sr","tc","lt","lo","as","fr","nb","yb","if","pb","ge","th","pm","rb","sh","co","ga","li","ha","hz","no","bi","di","hi","qa","pi","os","uh","wm","an","me","mo","na","la","st","er","sc","ne","mn","mi","am","ex","pt","io","be","fm","ta","tb","ni","mr","pa","he","lr","sq","ye"]

// string begin = "qa";
// string end ="sq";
// vector<string> dict={"si","go","se","cm","so","ph","mt","db","mb","sb",
// "kr","ln","tm","le","av","sm","ar","ci","ca","br","ti","ba","to","ra","fa","yo","ow","sn","ya",
// "cr","po","fe","ho","ma","re","or","rn","au","ur","rh","sr","tc","lt","lo","as","fr","nb","yb","if",
// "pb","ge","th","pm","rb","sh","co","ga","li","ha","hz","no","bi","di","hi","qa","pi","os","uh","wm","an","me",
// "mo","na","la","st","er","sc","ne","mn","mi","am","ex","pt","io","be","fm","ta","tb","ni","mr","pa","he","lr","sq","ye"
// };
// Solution so;
//  vector<vector<string>> re =so.findLadders(  begin,   end,  dict);
//  cout<<re.size()<<endl;
//  for(int i=0;i<re.size();i++)
//     {for(int j=0;j<re[i].size();j++)
//      cout<<re[i][j]<<" ";

//     cout<<endl;
//     }
// return 0;

// }

// class Solution {
// public:
//   vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
//   	for(auto w: wordList) dict.insert(w);
// 		for(int i=0; i<beginWord.length(); i++) {
// 			string str = beginWord;
// 			for(int j=0; j<26; j++) {
// 				str[i] = 'a'+j;
// 				if(dict.find(str) != dict.end() && beginWord != str) graph[beginWord].insert(str);
// 			}
// 		}
// 		for(int i=0; i<endWord.length(); i++) {
// 			string str = endWord;
// 			for(int j=0; j<26; j++) {
// 				str[i] = 'a'+j;
// 				if(dict.find(str) != dict.end() && endWord != str) graph[endWord].insert(str);
// 			}
// 		}
// 		for(auto word: wordList) {
// 			for(int i=0; i<word.length(); i++) {
// 				string str = word;
// 				for(int j=0; j<26; j++) {
// 					str[i] = 'a'+j;
// 					if(dict.find(str) != dict.end() && word != str) graph[word].insert(str);
// 				}
// 			}
// 		}

// 		unordered_set<string> vis;
// 		vis.insert(beginWord);
// 		level[beginWord] = 0;
// 		queue<string> q;
// 		q.push(beginWord);
// 		while(!q.empty()) {
// 			string v = q.front();
// 			q.pop();
// 			for(auto u: graph[v]) {
// 				if(vis.find(u) == vis.end()) {
// 					level[u] = level[v] + 1;
// 					vis.insert(u);
// 					q.push(u);
// 				}
// 			}
// 		}

// 		vis.clear();

// 		vector<string> now = {beginWord};
// 		for(auto u : graph[beginWord]) {
// 			vis.insert(u);
// 			now.push_back(u);
// 			go(u, now, vis, endWord);
// 			now.pop_back();
// 		}

// 		// debug(graph);

// 		return R;
//   }

//   void go(string curr, vector<string> &now, unordered_set<string> &vis, string endWord) {		
//   	if(curr == endWord) {
//   		R.push_back(now);
//   		return;
//   	}
// 	for(auto u : graph[curr]) {
// 		if(vis.find(u) == vis.end() && level[curr] + 1 == level[u]) {
// 			now.push_back(u);
// 			vis.insert(u);
// 			go(u, now, vis, endWord);
// 			now.pop_back();
// 			vis.erase(vis.find(u));
// 		}
// 	}
//   }

//   void debug(unordered_map<string, unordered_set<string>> &graph) {
//   	for(auto gp : graph) {
// 		cout << gp.first << " => "; for(auto g: gp.second) cout << g << " ";
// 		cout << endl;
// 	}
//   }

// private:
// 	vector<vector<string>> R;
// 	unordered_map<string, unordered_set<string>> graph;
// 	unordered_set<string> dict;
// 	unordered_map<string, int> level;
// };
#include <limits.h>
class Solution {
public:
    string longestPalindrome(string s) {
        size_t size =s.size();
        if(size<=1) return s;
        int max =INT_MIN;
        int begin=-1;int end=-1;
        vector<vector<char>> re(size,vector<char>(size,'n'));
        for(int i=0;i<size;i++)
            for(int j=0;j<=i;j++)
            {
                if(s[i]==s[j] &&(i-j<=1||re[j+1][i-1]=='y' ))
                    {
                        // cout<<j<<" "<<i<<endl;
                        re[j][i]='y';
                        if(max<i-j+1)
                            {
                                max =i-j+1;
                                begin =j;
                                end =i;
                            }
                    }

            }

        if(max>0) return s.substr(begin,max);
        return "";
    }
};


int main()
{
Solution so;
cout<<so.longestPalindrome("")<<endl;
return 0;

}