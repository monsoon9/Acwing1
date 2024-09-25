////高精度加减乘除
//#include<iostream>
//#include<vector>
//#include <algorithm>
//
//using namespace std;
//const int N = 1e6+10;
////C=A+B
//vector<int> add(vector<int> &A,vector<int> &B)
//{
//    vector<int> C;
//    int t=0;  //进位
//    for(int i=0;i<A.size()||i<B.size();i++)
//    {
//        if(i<A.size())t+=A[i];
//        if(i<B.size())t+=B[i];
//        C.push_back(t%10);  //把结果放到数组C中
//        t/=10;
//    }
//    if(t)C.push_back(1);
//    return C;
//}
//
////减法
//bool cmp(vector<int> &A,vector<int> &B)
//{
//    if(A.size()!=B.size())return A.size()>B.size();
//    else{
//        for(int i=A.size()-1;i>=0;i--)
//        {
//            if(A[i]!=B[i])return A[i]>B[i];
//        }
//    }
//    return true;
//}
////C=A-B
//vector<int> sub(vector<int> &A,vector<int> &B)
//{
//    vector<int> C;
//    int t=0;
//    for(int i=0;i<A.size();i++)
//    {
//        t=A[i]-t; //用A[i]先减去借位
//        if(i<B.size())t-=B[i];
//        C.push_back((t+10)%10);//此处解决了t为负数的问题
//        if(t<0)t=1;   //如果t小于0说明借位了
//        else t=0;
//    }
//    //消除前置0：
//    while(C.size()>1&&C.back()==0)C.pop_back();
//    return C;
//}
//
////乘法
//vector<int> mul(vector<int> &A,int a)
//{
//    vector<int> C;
//    int t=0;
//    for(int i=0;i<A.size()||t;i++)
//    {
//        if(i<A.size())t+=A[i]*a;
//        C.push_back(t%10);
//        t/=10;
//    }
//    return C;
//}
//
////除法
////A/b,商是C，余数是r
//vector<int> div(vector<int> &A,int b,int &r)//此处为什么要&r，把r传进来并改变r在外面的值，r是余数
//{
//    vector<int> C;//商
//    for(int i=A.size()-1;i>=0;i--)
//    {
//        r=r*10+A[i];
//        C.push_back(r/b);
//        r%=b;
//    }
//    reverse(C.begin(),C.end());
//    while(C.size()>1&&C.back()==0)C.pop_back();//消除前置0
//    return C;
//}
//int main()
//{
//    string a,b;
//    vector<int>A,B;
//    cin >> a >>b;
//    //反向填充向量A
//    for(int i=a.size()-1;i>=0;i--)A.push_back(a[i]-'0');
//    for(int i=b.size()-1;i>=0;i--)B.push_back(b[i]-'0');//将字符串转换为整数
//// 执行加法
////    auto C=add(A,B);
////    for(int i=C.size()-1;i>=0;i--)cout<<C[i];cout<<endl;
////    return 0;
//
//// 执行减法
//
////    if(cmp(A,B)){
////        auto C = sub(A, B);
////        for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
////        cout << endl;
////    }
////    else{
////        auto C = sub(B, A);
////        cout<<"-";
////        for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
////    }
////    cout << endl;
//
//
////乘法
////    int n;
////    cin>>n;
////    auto C = mul(A,n);
////    for(int i=C.size()-1;i>=0;i--)cout<<C[i];
////    cout<<endl;
////    return 0;
//
//
////除法
//    int n;
//    cin>>n;
//    int r=0;
//    auto C = div(A,n,r);
//    for(int i=C.size()-1;i>=0;i--)cout<<C[i];
//    cout<<endl;
//    cout<<r<<endl;
//    return 0;
//}
//
//




//#include"iostream"
//#include<vector>
//#include <algorithm>
//
//using namespace std;
////加法
//vector<int> add(vector<int> &A,vector<int> &B)
//{
//    int t=0;
//    vector<int> C;
//    for(int i=0;i<A.size()||i<B.size();i++) {
//        if (i <= A.size() - 1)t += A[i];
//        if (i <= B.size() - 1)t += B[i];
//        C.push_back(t%10);
//        t/=10;
//    }
//    return C;
//}

////减法
//bool cmp(vector<int> &A,vector<int> &B)
//{
//    if(A.size()!=B.size())return A.size()>B.size();
//    else
//    {
//        for(int i=A.size()-1;i>=0;i--)
//        {
//            if(A[i]!=B[i])return A[i]>B[i];
//        }
//    }
//    return true;
//}
//vector<int> sub(vector<int> &A,vector<int> &B)
//{
//    int t=0;
//    vector<int>C;
//    for(int i=0;i<A.size();i++)
//    {
//        t=A[i]-t;
//        if(i<B.size())t-=B[i];
//        C.push_back((t+10)%10);
//        if(t<0)t=1;
//        else t=0;
//    }
//    //消除前置0
//    while(C.size()>1&&C.back()==0)C.pop_back();
//    return C;
//}

