#include <iostream>
#include <cmath>
#include <cstdlib>
#include <chrono>
using namespace std::chrono;
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
  double a = std::stof(argv[2]);
  double b = std::stof(argv[3]);
  double n = std::stof(argv[4]);
  int intensity = std::stof(argv[5]);

  // for (int i = 0; i < argc; ++i){
  //   std::cout << argv[i] << "\n";
  // }


  if (functionID == 1)
  {
    double subtract = b-a;
    
    float deltax = subtract/ n;

    double variableF =  f1(deltax,  intensity);
    double answer = variableF * deltax;
    std::cout << std::chrono::duration<double>(answer).count();

  }
  else if (functionID == 2)
  {
    double subtract = b-a;
    
    float deltax = subtract/ n;

    double variableF =  f2(deltax,  intensity);
    double answer = variableF * deltax;
    std::cout << std::chrono::duration<double>(answer).count();
  }
  else if (functionID == 3)
  {
    double subtract = b-a;
    
    float deltax = subtract/ n;

    double variableF =  f3(deltax,  intensity);
    double answer = variableF * deltax;
    std::cout << std::chrono::duration<double>(answer).count();
  }
  else if (functionID == 5)ß
  {
    double subtract = b-a;
    
    float deltax = subtract/ n;

    double variableF =  f4(deltax,  intensity);
    double answer = variableF * deltax;
    std::cout << std::chrono::duration<double>(answer).count();
  }
  else {
    std::cout<<"this is the else clause indicating that functionID was not 1-5";
  }

// tells me how many paramedtes i have to
  if (argc < 6) {
    std::cout<<"usage: "<<argv[0]<<" <functionid> <a> <b> <n> <intensity>"<<std::endl;
    return -1;
  }
  
return 0;
}


