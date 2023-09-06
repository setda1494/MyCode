import openpyxl
import requests
from bs4 import BeautifulSoup

# 검색어 설정
search_word = '노트북'

# 검색 결과 페이지 수
pages = 10

# 엑셀 파일 새로 생성 및 시트 추가
wb = openpyxl.Workbook()
ws = wb.active
ws.append(['품명', '가격', '링크'])

for page in range(1, pages + 1):
    # 요청 URL 생성
    url = f'https://search.shopping.naver.com/search/all?pagingIndex={page}&viewType=list&sort=price_asc&frm=NVSHCHK&query={search_word}'

    # HTML 페이지 요청
    response = requests.get(url)
    soup = BeautifulSoup(response.text, 'html.parser')

    # 원하는 정보 추출
    items = soup.select('._itemSection')

    for item in items:
        # 정보 추출
        name = item.select_one('a.tit').text.strip()
        price = item.select_one('span.num').text.strip()
        link = item.select_one('a.tit')['href']

        # 추출한 데이터 엑셀에 추가
        ws.append([name, price, link])

# 엑셀 파일 저장
wb.save('naver_shopping.xlsx')