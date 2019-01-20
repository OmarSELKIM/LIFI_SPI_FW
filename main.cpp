#include "mbed.h"

//------------------------------------
// Hyperterminal configuration
// 9600 bauds, 8-bit data, no parity
//------------------------------------

//Voila mon nouveau commentaire
// Et voila le miens (Riyad) 
// A

Serial pc(SERIAL_TX, SERIAL_RX);

DigitalOut myled(LED1);


void setup(){
}

void loop(){
}

int main()
{
    int i = 1;
    pc.printf("Hello World !\n");
    while(1) {
        wait(1);
        pc.printf("This program runs since %d seconds.\n", i++);
        myled = !myled;
    }
}
