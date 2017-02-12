/**

  两个变量a和b，不使用任何条件判断语句，找出两个数变量中最大的一个
*/

#include <iostream>

int find_max(int a, int b)
{
  int pair[2] = {a, b};
  return pair[a < b];
}

int main(void)
{
  int a, b;
  std::cin >> a;
  std::cin >> b;
  
  int res = find_max(a, b);
  std::cout << "result is " << res << std::endl;
  
  return 0;
}
