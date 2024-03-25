#include "../host/typedefs.h"
void bd_gen_10(hls::stream< bit32 > & Input_1, hls::stream< bit32 > & Output_1){
#pragma HLS INTERFACE axis register port=Input_1
#pragma HLS INTERFACE axis register port=Output_1
#include "../host/bd_par_10.h"
 loop_redir: for(int i=0; i<163840; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(Input_1.read());
    Output_1.write(Input_1.read());
  }
 loop_0: for(int i=0; i<8192; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bd_10_0[i](31,  0));
    Output_1.write(bd_10_0[i](63, 32));
  }
 loop_1: for(int i=0; i<2048; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bd_10_1[i](31,  0));
    Output_1.write(bd_10_1[i](63, 32));
  }
 loop_2: for(int i=0; i<1024; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bd_10_2[i](31,  0));
    Output_1.write(bd_10_2[i](63, 32));
  }
 loop_3: for(int i=0; i<498; i++){
#pragma HLS PIPELINE II=2
    Output_1.write(bd_10_3[i](31,  0));
    Output_1.write(bd_10_3[i](63, 32));
  }
}
