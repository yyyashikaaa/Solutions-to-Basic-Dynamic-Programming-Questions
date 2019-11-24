#include <iostream>
#include <vector>
using namespace std;

std::vector<int> Array;
int Max_sum(int I, int Sum, int Prev, int N, bool Is_Decrease)
{
  if(I==N) return Sum;

  int A=0,B=0,C=0;
  if(Prev<Array[I] && !Is_Decrease) A=std::max(A, Max_sum(I+1, Sum+Array[I], Array[I], N, false));
  if(Prev>Array[I]) B=std::max(B, Max_sum(I+1, Sum+Array[I], Array[I], N, true));
  C= std::max(C, Max_sum(I+1, Sum, Prev, N, Is_Decrease));

  return std::max(A,std::max(B,C));
}


int main()
{
  int N, T, K, Temp;
  cin>>T;

  while(T--)
  {
    cin>>N; Array.clear();

    for(int I=0; I<N; I++) {cin>>Temp; Array.push_back(Temp);}

    cout<<Max_sum(0,0,0,N,false)<<endl;

  }
}
