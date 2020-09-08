# -*- coding: utf-8 -*-

### Navigating with Python


import requests
from bs4 import BeautifulSoup
r = requests.get("https://indeed.com/jobs?q=python&limit=50")

# html가져오기

# print(r.text)


# 페이지 수 가져오기
# --> beautiful Soup 라이브러리 이용

r_soup = BeautifulSoup(r.text,"html.parser")

pagination = r_soup.find("div",{"class":"pagination"})

links = pagination.find_all('a')
pages=[]
for link in links[:-1]: # 맨 끝 Next를 제외.
    pages.append(int(link.string))   # 스트링에서 int형으로 바꿔주기

# print(pages)
# [2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]

# print(pages[-1])
# 20


max_page=pages[-1]


####### requesting each page #######
# 수동으로 여러번 request 하기
# range
#     : 배열로 활용 가능

# print(range(max_page))
for n in range(max_page):
    print(f"start={n*50}")


