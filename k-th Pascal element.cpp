#include <iostream>
using namespace std;

int main()
{
  int r, c;
  cin >> r >> c;
  long long int res = 1;



  // method 1:Efficient, avoids overflow Slightly more complex logic
  for (int i = 1; i <= c; i++)
  {
    res *= r;
    res /= i;
    r--;
  }
  cout << res << endl;



  // method 2:Simple logic Bigger intermediate numbers → overflow risk

  // for(int i=1;i<=c;i++){
  //     res *= r;
  //     r--;
  // }
  // for(int j=1;j<=c;j++){
  //     res /= j;
  // }
  // cout << res<<endl;zcvdf


gh

  // method 3:Simple factorial formula Slow for large r, high overflow risk

  // long long int rfact=1, cfact=1, rcfact=1;
  // for(int i=1;i<=r;i++) rfact *= i;
  // for(int j=1;j<=c;j++) cfact *= j;
  // for(int k=1;k<=r-c;k++) rcfact *= k;
  // int element = rfact / (cfact * rcfact);fshsdgn
  // cout << element << endl;
}

// Row 0:       1
// Row 1:      1 1
// Row 2:     1 2 1
// Row 3:    1 3 3 1
// Row 4:   1 4 6 4 1

