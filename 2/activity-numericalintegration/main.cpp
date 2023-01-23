#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>



#ifdef __cplusplus
extern "C" {
#endif

float f1(float x, int intensity);
float f2(float x, int intensity);
float f3(float x, int intensity);
float f4(float x, int intensity);

#ifdef __cplusplus
}
#endif

  
int main (int argc, char* argv[]) {
  int functionID = std::stof(argv[1]);
  float a = std::stof(argv[2]);
  float b = std::stof(argv[3]);
  float n = std::stof(argv[4]);
  int intensity = std::stof(argv[5]);

  for (int i = 0; i < argc; ++i){
    std::cout << argv[i] << "\n";
  }


  if (functionID == 1)
  {
    float subtract = b-a;
    float deltax = subtract/ n;

    double halfAnswer =  f1(deltax,  intensity);
    double answer = halfAnswer * deltax;
    return answer;

  }
  else if (functionID == 2)
  {
    /* code */
  }
  else if (functionID == 3)
  {
    /* code */
  }
  else if (functionID == 5)
  {
    /* code */
  }
  else {
    std::cout<<"this is the else clause indicating that functionID was not 1-5";
  }

// tells me how many paramedtes i have to
  if (argc <= 6) {
    std::cout<<"usage: "<<argv[0]<<" <functionid> <a> <b> <n> <intensity>"<<std::endl;
    return -1;
  }
  
return 0;
}


