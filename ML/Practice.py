import requests
from bs4 import BeautifulSoup
from selenium import webdriver
from time import sleep

url = "https://www.ilbe.com/view/11288691640"

target_no = 5000

# setup Driver|Chrome : 크롬드라이버를 사용하는 driver 생성
driver = webdriver.Chrome('./chromedriver')
driver.implicitly_wait(3) # 암묵적으로 웹 자원을 (최대) 3초 기다리기
driver.get(url)

while target_no > 0:
    for idx in range(3, 12):

        driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
        print("div.paginate:nth-child(2) > a:nth-child(%d)" % idx)
        driver.find_element_by_css_selector("div.paginate:nth-child(2) > a:nth-child(%d)" % idx).click()

    driver.find_element_by_css_selector("a.next:nth-child(12)").click()


# .board-body > li:nth-child(8) > span:nth-child(2) > a:nth-child(1)
# .board-body > li:nth-child(37) > span:nth-child(2) > a:nth-child(1)

# div.paginate:nth-child(2) > a:nth-child(3)
# div.paginate:nth-child(2) > a:nth-child(11)
# a.next:nth-child(12)