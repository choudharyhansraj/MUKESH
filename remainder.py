from plyer import notification
import time
from playsound import playsound

def display_notification():
    notification.notify(
        title='Drink Water',
        message='Mukesh, drink water please',
        timeout=6
    )
    playsound("C:\\Users\\HP\Music\\y2mate.com - 10 second short music.mp3")

while True:
    display_notification()
    time.sleep(15)