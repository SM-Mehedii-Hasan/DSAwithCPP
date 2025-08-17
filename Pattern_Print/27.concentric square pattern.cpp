#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int size = 2 * n - 1;
  // int center=n-1;
  //  _____________________________________________________________________________________________________________________________
  // 1.Layer-by-Layer Filling Method Or Concentric Square Filling Approach Sometimes also called the Boundary Fill Method
  int arr[size][size];
  for (int i = 0; i < n; i++)
  {
    int value = n - i;
    int start = i;
    int end = size - i - 1;
    for (int j = start; j <= end; j++)
    {
      arr[start][j] = value;
      arr[end][j] = value;
      arr[j][start] = value;
      arr[j][end] = value;
    }
  }

  for (int i = 0; i <= size - 1; i++)
  {
    for (int j = 0; j <= size - 1; j++)
      cout << arr[i][j] << " ";
    cout << endl;
  }

  //_________________________________________________________________________________________________________________
  // 2.Row-by-Row Constructive Method /Row-by-row construction (Brute Force loops)

  // for(int i=0;i<=size/2;i++){
  //   int m=n;
  //   for(int j=0;j<i;j++){
  //     cout<<m<<" ";
  //     m--;
  //   }
  //   for(int j=0;j<size-2*i;j++){
  //     cout<<n-i<<" ";
  //   }
  //   m=n-i+1;
  //   for(int j=0;j<i;j++){
  //     cout<<m<<" ";
  //     m++;
  //   }
  //   cout<<endl;
  // }

  // for(int i=size/2-1;i>=0;i--){
  //    int m=n;
  //   for(int j=0;j<i;j++){
  //     cout<<m<<" ";
  //     m--;
  //   }
  //   for(int j=0;j<size-2*i;j++){
  //     cout<<n-i<<" ";
  //   }
  //   m=n-i+1;
  //   for(int j=0;j<i;j++){
  //     cout<<m<<" ";
  //     m++;
  //   }
  //   cout<<endl;

  // }

  //_________________________________________________________________________________________________________________________
  // 3.Maximum Distance from Center Method/ Maximum Distance from Center (Chebyshev Distance)

  // for(int i=0;i<=size-1;i++){
  //   for(int j=0;j<=size-1;j++){
  //     int v=abs(i-center);
  //     int h=abs(j-center);
  //     int distance=max(v,h);
  //     cout<<distance+1<<" ";
  //   }cout<<endl;
  // }

  //_____________________________________________________________________________________________________________________________
  // 4.Minimum Distance from Edges Method /Minimum Distance from Edge (Layer Index)
  //   for(int i=0;i<=size-1;i++){
  //     for(int j=0;j<=size-1;j++){
  //       int top=i;
  //       int left=j;
  //       int bottom=size-1-i;
  //       int right=size-1-j;
  //       int layer=min(min(top,right),min(left,bottom));
  //       cout<<n-layer<<" ";
  //   }cout<<endl;
  // }
}

// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5
