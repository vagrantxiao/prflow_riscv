#include "../host/typedefs.h"
void bd_gen_0(hls::stream< bit32 > & Output_1){
#pragma HLS INTERFACE axis register port=Output_1
#include "../host/bd_par_0.h"
 loop_0: for(int i=0; i<16384; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bd_0_0[i](31,  0));
    Output_1.write(bd_0_0[i](63, 32));
  }
}
