#include <iostream>
using namespace std;

int main() {
int num=1;
int num2;
cout <<"What do you want to count up to?: << ";
cin >>num2;

do {
  cout <<num << "\n";
  num++;
}
while (num < num2);
return 0;
}