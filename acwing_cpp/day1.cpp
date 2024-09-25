//#include <iostream>
//using namespace std;


////快速排序
//void quick_sort(int q[],int l,int r){
//    if(l>=r) return;
//    //此处x的取值可以是l，r和(l+r)//2
//    int x = q[l],i=l-1,j=r+1;
//    while(i<j)
//    {
//        do i++;while(q[i]<x);
//        do j--;while(q[j]>x);
//        if(i<j)swap(q[i],q[j]);
//    }
//
//    //递归
//    quick_sort(q,l,j);
//    quick_sort(q,j+1,r);
//}
//
//int main(){
//    int arr[] = {123,1,51,51,35,452,5,12,55,15};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//    quick_sort(arr,0,n-1);
//
//    cout<<"排序后的数组：";
//    for(int i=0;i<n;i++){
////        cout<<arr[i]<<" ";
//        printf("%d ",arr[i]);
//    }
////    cout<<endl;
//    return 0;
//}
//
//
//
//


//#include<iostream>
//using namespace std;
//
//void quick_sort(int q[],int l,int r)
//{
//    if(l>=r) return;
//    int x=q[l],i=l-1,j=r+1;
//    while(i<j)
//    {
//        do i++;while(q[i]<x);
//        do j--;while(q[j]>x);
//        if(i<j) swap(q[i],q[j]);
//    }
//    quick_sort(q,l,j);
//    quick_sort(q,j+1,r);
//}
//int main(){
//    int n;
//    int *q = new int[1000000+10];
//    scanf("%d",&n);
//    for(int i=0;i<n;i++) scanf("%d",&q[i]);
//    for(int i=0;i<n;i++) printf("%d ",q[i]);
//    return 0;
//}

//#include<iostream>
//using namespace std;
//void quick_sort(int q[],int l,int r){
//    if(l>=r) return;
//    int x=q[l],i=l-1,j=i+1;
//    while(i<j){
//        do i++;while(q[i]<x);
//        do j--;while(q[j]>x);
//        if(i<j) swap(q[i],q[j]);
//    }
//    quick_sort(q,l,j);
//    quick_sort(q,j+1,r);
//}
//int main(){
//    int n;
//    cin>>n;
//    int *q = new int[n];
//    for(int i=0;i<n;i++) cin>>q[i];
//    quick_sort(q,0,n-1);
//    for(int i=0;i<n;i++) cout<<q[i]<<" ";
//    cout<<endl;
//    return 0;
//}



//#include "iostream"
//using namespace std;
////归并排序
//void merge_sort(int q[],int l,int r)
//{
//
//    if(l>=r)return;
//    int mid = l+r>>1;//求均值取整数
//    merge_sort(q,l,mid), merge_sort(q,mid+1,r);
//    int*tmp = new int[r-l+1];
//    int k=0,i=l,j=mid+1;
//    while(i<=mid&&j<=r)
//    {
//        if(q[i]<=q[j])tmp[k++]=q[i++];
//        else tmp[k++]=q[j++];
//    }
//    while(i<=mid)tmp[k++]=q[i++];
//    while(j<=r)tmp[k++]=q[j++];
//    for(i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
//    delete[] tmp;
//}
//
//int main(){
//    int n;
//    cin >> n;
//    int *q = new int[n];
//    for(int i=0;i<n;i++) cin>>q[i];
//    merge_sort(q,0,n-1);
//    for(int i=0;i<n;i++) cout<<q[i]<<" ";
//    cout << endl;
//    return 0;
//}

//#include "iostream"
//using namespace std;
//void merge_sort(int q[],int l,int r)
//{
//    if(l>=r) return;
//    int mid = (l+r)>>1;
//    //分
//    merge_sort(q,l,mid),merge_sort(q,mid+1,r);
//    int k=0,i=l,j=mid+1;
//    int *tmp = new int[r-l+1];
//    while(i<=mid&&j<=r)
//    {
//        if(q[i]<q[j])tmp[k++] = q[i++];
//        else tmp[k++] = q[j++];
//    }
//    while(i<=mid)tmp[k++]=q[i++];
//    while(j<=r)tmp[k++]=q[j++];
//
//    for(int i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
//    delete[] tmp;
//}
//int main(){
//    int n;
//    cin >> n;
//    int *q = new int[n];
//    for(int i=0;i<n;i++) cin>>q[i];
//    merge_sort(q,0,n-1);
//    for(int i=0;i<n;i++) cout<<q[i]<<" ";
//    cout << endl;
//    return 0;
//}

