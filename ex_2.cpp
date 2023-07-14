#include<iostream>

using namespace std;
int ucln(int a, int b){
   while (a != b)
  {
    if (a > b)
        a = a-b;
    else
        b = b-a;
    if (b < 0 || a< 0)
    {
        return 0;
        break;
    }
    
  }
  return a;
}
int bcnn(int a, int b){
  for (int i = 1; i <= a*b; i++)
  {
    int check_1 = i%a;
    int check_2 = i%b;
    if(check_1 ==0 && check_2 == 0){
    return i;
    break;
    }
  }
  return 0;

}

int main(){
  int a;
  int b;
  cout << "nhap ";
  cin >> a>> b;
  int k = ucln(a,b);
  int j = bcnn(a,b);
if (k==0)
  cout << "ucln false"<< endl;
else 
  cout << "ucln"<< k << endl;

cout << "bcnn " << j << endl;


    return 0;

}