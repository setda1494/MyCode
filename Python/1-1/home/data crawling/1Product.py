from bs4 import BeautifulSoup
import requests
URL = "https://search.shopping.naver.com/search/all?query=%EB%B0%80%ED%82%A4%ED%8A%B8%20%EB%96%A1%EB%B3%B6%EC%9D%B4&pagingIndex=1"

response = requests.get(URL)
html = response.content
soup = BeautifulSoup(html, "lxml")
element = soup.find("a", attrs={"class": "product_link__TrAac linkAnchor"})
price = soup.find("span", attrs={"class": "price_num__S2p_v"})
elementhref = element.get("href")

priceInt = price.get_text()
priceInt = priceInt.replace(",","").replace("원","")

# print(soup.find("a", attrs={"class": "basicList_title__3P9Q7"}))

print(element.get("title")) #상품명 
print(element.get_text())   #상품명

print(price.get_text())     #상품 가격
print(priceInt)     #상품 가격 int 형

print(elementhref) #상품 링크 
