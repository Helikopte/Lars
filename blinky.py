from machine  import Pin
import time

led = Pin(25, Pin.OUT)

try:
    while True:
        led.value(1)    #Set led turn on
        time.sleep(0.5) #Sleep o.5s
        led.value(0)    #Set led turn off
        time.sleep(0.5) #Sleep 0.5s
        
except:
    pass