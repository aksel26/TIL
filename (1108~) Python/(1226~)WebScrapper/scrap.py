### Navigating with Python
# 1. 페이지 접근
# 2. 페이지 갯수 확인
# 3. 페이지 하나씩 접근
# 4. 고급 설정에서 보여지는 페이지 갯수 설정 (50개)

# urllib 패키지

import requests

# r = requests.get("https://kr.indeed.com/jobs?q=python&limit=50")

r = requests.get("www.naver.com")
print(r)