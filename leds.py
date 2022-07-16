#usr/bin/python3
from pylance import led
from signal import pause
from time import sleep

led1 = LED(26)

try:
    led1.blink()
    sleep(1)

    pause()

except KeyboardInterrupt:
    pass
