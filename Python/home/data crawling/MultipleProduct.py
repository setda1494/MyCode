from bs4 import BeautifulSoup
from selenium import webdriver
import requests

browser = webdriver.Chrome()
URL = "https://search.shopping.naver.com/search/all?query=%EB%B0%80%ED%82%A4%ED%8A%B8%20%EB%96%A1%EB%B3%B6%EC%9D%B4&pagingIndex=1"
URLTEST = "https://search.shopping.naver.com/search/all?query=%EC%83%9D%EC%88%98&prevQuery=todtn"

response = requests.get(URL)
html = response.content
soup = BeautifulSoup(html, "lxml")
element = soup.find("a", attrs={"class": "product_link__TrAac linkAnchor"})
price = soup.find("span", attrs={"class": "price_num__S2p_v"})
elementhref = element.get("href")

elementList = (soup.find_all(
    "a", attrs={"class": "product_link__TrAac linkAnchor"}))

# print(elementList[0].get_text())
# print(elementList[1].get_text())
for elementList in elementList:
    print(elementList.get_text())
    print(price.get_text())
    # print(elementhref)
