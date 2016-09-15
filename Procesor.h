#include <stdint.h>

class Procesor{
private:
    int32_t r[16]={0};
    int32_t pc,lr,sp,psw;
public:
    Procesor(){
        pc=lr=sp=psw=0;
    }
};
