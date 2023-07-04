# 모듈 임폴트
import requests
from bs4 import BeautifulSoup
from openpyxl import Workbook

# 사용자 입력 받기
query = input("검색어를 입력하세요: ")
count = int(input("가져올 상품 수를 입력하세요: "))

# 사이트 주소 생성
url = "https://search.shopping.naver.com/search/all"

params = {
    "frm": "NVSHATC",
    "origQuery": query,
    "pagingIndex": 1,
    "pagingSize": 40,
    "productSet": "total",
    "query": query,
    "sort": "rel",
    "viewType": "list"
}

res = requests.get(url, params=params)

# 사이트 피싱
soup = BeautifulSoup(res.text, 'html.parser')

items = soup.select('.basicList_title__3P9Q7 > a')
prices = soup.select('.price_num__2WUXn')
links = soup.select('.basicList_title_link__1MaTN')

# 결과 처리 및 저장
results = []

for i in range(count):
    if len(items) < i + 1 or len(prices) < i + 1 or len(links) < i + 1:
        break

    result = {
        'name': items[i].text.strip(),
        'price': prices[i].text.strip().replace(",", ""),
        'link': links[i].get('href')
    }
    results.append(result)

if len(results) == 0:
    print("검색 결과가 없습니다.")
else:
    wb = Workbook()
    ws = wb.active
    ws.append(['상품명', '가격', '링크'])

    for item in results:
        ws.append([item['name'], item['price'], item['link']])

    wb.save(query + ".xlsx")
    print("작업이 완료되었습니다.")