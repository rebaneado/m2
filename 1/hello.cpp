#include <stdio.h>
#include <unistd.h>

int main () {
  // //printf("Hostname comand: 8986fc7dd4ec");
  // 15
  // printf(gethostname);
  // //char a = std::stof(gethostname);
  // return 0;





  char hostbuffer[256];
  int hostname;

  // To retrieve hostname
  hostname = gethostname(hostbuffer, sizeof(hostbuffer));
  
  printf("Hostname: %s\n", hostbuffer);
  return 0;

  
}
