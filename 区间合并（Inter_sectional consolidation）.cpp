#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
typedef pair<int,int> pii ;
vector<pii> nums,res ;
int main()
{
    int st=-2e9,ed=-2e9 ;                           //ed���������β��st�������俪ͷ
    int n ;
    scanf("%d",&n) ; 
    while(n--)
    {
        int l,r ; 
        scanf("%d%d",&l,&r) ;
        nums.push_back({l,r}) ;
    }
    sort(nums.begin(),nums.end()) ;                 //����˵�����
    for(auto num:nums)                   
    {
        if(ed<num.first)                            //���1�����������޷��ϲ�
        {
            if(ed!=-2e9) res.push_back({st,ed}) ;   //����1�Ž�res����
            st=num.first,ed=num.second ;            //ά������2
        }
        //���2������������Ժϲ���������1����������2������2����������1
        else if(ed<num.second)  
            ed=num.second ;                         //����ϲ�
    }  
    //(ʵ����Ҳ�����3������1��������2����ʱ����Ҫ�κβ���������ʡ��)

    //ע���Ź���֮�󣬲�����������2��������1

    res.push_back({st,ed});

    //����ѭ������ʱ��st,ed��������ʱ��st,ed��������Ҫ����ά����ֻ��Ҫ�Ž�res���鼴�ɡ�
    //��Ϊ��������һ�����У����Բ����ܼ������кϲ���

    /*
    for(auto r:res)
        printf("%d %d\n",r.first,r.second) ;
    puts("") ;
    */

    //(�������ע��ȥ���������ڵ���ʱ��)

    printf("%d",res.size()) ;           //�����
    return 0 ;
}
