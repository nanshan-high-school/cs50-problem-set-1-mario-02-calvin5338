#include <iostream>
using namespace std;
int main()
{
  //height 
  int h;
  //a, s
  int a , s;
  cout << "請輸入三角形的高(1~8):";
  cin >> h;
  //alert (if)
  if(h < 1 || h > 8)
  {
    cout << "✘ 高不在範圍內!!";
  }
  // 生成三角形 (else)
  else
  {
    for(a = 1 ; a <= h ; a++)
    {
      //space
      for(s = 0; s < h-a ; s++)
      {
        cout << " "; 
      }
      //左三角形 #
      for(int t = 0 ; t < a ; t++)
      {
        cout << "#";
      }
      //空格
      cout << " ";
      //右三角形 #
      for(int t = 0 ; t < a ; t++)
      {
        cout << "#";
      }
      //換行
      cout << "\n";
    }
  }
}
