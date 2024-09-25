//前缀和和差分

//前缀和  求某个区间的和（O（1））
//数组从1开始，0得空出来

//一维前缀和
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//const int N=100010;
//int n,m;
//int A[N],S[N];  //A是原始数组，S是前缀和数组
//
//int main()
//{
//    std::ios::sync_with_stdio(false);
//    cin>>n>>m;
//    for(int i=1;i<=n;i++)cin>>A[i];
//    for(int i=1;i<=n;i++)S[i]=S[i-1]+A[i];
//    while(m--)
//    {
//        int l,r;
//        cin>>l>>r;
//        printf("%d\n",S[r]-S[l-1]);
//    }
//    return 0;
//}


//二维前缀和
//#include<iostream>
//const int N=1010;
//int n,m,q;
//int a[N][N],s[N][N];
//
//int main()
//{
//    scanf("%d%d%d",&n,&m,&q);
//    for(int i=1;i<=n;i++)
//        for(int j=1;j<=m;j++)scanf("%d",&a[i][j]);
//
//    for(int i=1;i<=n;i++)
//        for(int j=1;j<=m;j++)s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
//
//    while(q--){
//        int x1,x2,y1,y2;
//        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
//        printf("%d\n",s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1]);
//    }
//    return 0;
//}


//一维差分       不要去理解差分数组的内容
//#include"iostream"
//using namespace std;
//const int N = 100010;
//int n,m;
//int a[N],b[N];
//
//void insert(int l,int r,int c)
//{
//    b[l]+=c;
//    b[r+1]-=c;
//}
//
//int main()
//{
//    scanf("%d%d",&n,&m);
//    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
//    for(int i=1;i<=n;i++)insert(i,i,a[i]);//相当于存的每一给位置的数都是a[i]-a[i-1]
//
//    while(m--)
//    {
//        int l,r,c;
//        scanf("%d%d%d",&l,&r,&c);
//        insert(l,r,c);
//    }
//    for(int i=1;i<=n;i++)b[i]+=b[i-1];
//    for(int i=1;i<=n;i++)printf("%d ",b[i]);
//    return 0;
//}

//测试案例
/*
5 3
1 2 3 4 5
1 3 10
2 4 5
1 5 2

result:13 19 20 11 7
*/


//二维差分
#include<iostream>

const int N=1010;
int n,m,q;
int a[N][N],s[N][N];

void insert(int x1,int y1,int x2,int y2,int c)
{
    s[x1][y1]+=c;
    s[x1][y2+1]-=c;
    s[x2+1][y1]-=c;
    s[x2+1][y2+1]+=c;
}
int main() {
    scanf("%d%d%d", &n, &m, &q);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)scanf("%d", &a[i][j]);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)insert(i, j, i, j, a[i][j]);

    while (q--) {
        int x1, y1, x2, y2, c;
        scanf("%d%d%d%d%d", &x1, &y1, &x2, &y2, &c);
        insert(x1, y1, x2, y2, c);
    }
    //前缀和
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)s[i][j] += s[i - 1][j] + s[i][j - 1] - s[i - 1][j - 1];

    //输出结果
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)printf("%d ", s[i][j]);
    printf("\n");
}
    return 0;
}

/*
测试案例：
3 3 2
1 2 3
4 5 6
7 8 9
1 1 2 2 10
2 2 3 3 5

result:
11 12 3
14 20 11
7 13 14
 */
