import selenium
from selenium import webdriver
from selenium.webdriver.common.keys import Keys

browser = webdriver.Chrome()

URL = "https://search.shopping.naver.com/search/all?query=%EB%B0%80%ED%82%A4%ED%8A%B8%20%EB%96%A1%EB%B3%B6%EC%9D%B4&pagingIndex=1"

html = browser.page_source
print(html)
