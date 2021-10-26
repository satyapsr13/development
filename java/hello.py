# from selenium import webdriver
from seleniumwire import webdriver
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.chrome.options import Options
#from selenium.webdriver.common.by import By
from datetime import datetime
import pytz
import time
#from telegram.ext import Updater, CommandHandler
import requests
import re
import os

#NOTE: This code is only for education purposes. Do not misuse it. Use it wisely. Handle with care.

#api_id = os.environ['api_id']
#api_hash = os.environ['api_hash']
#phone = '+919907223455'

import telegram

bot = telegram.Bot(token='1817073335:AAGGxWjf4cvCfTmcUiNV0LZkTovcCtXEbNU')


# driver = webdriver.Chrome(PATH)
usernames = os.environ["usernames"].split(',')
passwords = os.environ["passwords"].split(',')
telechatid = os.environ["telechatid"].split(',')
teleuser = os.environ["teleuser"].split(',')

req = requests.get(
    'https://api.telegram.org/bot1817073335:AAGGxWjf4cvCfTmcUiNV0LZkTovcCtXEbNU/getUpdates')

data = req.json()
res = data['result']

#for ress in res:
#  if ress['message']['from']['username']==teleuser[0]:
#    print(ress['message']['text'])

#print(bot.get_chat(chat_id=teleuser[0]))
entryurl = ['https://it.rgpvonline.org/mod/attendance/view.php?mode=1&id=11610', 'https://cse.rgpvonline.org/mod/attendance/view.php?id=12712&mode=1',
            'https://it.rgpvonline.org/mod/attendance/view.php?mode=1&id=11610',
            'https://it.rgpvonline.org/mod/attendance/view.php?id=11511&mode=1']
firstentryurl = ['https://it.rgpvonline.org/login/index.php', 'https://cse.rgpvonline.org/login/index.php', 'https://it.rgpvonline.org/login/index.php',
                 'https://it.rgpvonline.org/login/index.php']

IST = pytz.timezone('Asia/Kolkata')
dt = datetime.now(IST).hour

#if not dt>=11 and dt<22:
#  pass
#else:
#  client = TelegramClient('sessiown', api_id, api_hash)

# connecting and building the session
# client.connect()
# if not client.is_user_authorized():
#   client.send_code_request(phone)
#   # signing in the client
#   client.sign_in(phone, input('Enter the code: '))

while dt >= 11 and dt < 18:
  for users in range(len(usernames)):
    #client.send_message(teleuser[users],'Starting the server')
    try:
      bot.sendMessage(chat_id=telechatid[users], text='Starting the server')
    except:
      pass
    chrome_options = Options()
    chrome_options.add_argument('--no-sandbox')
    chrome_options.add_argument('--disable-dev-shm-usage')
    chrome_options.add_argument("--disable-javascript")
    driver = webdriver.Chrome(chrome_options=chrome_options)

    def interceptor(request):
        # print(request.url)
        if "disable" in request.url:
            print("Aborted", request.path)
            request.abort()

    driver.request_interceptor = interceptor

    driver.get(firstentryurl[users])
    print(driver.title)
    #
    # for request in driver.requests:
    #     print(request)

    username = driver.find_element_by_id("username")
    username.clear()
    username.send_keys(usernames[users])
    username.send_keys(Keys.TAB)

    password = driver.find_element_by_id("password")
    password.clear()
    password.send_keys(passwords[users])
    password.send_keys(Keys.RETURN)
    #
    # driver.implicitly_wait(5)

    #driver.get("https://it.rgpvonline.org/calendar/view.php?view=month")
    driver.get(entryurl[users])
    # item = driver.find_element_by_class_name('day text-sm-center text-md-left today clickable')
    # print(item)

    #print(driver.find_elements_by_class_name('colatt'))
    attendence_list = driver.find_elements_by_class_name('colatt')

    attendence_list = attendence_list[1:-1]
    loopnum = len(attendence_list)

    print(attendence_list)
    print(loopnum)
    fixednum = loopnum

    if users == 3:
      for i in range(fixednum):
        lst2 = driver.find_elements_by_class_name('colatt')
        print(len(lst2))
        print(loopnum)
        tagname = lst2[loopnum].find_element_by_tag_name(
            'a').get_attribute('href')
        print(tagname)
        driver.get(str(tagname))
        try:
            atturl = driver.find_element_by_link_text(
                'Submit attendance').get_attribute('href')
            driver.get(str(atturl))
            if driver.find_element_by_id('id_studentpassword').isDisplayed():
                try:
                  #client.send_message(teleuser[users], 'Checking attendence password..')
                  #msg = client.get_messages(teleuser[users])

                  #print("Attendence password: " + str(msg[-1].text))
                  #pw = msg[-1].text
                  bot.sendMessage(
                      chat_id=telechatid[users], text='One active attendence found with password, considering your last message as password')
                  pw = ''
                  for ress in res:
                    if ress['message']['from']['username'] == teleuser[users]:
                      print(ress['message']['text'])
                      pw = ress['message']['text']
                      pw = str(pw)
                  print("Interpreting "+pw+" as password")
                  bot.sendMessage(
                      chat_id=telechatid[users], text="Interpreting "+pw+" as password")
                  driver.find_element_by_id('id_studentpassword').send_keys(pw)
                except Exception as e:
                  print(e)
            present_field = driver.find_element_by_xpath(
                "//input[@type='radio']")
            present_field.click()
            submitbtn = driver.find_element_by_id('id_submitbutton')
            submitbtn.click()
            print("Attendence marked")
            #client.send_message(teleuser[users],'One of your attendence has been marked')
            bot.sendMessage(
                chat_id=telechatid[users], text="One of your attendence has been marked")
        except:
            pass
        driver.get(entryurl[users])
        loopnum -= 1
    else:
      for i in range(9):
        lst2 = driver.find_elements_by_class_name('colatt')
        print(len(lst2))
        print(loopnum)
        tagname = lst2[loopnum].find_element_by_tag_name(
            'a').get_attribute('href')
        print(tagname)
        driver.get(str(tagname))
        try:
            atturl = driver.find_element_by_link_text(
                'Submit attendance').get_attribute('href')
            driver.get(str(atturl))
            if driver.find_element_by_id('id_studentpassword').isDisplayed():
                try:
                  #client.send_message(teleuser[users], 'Checking attendence password..')
                  #msg = client.get_messages(teleuser[users])

                  #print("Attendence password: " + str(msg[-1].text))
                  #pw = msg[-1].text
                  bot.sendMessage(
                      chat_id=telechatid[users], text='One active attendence found with password, considering your last message as password')
                  pw = ''
                  for ress in res:
                    if ress['message']['from']['username'] == teleuser[users]:
                      print(ress['message']['text'])
                      pw = ress['message']['text']
                      pw = str(pw)
                  print("Interpreting "+pw+" as password")
                  bot.sendMessage(
                      chat_id=telechatid[users], text="Interpreting "+pw+" as password")
                  driver.find_element_by_id('id_studentpassword').send_keys(pw)
                except Exception as e:
                  print(e)
            present_field = driver.find_element_by_xpath(
                "//input[@type='radio']")
            present_field.click()
            submitbtn = driver.find_element_by_id('id_submitbutton')
            submitbtn.click()
            print("Attendence marked")
            #client.send_message(teleuser[users],'One of your attendence has been marked')
            bot.sendMessage(
                chat_id=telechatid[users], text="One of your attendence has been marked")
        except:
            pass
        driver.get(entryurl[users])
        loopnum -= 1
    print('Attendence for '+str(users)+' completed.')
    driver.quit()
  time.sleep(300)