//乘法
//vector<int> mul(vector<int> &A,int a)
//{
//    int t=0;
//    vector<int> C;
//    for(int i=0;i<A.size()||t;i++)
//    {
//        if(i<A.size())t+=A[i]*a;
//        C.push_back(t%10);
//        t/=10;
//    }
//    return C;
//}
//vector<int> mul(vector<int> &A,int a)
//{
//    vector<int> C;
//    int t=0;
//    for(int i=0;i<A.size()||t;i++)
//    {
//        if(i<A.size())t+=A[i]*a;
//        C.push_back(t%10);
//        t/=10;
//    }
//    return C;
//}

//除法
//vector<int> div(vector<int> &A,int a,int &r)
//{
//    vector<int>  C;
//    for(int i=A.size()-1;i>=0;i--)
//    {
//        r=r*10+A[i];
//        C.push_back(r/a);
//        r%=a;
//    }
//    reverse(C.begin(),C.end());
//    while(C.size()>1&&C.back()==0)C.pop_back();
//    return C;
//}
//
//int main() {
//    string a, b;
//    vector<int> A, B;
//    cin >> a >> b;
//    //反向填充向量A
//    for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
//    for (int i = b.size() - 1; i >= 0; i--)B.push_back(b[i] - '0');//将字符串转换为整数
//// 执行加法
////    auto C = add(A, B);
////    for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
////    cout << endl;
////    return 0;
//
//// 执行减法
////    if(cmp(A,B)){
////        auto C = sub(A, B);
////        for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
////        cout << endl;
////    }
////    else{
////        auto C = sub(B, A);
////        cout<<"-";
////        for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
////    }
////    cout << endl;
//
//
////乘法
////    int n;
////    cin>>n;
////    auto C = mul(A,n);
////    for(int i=C.size()-1;i>=0;i--)cout<<C[i];
////    cout<<endl;
////    return 0;
//
//
//////除法
//    int n;
//    cin>>n;
//    int r=0;
//    auto C = div(A,n,r);
//    for(int i=C.size()-1;i>=0;i--)cout<<C[i];
//    cout<<endl;
//    cout<<r<<endl;
//    return 0;
//
//}


//#include <vector>
//#include <algorithm>
//#include"iostream"
//using namespace std;
////加法
//vector<int> add(vector<int> &A,vector<int> &B)
//{
//    int t=0;
//    vector<int> C;
//    for(int i=0;i<A.size()||i<B.size();i++)
//    {
//        if(i<A.size())t+=A[i];
//        if(i<B.size())t+=B[i];
//        C.push_back(t%10);
//        t/=10;
//    }
//    return C;
//}
//
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
//
////乘法
//vector<int> mul(vector<int>&A,int a)
//{
//    int t=0;
//    vector<int> C;
//    for(int i=0;i<A.size()||t;i++)
//    {
//        if(i<A.size())t+=A[i]*a;
//        C.push_back(t%10);
//        t/=10;
//    }
//    while(C.size()>1&&C.back()==0)C.pop_back();
//    return C;
//}
//
//
////除法
//vector<int> div(vector<int> A,int a,int &r)
//{
//    int t=0;
//    vector<int>C;
//    for(int i=A.size()-1;i>=0;i--)
//    {
//        r=r*10+A[i];
//        C.push_back(r/a);
//        r%=a;
//    }
//    reverse(C.begin(),C.end());
//    while(C.size()>1&&C.back()==0)C.pop_back();
//    return C;
//}
//
//int main() {
//    string a, b;
//    vector<int> A, B;
//    cin >> a >> b;
//    //反向填充向量A
//    for (int i = a.size() - 1; i >= 0; i--)A.push_back(a[i] - '0');
//    for (int i = b.size() - 1; i >= 0; i--)B.push_back(b[i] - '0');//将字符串转换为整数
// 执行加法
//    auto C = add(A, B);
//    for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
//    cout << endl;


    // 执行减法
//    if(cmp(A,B)){
//        auto C = sub(A, B);
//        for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
//        cout << endl;
//    }
//    else{
//        auto C = sub(B, A);
//        cout<<"-";
//        for (int i = C.size() - 1; i >= 0; i--)cout << C[i];
//    }
//    cout << endl;

    //乘法
//    int n;
//    cin>>n;
//    auto C = mul(A,n);
//    for(int i=C.size()-1;i>=0;i--)cout<<C[i];
//    cout<<endl;
//    return 0;

////除法
//    int n;
//    cin>>n;
//    int r=0;
//    auto C = div(A,n,r);
//    cout<<"商为:";
//    for(int i=C.size()-1;i>=0;i--)cout<<C[i];
//    cout<<endl;
//    cout<<"余数为:"<<r<<endl;
//    return 0;
//
//}

