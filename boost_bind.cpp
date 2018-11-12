#include <iostream>
#include <vector>
#include <algorithm>
#include <boost/bind.hpp>

bool compare(int i, int j)
{
  return i > j;

}

void print(int i)
{
   std::cout << i << std::endl;
}

int main()
{
  std::vector<int> v;
  v.push_back(1);
  v.push_back(3);
  v.push_back(2);


  std::cout << "before" << std::endl;
  std::sort(v.begin(),v.end(),boost::bind(compare,_1,_2));

  std::cout << "after:" << std::endl;
  std::for_each(v.begin(),v.end(),print);

}
