////减法
//bool cmp(vector<int>&A,vector<int>&B)
//{
//    if(A.size()!=B.size())return A.size()>B.size();
//    else{
//        for(int i=A.size()-1;i>=0;i--){
//            if(A[i]!=B[i])return A[i]>B[i];
//        }
//    }
//    return true;
//}
//vector<int> sub(vector<int> &A,vector<int> &B)
//{
//    int t=0;
//    vector<int> C;
//    for(int i=0;i<A.size();i++)
//    {
//        t=A[i]-t;
//        if(i<B.size())t-=B[i];
//        C.push_back((t+10)%10);
//        if(t<0)t=1;
//        else t=0;
//    }
//    while(C.size()>1&&C.back()==0)C.pop_back();
//    return C;
//}