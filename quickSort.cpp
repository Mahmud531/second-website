// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// #define faster ios::sync_with_stdio(0);cin.tie(0);
// int A[1000];

// int partition(int l,int h){
//     int pivot = A[l];
//     int i = l,j = h;
//     while(i<j){
//         while(A[i]<=pivot){
//             i++;
//         }
//         while(A[j]>pivot){
//             j--;
//         }
//         if(i<j){
//             swap(A[i],A[j]);
//         }
//     }
//     swap(A[l],A[j]);
//     return j;
// }
// void QuickSort(int l,int h){
//     if(l<h){
//         int j = partition(l,h);
//         //left side
//         QuickSort(l,j-1);
//         QuickSort(j+1,h);
//     }  
// }
// int main(){
//     faster;
//     int n;cin>>n;
//     for(int i = 0;i<n;i++){
//         cin>>A[i];
//     }

//     QuickSort(0,n-1);

//     for(int i = 0;i<n;i++){
//         cout<<A[i]<<" ";
//     }
//     cout<<endl;
 
// }	

