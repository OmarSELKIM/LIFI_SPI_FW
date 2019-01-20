#include "mbed.h"

//------------------------------------
// Hyperterminal configuration
// 9600 bauds, 8-bit data, no parity
//------------------------------------

//Voila mon nouveau commentaire
// Et voila le miens (Riyad) 
// ABCD

int i = 1;

Serial pc(SERIAL_TX, SERIAL_RX);
DigitalOut myled(LED1);


void setup(){
	pc.printf("Hello World !\n");
}

void loop(){
		wait(1);
		pc.printf("This program runs since %d seconds.\n", i++);
		myled = !myled;
}

int main()
{
		setup();
	
    while(1){
			loop();
    }
}