//#include "iostream"
//using namespace std;
//void merge_sort(int q[],int l,int r)
//{
//    if(l>=r)return;
//    int mid = (l+r)>>1;
//    merge_sort(q,l,mid), merge_sort(q,mid+1,r);
//    int k=0,i=l,j=mid+1;
//    int *temp = new int[r-l+1];
//    while(i<=mid&&j<=r)
//    {
//        if(q[i]<q[j])temp[k++]=q[i++];
//        else temp[k++] = q[j++];
//    }
//    while(i<=mid)temp[k++]=q[i++];
//    while(j<=r)temp[k++]=q[j++];
//
//    for(int i=l,j=0;i<=r;i++,j++)q[i]=temp[j];
//}
//int main(){
//    int n;
//    cin >> n;
//    int *q = new int[n];
//    for(int i=0;i<n;i++) cin>>q[i];
//    merge_sort(q,0,n-1);
//    for(int i=0;i<n;i++) cout<<q[i]<<" ";
//    cout << endl;
//    return 0;
//}

//#include "iostream"
//using namespace std;
//void quick_sort(int q[],int l,int r)
//{
//    if(l>=r)return;
//    int x=q[l],i=l-1,j=r+1;
//    while(i<j)
//    {
//        do i++;while(q[i]<x);
//        do j--;while(q[j]>x);
//        if(i<j)swap(q[i],q[j]);
//    }
//    quick_sort(q,l,j);
//    quick_sort(q,j+1,r);
//}
//void merge_sort(int q[],int l,int r)
//{
//    if(l>=r)return;
//    int mid = (l+r)>>1;
//    merge_sort(q,l,mid), merge_sort(q,mid+1,r);
//    int k=0,i=l,j=mid+1;
//    int *temp = new int[r-l+1];
//    while(i<=mid&&j<=r)
//    {
//        if(q[i]<q[j])temp[k++]=q[i++];
//        else temp[k++]=q[j++];
//    }
//    while(i<=mid)temp[k++]=q[i++];
//    while(j<=r)temp[k++]=q[j++];
//    for(int i=l,j=0;i<=r;i++,j++)q[i]=temp[j];
//    delete[] temp;
//
//}
//int main(){
//    int n;
//    cin >> n;
//    int *q = new int[n];
//    int *q1 = new int[n];
//    for(int i=0;i<n;i++) cin>>q[i];
//    for(int i=0;i<n;i++) cin>>q1[i];
//    quick_sort(q,0,n-1);
//    merge_sort(q1,0,n-1);
//    cout<<"quick_sort"<<endl;
//    for(int i=0;i<n;i++) cout<<q[i]<<" ";
//    cout << endl;
//    cout<<"merge_sort:"<<endl;
//    for(int i=0;i<n;i++) cout<<q1[i]<<" ";
//    cout << endl;
//    return 0;
//}

//#include "iostream"
//using namespace std;
////快速排序
//void quick_sort(int arr[],int l,int r)
//{
//    if(l>=r)return;
//    int x=arr[l],i=l-1,j=r+1;
//    while(i<j)
//    {
//        do i++;while(arr[i]<x);
//        do j--;while(arr[j]>x);
//        if(i<j)swap(arr[i],arr[j]);
//    }
//    quick_sort(arr,l,j);
//    quick_sort(arr,j+1,r);
//}
//int main() {
//    int arr[] = {3, 6, 8, 10, 1, 2, 1};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    quick_sort(arr, 0, n - 1);
//
//    for (int i = 0; i < n; i++) {
//        std::cout << arr[i] << " ";
//    }
//
//    return 0;
//}

