import serial
import pyautogui

ser = serial.Serial('COM4', 9600)

while True:
    if ser.readline().strip() == b"Motion detected!":
        pyautogui.hotkey('alt', 'tab')
