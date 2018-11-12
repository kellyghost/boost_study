#include <boost/signal.hpp>
#include <iostream>

// -l boost_signals 编译选项

void func()
{
  std::cout << "Hello, world!" << std::endl;
}

int main()
{
  boost::signal<void ()> s;
  s.connect(func);
  s();
}
