### Navigating with Python


import requests

r = requests.get("https://kr.indeed.com/jobs?q=python&limit=50")

# html가져오기

print(r.text)