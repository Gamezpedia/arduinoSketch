#ifndef NunchukFarlocco_h
#define NunchukFarlocco_h

#include "WProgram.h"
#include "Wire.h"

class NunchukFarlocco{
  
  public:
    void nunchuck_init(); // send the initilization handshake
    int nunchuck_get_data();
    float x, y, z;
  private:
    char nunchuk_decode_byte (char x);
    void nunchuck_send_request();
    void nunchuk_elaborate_data();
    uint8_t nunchuck_buf[6];   // array to store nunchuck data,
    uint8_t ctrlr_type[6];
};
#endif