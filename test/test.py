import requests
from bs4 import BeautifulSoup
from openpyxl import Workbook

query = input("검색어를 입력하세요: ")
count = int(input("가져올 상품 수를 입력하세요: "))

url = "https://search.shopping.naver.com/search/all"

params = {
    "frm": "NVSHATC",
    "origQuery": query,
    "pagingIndex": 1,
    "pagingSize": count,
    "productSet": "total",
    "query": query,
    "sort": "rel",
    "viewType": "list"
}

res = requests.get(url, params=params)

soup = BeautifulSoup(res.text, 'html.parser')

items = soup.select('.basicList_title__3P9Q7 > a')
prices = soup.select('.price_num__2WUXn')
links = soup.select('.basicList_title__3P9Q7 > a')

results = []

if items:
    for i in range(count):
        result = {
            'name': items[i].text.strip(),
            'price': prices[i].text.strip().replace(",", ""),
            'link': links[i].get('href')
        }
        results.append(result)

    wb = Workbook()
    ws = wb.active
    ws.append(['상품명', '가격', '링크'])

    for item in results:
        ws.append([item['name'], item['price'], item['link']])

    wb.save(query + ".xlsx")
    print("작업이 완료되었습니다.")
else:
    print("검색 결과가 없습니다.")