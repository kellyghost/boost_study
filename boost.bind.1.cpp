#include <iostream>
#include <vector>
#include <algorithm>

void print(int i)
{
  std::cout << i << '\n';
}

int main()
{
  std::vector<int> V;
  V.push_back(1);
  V.push_back(2);
  V.push_back(3);

  std::for_each(V.begin(),V.end(),print);

}