//#include<iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// 加法
//vector<int> add(vector<int> &A, vector<int> &B) {
//    int t = 0;
//    vector<int> C;
//    //这里也要补||t
//    for (int i = 0; i < A.size() || i < B.size()||t; i++) {
//        if (i < A.size()) t += A[i];
//        if (i < B.size()) t += B[i];
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    return C;
//}
//
//// 减法
//bool cmp(vector<int>& A, vector<int>& B) {
//    if (A.size() != B.size()) return A.size() > B.size();
//    for (int i = A.size() - 1; i >= 0; i--) {
//        if (A[i] != B[i]) return A[i] > B[i];
//    }
//    return true;
//}
//
//vector<int> sub(vector<int> &A, vector<int>& B) {
//    int t = 0;
//    vector<int> C;
//    for (int i = 0; i < A.size(); i++) {
//        t = A[i] - t;
//        if (i < B.size()) t -= B[i];
//        C.push_back((t + 10) % 10);
//        if (t < 0) t = 1;
//        else t = 0;
//    }
//    while (C.size() > 1 && C.back() == 0) C.pop_back();
//    return C;
//}
//
//// 乘法
//vector<int> mul(vector<int>& A, int a) {
//    int t = 0;
//    vector<int> C;
//    for (int i = 0; i < A.size() || t; i++) {
//        if (i < A.size()) t += A[i] * a;
//        C.push_back(t % 10);
//        t /= 10;
//    }
//    while (C.size() > 1 && C.back() == 0) C.pop_back();
//    return C;
//}
//
//// 除法
//vector<int> div(vector<int> A, int a, int &r) {
//    vector<int> C;
//    for (int i = A.size() - 1; i >= 0; i--) {
//        r = r * 10 + A[i];
//        C.push_back(r / a);
//        r %= a;
//    }
//    reverse(C.begin(), C.end());
//    while (C.size() > 1 && C.back() == 0) C.pop_back();
//    return C;
//}
//
//void printVector(vector<int>& A) {
//    for (int i = A.size() - 1; i >= 0; i--) printf("%d", A[i]);
//    cout << endl;
//}
//
//
//int main() {
//    string a, b;
//    cin >> a >> b;
//    vector<int> A, B;
//
//    // 从低位到高位存储数字
//    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
//    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');
//
//    // 加法
//    auto C = add(A, B);
//    printVector(C);
//
//    // 减法
//    if (cmp(A, B)) {
//        auto D = sub(A, B);
//        printVector(D);
//    } else {
//        auto D = sub(B, A);
//        printf("-");
//        printVector(D);
//    }
//
//    // 乘法
//    int t;
//    cin >> t;
//    auto E = mul(A, t);
//    printVector(E);
//
//    // 除法
//    int r = 0;
//    auto F = div(A, t, r);
//    printVector(F);
//    cout << "余数为：" << r << endl;
//    return 0;
//}










#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
//加法
vector<int> add(vector<int>&A,vector<int>&B)
{
    int t=0;
    vector<int>C;
    for(int i=0;i<A.size()||i<B.size()||t;i++)
    {
        if(i<A.size())t+=A[i];
        if(i<B.size())t+=B[i];
        C.push_back(t%10);
        t/=10;
    }
    return C;
}

//减法
bool cmp(vector<int>&A,vector<int>&B)
{
    if(A.size()!=B.size())return A.size()>B.size();
    else{
        for(int i=A.size()-1;i>=0;i--)
        {
            if(A[i]!=B[i])return A[i]>B[i];
        }
    }
    return true;
}
vector<int> sub(vector<int>&A,vector<int>&B)
{
    int t=0;
    vector<int>C;
    for(int i=0;i<A.size();i++)
    {
        t=A[i]-t;
        if(i<B.size())t-=B[i];
        C.push_back((t+10)%10);
        if(t<0)t=1;
        else t=0;
    }
    while(C.size()>1&&C.back()==0)C.pop_back();
    return C;
}

//乘法
vector<int> mul(vector<int>&A,int a)
{
    int t=0;
    vector<int>C;
    for(int i=0;i<A.size()||t;i++)
    {
        if(i<A.size())t=t+A[i]*a;
        C.push_back(t%10);
        t/=10;
    }
    while(C.size()>1&&C.back()==0)C.pop_back();
    return C;
}

//除法
vector<int> div(vector<int> &A,int a,int &r)
{
    vector<int>C;
    for(int i=A.size()-1;i>=0;i--)
    {
        r=r*10+A[i];
        C.push_back(r/a);
        r%=a;
    }
    reverse(C.begin(),C.end());
    while(C.size()>1&&C.back()==0)C.pop_back();
    return C;
}

void printVector(vector<int>A)
{
    for(int i=A.size()-1;i>=0;i--)cout<<A[i];
    cout<<endl;
}

int main() {
    string a, b;
    cin >> a >> b;
    vector<int> A, B;

    // 从低位到高位存储数字
    for (int i = a.size() - 1; i >= 0; i--) A.push_back(a[i] - '0');
    for (int i = b.size() - 1; i >= 0; i--) B.push_back(b[i] - '0');

    // 加法
    auto C = add(A, B);
    printVector(C);

    // 减法
    if (cmp(A, B)) {
        auto D = sub(A, B);
        printVector(D);
    } else {
        auto D = sub(B, A);
        printf("-");
        printVector(D);
    }

    // 乘法
    int t;
    cin >> t;
    auto E = mul(A, t);
    printVector(E);

    // 除法
    int r = 0;
    auto F = div(A, t, r);
    printVector(F);
    cout << "余数为：" << r << endl;
    return 0;
}






















