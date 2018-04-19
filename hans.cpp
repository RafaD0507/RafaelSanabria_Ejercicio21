#include <iostream>

using namespace std;

double u_t_inicial(double x);

int main(){
  double c = 1.0;
  double x_max = 2.0;
  double T = 0.5;
  double x = 0;
  double dx = 0.001;
  double dt = 0.001;
  int N_x = x_max/dx+1;
  int N_t = T/dt+1;
  double *u = new double[N_x];
  
  for(int j = 0; j<N_t; j++){
    x = x_max;
    for(int i = N_x-1; i>=0; i--){
      if(j == 0){
	u[i] = u_t_inicial(x);
      }else{
	if(i != 0 || i != N_x-1){
	  u[i] = u[i]-c*(dt/dx)*(u[i]-u[i-1]);
	}
      }
      x = x - dx;
    }
  }
  x = 0;
  for(int i=0; i<N_x; i++){
    cout<<x<<" "<<u[i]<<endl;
    x = x+ dx;
  }
  return 0;
}


double u_t_inicial(double x){
  if(x>0.75 && x<1.25){
    return 1;
  }else{
    return 0;
  }
}
