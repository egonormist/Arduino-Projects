from machine import Pin ,UART
from utime import sleep

uart=UART(0,baudrate=9600,tx=Pin(0),rx=Pin(1))

while True:
    if uart.any():
        data=uart.readline()
        print(data.decode())
        sleep(1)
    
    else:
        print("this is not working")
        sleep(1)