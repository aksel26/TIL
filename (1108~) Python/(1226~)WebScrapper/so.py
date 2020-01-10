import requests
from bs4 import BeautifulSoup

URL  = f"https://stackoverflow.com/jobs?q=python&sort=i"

def get_last_page():
    result = requests.get(URL)
    
    soup = BeautifulSoup(result.text,"html.parser")
    
    pages = soup.find("div",{"class":"s-pagination"}).find_all("a")
    last_page = pages[-2].get_text(strip=True)
    return int(last_page)


def extract_job(html):
    title = html.find("div",{"class":"grid--cell fl1 mr12"}).find("h2").find("a")["title"]
    location = html.find("h3",{"class":"fc-black-700 fs-body1 mb4"}).find("span",{"class":"fc-black-500"})
    company = html.find("h3",{"class" : "fc-black-700 fs-body1 mb4"}).find("span")
    location =location.get_text(strip=True).strip("-")
    company = company.get_text(strip=True)
    job_id = html['data-jobid']
    return {'title' : title, 'company': company, 'location' : location,'apply_link':f"https://stackoverflow.com/jobs/{job_id}"}

def extract_jobs(last_page):
    jobs= []
    for page in range(last_page):
        print(f"Scrapping SO : page : {page}")
        result= requests.get(f"{URL}&pg={page+1}")
        
        soup = BeautifulSoup(result.text,"html.parser")
        results = soup.find_all("div",{"class":"-job"})
        
        for result in results:
            
            job = extract_job(result)
            
            jobs.append(job)
    return jobs
        
        

def get_jobs():
    last_page = get_last_page()
    jobs= extract_jobs(last_page)
    
    return jobs
    
# 출력

# {'title': 'Software Engineer (Monitoring System) - Working in Japan', 'company': 'LINE Fukuoka', 'location': 'Fukuoka, Japan', 'apply_link': 'https://stackoverflow.com/jobs/273841'}
# {'title': 'Software Engineer (m/f/d)', 'company': 'Synfioo GmbH', 'location': 'Potsdam, Germany', 'apply_link': 'https://stackoverflow.com/jobs/295854'}
# {'title': 'Threat Analyst (Rapid Detection Center)', 'company': 'F-Secure', 'location': 'Poznań, Poland', 'apply_link': 'https://stackoverflow.com/jobs/295715'}
# {'title': 'SE', 'company': '株式会社エバーコンサルティング', 'location': 'Minato City, Japan', 'apply_link': 'https://stackoverflow.com/jobs/348772'}
# {'title': 'iOS/Androidアプリのバックエンドエンジニア harmo事業部', 'company': 'シミックホールディングス株式会社', 'location': 'Minato City, Japan', 'apply_link': 'https://stackoverflow.com/jobs/322022'}
# {'title': 'Androidエンジニア / システムインテグレータ・ソフトハウス', 'company': 'i Nations 株式会社', 'location': 'Chuo City, Japan', 'apply_link': 'https://stackoverflow.com/jobs/327634'}
# {'title': '市場調査･データ分析･数値分析', 'company': 'TDK株式会社', 'location': 'Chuo City, Japan', 'apply_link': 'https://stackoverflow.com/jobs/340249'}
# {'title': 'PHPエンジニア / インターネット/Webサービス・ASP', 'company': '株式会社 エムフロ', 'location': 'Shibuya City, Japan', 'apply_link': 'https://stackoverflow.com/jobs/328584'}
# {'title': '社内SE/アプリ', 'company': '株式会社CINC', 'location': 'Japan', 'apply_link': 'https://stackoverflow.com/jobs/319401'}
# {'title': '[ PHP/Rubyなど ] 技術力が身につくバックエンドエンジニア(実務経験1年以上の方)', 'company': '株式会社LLL', 'location': 'Shibuya City, Japan', 'apply_link': 'https://stackoverflow.com/jobs/348748'}
# {'title': 'サーバ・ネットワークエンジニア', 'company': '弁護士ドットコム株式会社', 'location': 'Minato City, Japan', 'apply_link': 'https://stackoverflow.com/jobs/332461'}
