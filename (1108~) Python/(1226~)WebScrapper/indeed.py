import requests
from bs4 import BeautifulSoup
LIMIT = 50
URL= "https://indeed.com/jobs?q=python&limit={LIMIT}"

def extract_indeed_pages():
    result = requests.get(URL)

    soup = BeautifulSoup(result.text,"html.parser")

    pagination = soup.find("div",{"class":"pagination"})

    links = pagination.find_all('a')
    pages=[]
    for link in links[:-1]: 
        pages.append(int(link.string))  

    max_page=pages[-1]

    return max_page



# def extract_indeed_jobs(last_page):
  
#     for page in range(last_page):

#         result=requests.get(f"{URL}&start={page*LIMIT}")
#         print(result.status_code)



#### Extracting title  & Extacting Companies ##########
# BeautifulSoup 를 이용!


def extract_indeed_jobs(last_page):
    jobs=[]
    for page in range(last_page):

        result=requests.get(f"{URL}&start={0*LIMIT}")
        soup=BeautifulSoup(result.text,"html.parser")
        results = soup.find_all("div",{"class":"jobsearch-SerpJobCard"})
        for result in results:
            title= result.find("div",{"class":"title"}).find("a")["title"]
            company = result.find("span",{"class":"company"})
            company_anchor=company.find("a")
            if company_anchor is not None :
                company = str(company_anchor.string)
            else:
                company= str(company.string)
            company= company.strip()
            print(title,company)
        return jobs
        


# 출력
# Jr Python Developer Ace-stack LLC
# R&D Imagineer Walt Disney Imagineering
# Python Developer Intern OXO Solutions
# Junior Python Coder Social Commerce Ventures
# Reservoir Engineer - Algorithm Development Beyond Limits
# MongoDB, Python Developer Evolent Health
# Legal Investigator and Threat Researcher Facebook
# Data Scientist (Python) Applied Memetics LLC
# Software Engineer -Python/MongoDB/NodeJS Evolent Health
# Students - Equity Trading Desk Internship Summer 2019 SMB Capital
