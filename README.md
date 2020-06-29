# 8051_Proteus_delay_by_timer
delay_using_timer

if 8051 connected with 12MHZ crystal.
1 machine cycle = 12Mhz/12;
1 machine cycle =1Mhz;

1000,000 clocks generate 1s delay.
so,x clock generate 1ms delay.

x=1000.
for 1ms delay need 1000 clocks count.

timer is 16-bit then timer counter will be count from 0 to 65535.

for 1 ms
counter will be 65535-1000=64535 which equals to 0xFC17
