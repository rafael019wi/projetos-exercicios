import time
import random
import pyautogui
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys

# abre navegador
driver = webdriver.Chrome()
driver.get("https://www.google.com/fbx?fbx=snake_arcade")

time.sleep(2)

# clica na tela
pyautogui.click(500, 500)

# inicia jogo
pyautogui.press("space")

direcoes = ["up", "down", "left", "right"]

while True:
    tecla = random.choice(direcoes)
    pyautogui.press(tecla)
    time.sleep(0.15)