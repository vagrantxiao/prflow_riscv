#include "../host/typedefs.h"
void bc2_gen_0(hls::stream< bit32 > & Output_1){
#pragma HLS INTERFACE axis register port=Output_1
#include "../host/bc2_par_0.h"
 loop_0: for(int i=0; i<8192; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bc2_0_0[i](31,  0));
    Output_1.write(bc2_0_0[i](63, 32));
  }
 loop_1: for(int i=0; i<4096; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bc2_0_1[i](31,  0));
    Output_1.write(bc2_0_1[i](63, 32));
  }
 loop_2: for(int i=0; i<2048; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bc2_0_2[i](31,  0));
    Output_1.write(bc2_0_2[i](63, 32));
  }
 loop_3: for(int i=0; i<512; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bc2_0_3[i](31,  0));
    Output_1.write(bc2_0_3[i](63, 32));
  }
 loop_4: for(int i=0; i<48; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bc2_0_4[i](31,  0));
    Output_1.write(bc2_0_4[i](63, 32));
  }
}