
#include <iostream>
using namespace std;

class CubeVol{
    int side,vol=1;
    public:
     CubeVol(int side){
        vol=side*side*side;
        cout<<vol;
    };
};
int main() {
   int s;
   cin>>s;
   CubeVol obj(s);
   return 0;
}
