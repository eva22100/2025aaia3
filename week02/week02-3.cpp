///week02-3.cpp  �ϥ� c++2011�~�s�����r�� stoi()�\��
///�bCodeBlock��,�����}��settting-comiler...��c++11���Ĥ�
#include <iostream>///cin coutŪ�J���,�L�X���
#include <string>///string�r�ꪺ�\��
using namespace std;///�ϥ�[�R�W�Ŷ�]�зǪ�std
int main()
{
	string a;///�ŧi�r��a
	string ans;///�ŧi�r��ans�񵪮ץΪ�
	cin>>a;///Ū�J�r��a
	int N=a.length();///�r��a������
	for(int i=N-1;i>=0;i--){///�˹L�Ӫ��j��
		ans+=a[i];///�b�j���,��a[i]���ans���᭱
	}
	cout<<a<<'+'<<stoi(ans)<<'='<<stoi(a)+stoi(ans)<<endl;

}///stoi()is"string to int"��[�r��]�ܦ�[���]
