#include "types.h"
#include "user.h"
int main(){
    printf(1, "before getreadcount call \n");
    int ret = getreadcount(); 
    printf(1, "after getreadcount call ret = %d \n", ret);
    exit();
}