////归并排序 先分后合
//#include"iostream"
//using namespace std;
//void print_array(int arr[], int size) {
//    for (int i = 0; i < size; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//void merge_sort(int arr[],int l,int r)
//{
//    if(l>=r)return;
//    int mid = (l+r)>>1;
//    merge_sort(arr,l,mid), merge_sort(arr,mid+1,r);
//    int k=0,i=l,j=mid+1;
//    int *temp = new int[r-l+1];
//    while(i<=mid&&j<=r)
//    {
//        if(arr[i]<arr[j])temp[k++]=arr[i++];
//        else temp[k++]=arr[j++];
//    }
//    while(i<=mid)temp[k++]=arr[i++];
//    while(j<=r)temp[k++]=arr[j++];
//
//    for(int i=l,j=0;i<=r;i++,j++)arr[i]=temp[j];
//    delete[] temp;
//}
//void run_tests() {
//    // 测试案例1：空数组
//    int arr1[] = {};
//    int size1 = sizeof(arr1) / sizeof(arr1[0]);
//    merge_sort(arr1, 0, size1 - 1);
//    cout << "Test Case 1 (Empty array): ";
//    print_array(arr1, size1);
//
//    // 测试案例2：单个元素
//    int arr2[] = {5};
//    int size2 = sizeof(arr2) / sizeof(arr2[0]);
//    merge_sort(arr2, 0, size2 - 1);
//    cout << "Test Case 2 (Single element): ";
//    print_array(arr2, size2);
//
//    // 测试案例3：已经排序的数组
//    int arr3[] = {1, 2, 3, 4, 5, 6};
//    int size3 = sizeof(arr3) / sizeof(arr3[0]);
//    merge_sort(arr3, 0, size3 - 1);
//    cout << "Test Case 3 (Already sorted): ";
//    print_array(arr3, size3);
//
//    // 测试案例4：逆序数组
//    int arr4[] = {6, 5, 4, 3, 2, 1};
//    int size4 = sizeof(arr4) / sizeof(arr4[0]);
//    merge_sort(arr4, 0, size4 - 1);
//    cout << "Test Case 4 (Reversed array): ";
//    print_array(arr4, size4);
//
//    // 测试案例5：包含重复元素
//    int arr5[] = {4, 1, 3, 2, 2, 4, 1};
//    int size5 = sizeof(arr5) / sizeof(arr5[0]);
//    merge_sort(arr5, 0, size5 - 1);
//    cout << "Test Case 5 (Array with duplicates): ";
//    print_array(arr5, size5);
//
//    // 测试案例6：随机无序数组
//    int arr6[] = {10, 3, 15, 7, 8, 23, 74, 18};
//    int size6 = sizeof(arr6) / sizeof(arr6[0]);
//    merge_sort(arr6, 0, size6 - 1);
//    cout << "Test Case 6 (Random array): ";
//    print_array(arr6, size6);
//}
//
//int main() {
//    run_tests();  // 运行所有测试
//    return 0;
//}


//#include "iostream"
//using namespace std;
//void quick_sort(int arr[],int l,int r)
//{
//    if(l>=r)return;
//    int x=arr[l],i=l-1,j=r+1;
//    while(i<j)
//    {
//        do i++;while(arr[i]<x);
//        do j--;while(arr[j]>x);
//        if(i<j)swap(arr[i],arr[j]);
//    }
//    quick_sort(arr,l,j);
//    quick_sort(arr,j+1,r);
//}
//int main()
//{
//    int arr[] = {34, 7, 23, 32, 5, 62, 32, 4};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    quick_sort(arr, 0, n - 1);  // 调用快速排序
//
//    // 输出排序后的数组
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//void quick_sort(int arr[],int l,int r)
//{
//    if(l>=r)return;
//    int x=arr[l],i=l-1,j=r+1;
//    while(i<j)
//    {
//        do i++;while(arr[i]<x);
//        do j--;while(arr[j]>x);
//        if(i<j)swap(arr[i],arr[j]);
//    }
//    quick_sort(arr,l,j);
//    quick_sort(arr,j+1,r);
//}
//int main()
//{
//    int arr[] = {34, 7, 23, 32, 5, 62, 32, 4};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    quick_sort(arr, 0, n - 1);  // 调用快速排序
//
//    // 输出排序后的数组
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}

