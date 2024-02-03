#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define DegToRad(x) ((x) * M_PI / 180)


void matrix(float roll, float pitch, float yaw){
  //ngubah ke radian dari derajat
  float rollRad = DegToRad(roll);
  float pitchRad = DegToRad(pitch);
  float yawRad = DegToRad(yaw);

  //sin dan cos
  float sinr =  sin(rollRad), cosr = cos(rollRad);
  float sinp =  sin(pitchRad), cosp = cos(pitchRad);
  float siny =  sin(yawRad), cosy = cos(yawRad);

  //rotasi
  float rotasi[3][3] = {
  {cosy * cosr, -siny * cosr + cosy * sinp * sinr, siny * sinr +cosy *sinp * cosr }, 
  {siny * cosp, cosy * cosr + siny * sinp * sinr, -cosy * sinr + siny * sinp * cosr},
  {-sinp, cosp * sinr, cosp *cosr}
  };

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
        float hasil = rotasi[i][j];
        
        cout << scientific << setprecition(8) << (hasil == 0 ? 0 : hasil)  << " " ;
    }
      cout << endl;
  }

}


int main() {
  float roll, pitch, yaw;
  
  cin >> roll >> pitch >> yaw;


  matrix(roll, pitch, yaw);
  return 0;

}
