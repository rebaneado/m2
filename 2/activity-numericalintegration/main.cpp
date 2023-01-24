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
  double a = std::stof(argv[2]);
  double b = std::stof(argv[3]);
  double n = std::stof(argv[4]);
  int intensity = std::stof(argv[5]);

  // for (int i = 0; i < argc; ++i){
  //   std::cout << argv[i] << "\n";
  // }


  if (functionID == 1)
  {
    auto start = std::chrono::system_clock::now();
    double subtract = b-a;
    float deltax = subtract/ n;
    float  variableF;
    float variableX = 0;
    float answer = 0;
    for (int  i = 0; i < n; i++)
    {
      variableX = a + (i+ .5) * deltax;
      variableF = f1(variableX, intensity);
      answer = variableF + answer;
    }
    answer = answer * deltax;
    
    std::cout <<answer;
    auto end = std::chrono::system_clock::now();    
    auto elapsed = end - start;                 // difference is a "duration"
    std::cerr <<elapsed.count();  // clock ticks (seconds)
  

  }
  else if (functionID == 2)
   {
    auto start = std::chrono::system_clock::now();
    double subtract = b-a;
    float deltax = subtract/ n;
    float  variableF;
    float variableX = 0;
    float answer = 0;
    for (int  i = 0; i < n; i++)
    {
      variableX = a + (i+ .5) * deltax;
      variableF = f2(variableX, intensity);
      answer = variableF + answer;
    }
    answer = answer * deltax;
    
    std::cout <<answer;
    auto end = std::chrono::system_clock::now();    
    auto elapsed = end - start;                 // difference is a "duration"
    std::cerr <<elapsed.count();  // clock ticks (seconds)

  }
  else if (functionID == 3)
   {
    auto start = std::chrono::system_clock::now();
    double subtract = b-a;
    float deltax = subtract/ n;
    float  variableF;
    float variableX = 0;
    float answer = 0;
    for (int  i = 0; i < n; i++)
    {
      variableX = a + (i+ .5) * deltax;
      variableF = f3(variableX, intensity);
      answer = variableF + answer;
    }
    answer = answer * deltax;
    
    std::cout <<answer;
    auto end = std::chrono::system_clock::now();    
    auto elapsed = end - start;                 // difference is a "duration"
    std::cerr <<elapsed.count();  // clock ticks (seconds)
    
  }
  else if (functionID == 4)
   {
    auto start = std::chrono::system_clock::now();
    double subtract = b-a;
    float deltax = subtract/ n;
    float  variableF;
    float variableX = 0;
    float answer = 0;
    for (int  i = 0; i < n; i++)
    {
      variableX = a + (i+ .5) * deltax;
      variableF = f4(variableX, intensity);
      answer = variableF + answer;
    }
    answer = answer * deltax;
    
    std::cout <<answer;
    auto end = std::chrono::system_clock::now();    
    auto elapsed = end - start;                 // difference is a "duration"
    std::cerr <<elapsed.count();  // clock ticks (seconds)
   
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


