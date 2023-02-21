
double expBySquaring(double x, int n){
  if (n == 0) return 1;
  if (n == 1) return x;
  double base;
  int exp;
  double mult;
  if (n%2 == 0) {
    base = x;
    exp=n/2;
    mult=1;
  }
  else {
    base=x*x;
    exp=(n-1)/2;
    mult=x;
  }// recursive 
  double res = expBySquaring(base,exp); //line call  -- split this up... 
  //the function call should break up into 3 diff nodes at least 
  return res*mult;//call task 
}