//#include <iostream>
//#include <cassert>  // 添加这一行，确保可以使用 assert
//using namespace std;
//void merge_sort(int arr[],int l,int r)
//{
//    if(l>=r)return;
//    int mid=(l+r)>>1;
//    merge_sort(arr,l,mid), merge_sort(arr,mid+1,r);
//    int k=0,i=l,j=mid+1;
//    int *temp = new int[r-l+1];
//    while(i<=mid&&j<=r)
//    {
//        if(arr[i]<arr[j])temp[k++]=arr[i++];
//        else temp[k++]=arr[j++];
//    }
//    while(i<=mid)temp[k++]=arr[i++];
//    while(j<=r)temp[k++]=arr[j++];
//    for(int i=l,j=0;i<=r;i++,j++)arr[i]=temp[j];
//    delete[] temp;
//}
//// 辅助函数：打印数组
//void print_array(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//}
//
//// 测试函数：用于断言数组是否有序
//void assert_sorted(int arr[], int n) {
//    for (int i = 1; i < n; i++) {
//        assert(arr[i - 1] <= arr[i]);  // 如果前一个元素大于当前元素，则断言失败
//    }
//}
//
//// 测试用例 1：空数组
//void test_empty_array() {
//    int arr[] = {};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, n - 1);
//    assert_sorted(arr, n);
//    cout << "Test 1: Empty array passed." << endl;
//}
//
//// 测试用例 2：只有一个元素的数组
//void test_single_element() {
//    int arr[] = {1};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, n - 1);
//    assert_sorted(arr, n);
//    cout << "Test 2: Single element array passed." << endl;
//}
//
//// 测试用例 3：已经排序的数组
//void test_sorted_array() {
//    int arr[] = {1, 2, 3, 4, 5, 6};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, n - 1);
//    assert_sorted(arr, n);
//    cout << "Test 3: Already sorted array passed." << endl;
//}
//
//// 测试用例 4：反向排序的数组
//void test_reverse_sorted_array() {
//    int arr[] = {6, 5, 4, 3, 2, 1};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, n - 1);
//    assert_sorted(arr, n);
//    cout << "Test 4: Reverse sorted array passed." << endl;
//}
//
//// 测试用例 5：包含重复元素的数组
//void test_array_with_duplicates() {
//    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, n - 1);
//    assert_sorted(arr, n);
//    cout << "Test 5: Array with duplicates passed." << endl;
//}
//
//// 测试用例 6：包含正数和负数的数组
//void test_mixed_positive_negative() {
//    int arr[] = {-3, 10, -1, 7, -2, 0, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, n - 1);
//    assert_sorted(arr, n);
//    cout << "Test 6: Mixed positive and negative numbers passed." << endl;
//}
//
//// 测试用例 7：大数组测试（性能测试）
//void test_large_array() {
//    const int n = 10000;
//    int arr[n];
//
//    // 填充大数组，使用逆序的值
//    for (int i = 0; i < n; i++) {
//        arr[i] = n - i;
//    }
//
//    merge_sort(arr, 0, n - 1);
//    assert_sorted(arr, n);
//    cout << "Test 7: Large array passed." << endl;
//}
//
//int main() {
//    // 运行所有测试用例
//    test_empty_array();
//    test_single_element();
//    test_sorted_array();
//    test_reverse_sorted_array();
//    test_array_with_duplicates();
//    test_mixed_positive_negative();
//    test_large_array();
//
//    cout << "All tests passed!" << endl;
//
//    return 0;
//}
#include <cassert>
#include "iostream"
using namespace std;

//void quick_sort(int arr[],int l,int r)
//{
//    if(l>=r)return;
//    int x=arr[l],i=l-1,j=r+1;
//    while(i<j)
//    {
//        do i++;while(arr[i]<x);
//        do j--;while(arr[j]>x);
//        if(i<j)swap(arr[i],arr[j]);
//    }
//    quick_sort(arr,l,j);
//    quick_sort(arr,j+1,r);
//}
//int main()
//{
//    int arr[] = {34, 7, 23, 32, 5, 62, 32, 4};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    quick_sort(arr, 0, n - 1);  // 调用快速排序
//
//    // 输出排序后的数组
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//
//    return 0;
//}

