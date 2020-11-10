import requests
from bs4 import BeautifulSoup
from selenium import webdriver
from time import sleep

url = "https://womad.life/298227?c=%EB%B3%B4%EB%A0%A5&page=1"

target_no = 100000

# setup Driver|Chrome : 크롬드라이버를 사용하는 driver 생성
driver = webdriver.Chrome('./chromedriver')
driver.implicitly_wait(3) # 암묵적으로 웹 자원을 (최대) 3초 기다리기
driver.get(url)
sleep(10)

f = open('data2.txt', 'w', encoding='utf-8-sig')
# .fa-chevron-right

while True:
    for j in range(4, 29):
        try:
            print(target_no)
            driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
            driver.find_element_by_css_selector(".basic > tbody:nth-child(2) > tr:nth-child(%d) > td:nth-child(2) > a:nth-child(1)" % j).click()
            sleep(1)
            html = driver.page_source

            soup = BeautifulSoup(html, 'lxml')
            wrapper = soup.find_all('p', class_='content comment-content')
            wrapper = list(map(lambda x: x.text, wrapper))

            for i in wrapper:
                if i == ' ':
                    pass
                f.write(i + '\n')
                target_no -= 1
                print(i)

        except Exception as e:
            print(e)

        if target_no < 0:
            exit()

    driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")
    sleep(1)
    print(".fa-chevron-right")
    driver.find_element_by_css_selector(".fa-chevron-right").click()
    sleep(5)

f.close()
# .board-body > li:nth-child(8) > span:nth-child(2) > a:nth-child(1)
# .board-body > li:nth-child(37) > span:nth-child(2) > a:nth-child(1)

# div.paginate:nth-child(2) > a:nth-child(3)
# div.paginate:nth-child(2) > a:nth-child(11)
# a.next:nth-child(12)