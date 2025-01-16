#include <expected>
#include <iostream>

using namespace std;

void sub_main(){
  std::expected<int, string> a;
  a = 1;
  a = unexpected("dupa");
  cout<<a.value_or(10)<<endl;
  cout<<a.error()<<endl;
}