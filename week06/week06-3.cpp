//week06-3.cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op:operations){//c++進階迴圈
            //cout<<op<<"\n";//會印出啥
            if(op[0]=='+'){//末二位相加,塞回去
                int temp=a.back();//記最後1項
                a.pop_back();//吐掉
                int temp2=a.back();//記最後第2項
                a.push_back(temp);//最後1項塞回去
                a.push_back(temp+temp2);//相加,塞回去
            }else if(op[0]=='D'){//複製最後1項
                a.push_back(a.back()*2);
            }else if(op[0]=='C'){//吐最後1項
                a.pop_back();
            }else{//stoi(op)整數,塞回去

                a.push_back(stoi(op));
            }
        }//for迴圈,列陣a加起來
        int ans=0;
        for(int now:a){//c++進階迴圈
            ans+=now;
        }
        return ans;
    }
};