//void merge_sort(int arr[],int l,int r)
//{
//    if(l>=r)return;
//    int mid = (l+r)>>1;
//    int k=0,i=l,j=mid+1;
//    merge_sort(arr,l,mid), merge_sort(arr,mid+1,r);
//    int *temp = new int[r-l+1];
//    while(i<=mid&&j<=r)
//    {
//        if(arr[i]<arr[j])temp[k++]=arr[i++];
//        else temp[k++]=arr[j++];
//    }
//    while(i<=mid)temp[k++]=arr[i++];
//    while(j<=r)temp[k++]=arr[j++];
//    for(int i=l,j=0;i<=r;i++,j++)arr[i]=temp[k];
//    delete[] temp;
//}
//
//
//#include <iostream>
//#include <cassert>
//
//void merge_sort(int arr[], int l, int r);
//
//// 用于打印数组的函数
//void print_array(int arr[], int size)
//{
//    for (int i = 0; i < size; i++)
//        std::cout << arr[i] << " ";
//    std::cout << std::endl;
//}
//
//// 用于验证数组是否排序的函数
//bool is_sorted(int arr[], int size)
//{
//    for (int i = 1; i < size; i++)
//    {
//        if (arr[i - 1] > arr[i])
//            return false;
//    }
//    return true;
//}
//
//// 测试空数组
//void test_empty_array()
//{
//    int arr[] = {};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, size - 1);
//    assert(is_sorted(arr, size));
//    std::cout << "Test empty array passed!" << std::endl;
//}
//
//// 测试单个元素数组
//void test_single_element()
//{
//    int arr[] = {42};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, size - 1);
//    assert(is_sorted(arr, size));
//    std::cout << "Test single element array passed!" << std::endl;
//}
//
//// 测试已经排序的数组
//void test_sorted_array()
//{
//    int arr[] = {1, 2, 3, 4, 5};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, size - 1);
//    assert(is_sorted(arr, size));
//    std::cout << "Test already sorted array passed!" << std::endl;
//}
//
//// 测试逆序数组
//void test_reverse_sorted_array()
//{
//    int arr[] = {5, 4, 3, 2, 1};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, size - 1);
//    assert(is_sorted(arr, size));
//    std::cout << "Test reverse sorted array passed!" << std::endl;
//}
//
//// 测试包含重复元素的数组
//void test_duplicate_elements()
//{
//    int arr[] = {4, 2, 2, 1, 4, 3, 3};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, size - 1);
//    assert(is_sorted(arr, size));
//    std::cout << "Test array with duplicate elements passed!" << std::endl;
//}
//
//// 测试随机数组
//void test_random_array()
//{
//    int arr[] = {29, 10, 14, 37, 13};
//    int size = sizeof(arr) / sizeof(arr[0]);
//    merge_sort(arr, 0, size - 1);
//    assert(is_sorted(arr, size));
//    std::cout << "Test random array passed!" << std::endl;
//}
//
//// 测试大数组
//void test_large_array()
//{
//    const int size = 1000;
//    int arr[size];
//    for (int i = 0; i < size; i++)
//        arr[i] = rand() % 10000;
//
//    merge_sort(arr, 0, size - 1);
//    assert(is_sorted(arr, size));
//    std::cout << "Test large array passed!" << std::endl;
//}
//
//// 主测试函数
//int main()
//{
//    test_empty_array();
//    test_single_element();
//    test_sorted_array();
//    test_reverse_sorted_array();
//    test_duplicate_elements();
//    test_random_array();
//    test_large_array();
//    std::cout << "All test cases passed!" << std::endl;
//    return 0;
//}


//二分查找[整数]
//#include "iostream"
//using namespace std;
//int SL(int l,int r,int x)  //查找左边界
//{
//    while(l<r)
//    {
//        int mid=(l+r)>>1;
//        if(x<=mid)r=mid;
//        else l=mid+1;
//    }
//}
//
//int SR(int l,int r,int x)  //查找右边界
//{
//    while(l<r)
//    {
//        int mid=(l+r+1)>>1;
//        if(x>=mid)l=mid;
//        else r=mid-1;
//    }
//}
//
//float S(int l,int r,float x)//浮点数二分
//{
//    while(r-l>1e-5)
//    {
//        float mid=(l+r)/2;
//        if(check(x))r=mid;
//        else l=mid;
//    }
//}


//浮点数二分
//float S(int l,int r,int x)
//{
//    while(r-l>10e-5)
//    {
//        float mid = (l+r)/2;
//        if(mid>x)r = mid;
//        else l=mid;
//    }
////    或者直接for循环一百次
//}

//写一个找x的开方数
//#include "iostream"
//void find(float n)
//{
//    float r=n;
//    float l=0;
//    while(r-l>1e-6)
//    {
//        float mid = (r+l)/2;
//        if(mid*mid>n)r=mid;
//        else l=mid;
//    }
//    cout<<l<<endl;
//}
//
//int main(){
//    int n;
//    cin>>n;
//    find(n);
//    return 0;
//}

//整数的二分查找
//int SL(int l, int r)
//{
//    while (l < r)
//    {
//        int mid = l + r >> 1;
//        if (check(mid)) r = mid;
//        else l = mid + 1;
//    }
//    return l;
//}
//
//
//
//int SR(int l, int r)
//{
//    while (l < r)
//    {
//        int mid = l + r + 1 >> 1;
//        if (check(mid)) l = mid;
//        else r = mid - 1;
//    }
//    return l;
//}

#include "iostream"
using namespace std;

int SL(int l,int r,float x)
{
    while(l<r)
    {
        int mid=(l+r+1)>>1;
        if (x>=mid)l=mid;
        else r=mid-1;
    }
    return l;
}
int SR(int l,int r,float x)
{
    while(l<r)
    {
        int mid=(r+l)>>1;
        if(x<=mid)r=mid;
        else l=mid+1;
    }
    return l;
}


int main(){
    int *arr= new int[]{1,2,3,4,5,6,9,11};
    float x=10.5;
    int xx = SR(0,20,x);
    int xxx= SL(0,20,x);
    cout<<xx<<xxx<<endl;
    return 0;
};