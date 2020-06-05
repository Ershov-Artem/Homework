#include <iostream>

using namespace std;
int main()
{
   int a, b, c, d;
   char dot1, dot2, dot3;
   cin >> a >> dot1 >> b >> dot2 >> c >> dot3 >> d;
   (a>=0 && a<=255 && b>=0 && b<=255 && c>=0 && c<=255 && d>=0 && d<=255 &&
      dot1 == '.' && dot2 == '.' && dot3 == '.') ?
   cout << "YES" : cout << "NO";
   return 0;
}
