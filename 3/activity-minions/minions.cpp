#include <iostream>
#include <thread>
#include <vector>

void f (int number){
  std::cout <<"Hello! I am Minion: "<<number<<"\n";
}
int main (int argc, char** argv) {
  std::vector<std::thread> mythreads;
  int inputNumber = std::stof(argv[1]);

  if (argc < 2) {
    std::cerr<<"usage: "<<argv[0]<<" <nbminions>\n";
    return -1;
  }
  std::cout<<"This is the input number: "<<inputNumber<<"\n";
  for (int i = 0; i<inputNumber; i++){
    std::thread mythread(f,i);
    mythreads.push_back(std::move(mythread));
   
  }

  for (auto & t : mythreads)
  {
    if (t.joinable())
    {
      t.join();
    }
    else
      std::cout<<"t is not joinable/n";
  }
  std::cout<<"Hello Minions! I am the Overload!";
  return 0;
}

  // for (int i = 0; i < argc; ++i){
  //   std::cout << argv[i] << "\n";
  // }