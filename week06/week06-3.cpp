//week06-3.cpp
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string op:operations){//c++�i���j��
            //cout<<op<<"\n";//�|�L�Xԣ
            if(op[0]=='+'){//���G��ۥ[,��^�h
                int temp=a.back();//�O�̫�1��
                a.pop_back();//�R��
                int temp2=a.back();//�O�̫��2��
                a.push_back(temp);//�̫�1����^�h
                a.push_back(temp+temp2);//�ۥ[,��^�h
            }else if(op[0]=='D'){//�ƻs�̫�1��
                a.push_back(a.back()*2);
            }else if(op[0]=='C'){//�R�̫�1��
                a.pop_back();
            }else{//stoi(op)���,��^�h

                a.push_back(stoi(op));
            }
        }//for�j��,�C�}a�[�_��
        int ans=0;
        for(int now:a){//c++�i���j��
            ans+=now;
        }
        return ans;
    }
};
