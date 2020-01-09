# -*- coding: utf-8 -*-
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


def extract_job(html):
    title= html.find("div",{"class":"title"}).find("a")["title"]
    company = html.find("span",{"class":"company"})
    company_anchor=company.find("a")
    if company_anchor is not None :
        company = str(company_anchor.string)
    else:
        company= str(company.string)
    company= company.strip()
    location = html.find("div",{"class":"recJobLoc"})["data-rc-loc"]
    job_id = html["data-jk"]
    
    return {'title':title,
            'company':company, 
            'location':location, 
            "link" : f"https://www.indeed.com/viewjob?jk={job_id}"
            }
# def extract_indeed_jobs(last_page):
  
#     for page in range(last_page):

#         result=requests.get(f"{URL}&start={page*LIMIT}")
#         print(result.status_code)



#### Extracting title  & Extacting Companies ##########
# BeautifulSoup 


def extract_indeed_jobs(last_page):
    jobs=[]
    for page in range(last_page):
        print(f"Scrapping page {page}")
        result=requests.get(f"{URL}&start={page*LIMIT}")
        soup=BeautifulSoup(result.text,"html.parser")
        results = soup.find_all("div",{"class":"jobsearch-SerpJobCard"})
        for result in results:
            job=extract_job(result)
            jobs.append(job)
    return jobs
        



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




# Scrapping page 0
# Scrapping page 1
# Scrapping page 2
# Scrapping page 3
# Scrapping page 4
# [{'title': 'Data Scientist (Python)', 'company': 'Applied Memetics LLC', 'location': 'Remote', 'link': 'https://www.indeed.com/viewjob?jk=0f16c57e35f21a63'}, {'title': 'Junior Python Coder', 'company': 'Social Commerce Ventures', 'location': 'Austin, TX', 'link': 'https://www.indeed.com/viewjob?jk=9274e2f2d776e4b4'}, {'title': 'R&D Imagineer', 'company': 'Walt Disney Imagineering', 'location': 'Glendale, CA', 'link': 'https://www.indeed.com/viewjob?jk=742a34c71f945b91'}, {'title': 'Legal Investigator and Threat Researcher', 'company': 'Facebook', 'location': 'New York, NY', 'link': 'https://www.indeed.com/viewjob?jk=7c2f40b866506967'}, {'title': 'Python Developer Intern', 'company': 'OXO Solutions', 'location': 'Ruby, SC', 'link': 'https://www.indeed.com/viewjob?jk=84a541c104b5b24c'}, {'title': 'Reservoir Engineer - Algorithm Development', 'company': 'Beyond Limits', 'location': 'Glendale, CA', 'link': 'https://www.indeed.com/viewjob?jk=0bd4d32e320bacb8'}, {'title': 'Jr Python Developer', 'company': 'Ace-stack LLC', 'location': 'Plano, TX', 'link': 'https://www.indeed.com/viewjob?jk=fe9938779161d76b'}, {'title': 'Students - Equity Trading Desk Internship Summer 2019', 'company': 'SMB Capital', 'location': 'New York, NY', 'link': 'https://www.indeed.com/viewjob?jk=7649cd45d0afd8f0'}, {'title': 'Python Developer', 'company': 'Akra Tech', 'location': 'Remote', 'link': 'https://www.indeed.com/viewjob?jk=b4746b42ba857a6b'}, {'title': 'MongoDB, Python Developer', 'company': 'Evolent Health', 'location': 'Remote', 'link': 'https://www.indeed.com/viewjob?jk=83c1bc2a1f5f2e71'}, {'title': 'Modeler', 'company': 'Walt Disney Animation Studios', 'location': 'Burbank, CA', 'link': 'https://www.indeed.com/viewjob?jk=5bb0c1ce3f5f3763'}, {'title': 'Python Developer', 'company': 'Avani Technology Solutions Inc', 'location': 'Milpitas, CA', 'link': 'https://www.indeed.com/viewjob?jk=f65f341dc9f2093e'}, {'title': 'Python Quantitative Engineer - for Cash Equities Trading', 'company': 'JPMorgan Chase', 'location': 'New York, NY', 'link': 'https://www.indeed.com/viewjob?jk=42c4f3e24c0d732e'}, {'title': 'Hadoop – Pyspark – Python', 'company': 'TeQbeat', 'location': 'Los Angeles, CA', 'link': 'https://www.indeed.com/viewjob?jk=37947daa1d10ee96'}, {'title': 'Python Developer Fixed Income+ USC - GCH C', 'company': 'Select Group', 'location': 'Coppell, TX', 'link': 'https://www.indeed.com/viewjob?jk=a1db8b49c84f9b6c'}, {'title': 'Python Developer', 'company': 'ITL USA', 'location': 'Austin, TX', 'link': 'https://www.indeed.com/viewjob?jk=981255136b6051ca'}, {'title': 'Python разработчик', 'company': 'WaveAccess', 'location': 'United States', 'link': 'https://www.indeed.com/viewjob?jk=d6df26980f5d9a81'}, {'title': 'Python Developer', 'company': 'Bank of America', 'location': 'New York, NY', 'link': 'https://www.indeed.com/viewjob?jk=13f60fca6164d5ee'}, {'title': 'Katana Lookdev/Lighter', 'company': 'Method Studios', 'location': 'Santa Monica, CA', 'link': 'https://www.indeed.com/viewjob?jk=0b9acec4ef9d9605'}, {'title': 'Apple Cloud Education - SDET', 'company': 'Apple', 'location': 'San Francisco, CA', 'link': 'https://www.indeed.com/viewjob?jk=79e170fdf3430be3'}, {'title': 'Intern, Business Value Engineering', 'company': 'Coupa', 'location': 'San Mateo, CA', 'link': 'https://www.indeed.com/viewjob?jk=e5709c65a5a31b27'}, {'title': 'Data Science Intern', 'company': 'Total', 'location': 'San Francisco, CA', 'link': 'https://www.indeed.com/viewjob?jk=428425c4fdedd608'}, {'title': 'Python', 'company': 'PIXOMONDO LLC.', 'location': 'Los Angeles, CA', 'link': 'https://www.indeed.com/viewjob?jk=53862f19af1abba6'}, {'title': 'Data Science Internship- Richmond', 'company': 'Timmons Group, Inc.', 'location': 'Richmond, VA', 'link': 'https://www.indeed.com/viewjob?jk=cf7d47e34a53a1e0'}, {'title': 'Technologist, Atmospheric Physics and Weather', 'company': 'Jet Propulsion Laboratory', 'location': 'Pasadena, CA', 'link': 'https://www.indeed.com/viewjob?jk=049e8188383a0a9d'}, {'title': 'Software Development Intern', 'company': 'NAVIS', 'location': 'Bend, OR', 'link': 'https://www.indeed.com/viewjob?jk=41119bb41b9290d2'}, {'title': 'Entry Level Data Analyst', 'company': 'Hopjump', 'location': 'Boston, MA', 'link': 'https://www.indeed.com/viewjob?jk=2532431132ffbda1'}, {'title': 'PYTHON DEVELOPER', 'company': 'OC10', 'location': 'Charlotte, NC', 'link': 'https://www.indeed.com/viewjob?jk=75056cfbc1e52359'}, {'title': 'Intern, Data Science', 'company': 'Fitch Ratings', 'location': 'New York, NY', 'link': 'https://www.indeed.com/viewjob?jk=043abd032a1363b1'}, {'title': 'Intern, Data Engineering', 'company': 'Sephora', 'location': 'San Francisco, CA', 'link': 'https://www.indeed.com/viewjob?jk=0b0ce4c79106a26f'}, {'title': 'Entry Level Tableau Developer', 'company': 'Remedy Analytics', 'location': 'Milwaukee, WI', 'link': 'https://www.indeed.com/viewjob?jk=474b3adc558bc7cf'}, {'title': 'Software Engineer Intern - Yards Team', 'company': 'Copart', 'location': 'Dallas, TX', 'link': 'https://www.indeed.com/viewjob?jk=415656eb28f15c7a'}, {'title': 'Software Engineer - Entry Level', 'company': 'LOCKHEED MARTIN CORPORATION', 'location': 'Fort Worth, TX', 'link': 'https://www.indeed.com/viewjob?jk=01aeff1402adface'}, {'title': 'Jr. Consultant', 'company': 'Nutanix', 'location': 'Bentonville, AR', 'link': 'https://www.indeed.com/viewjob?jk=a22fb0689ddd329b'}, {'title': 'Tech Animator', 'company': 'Method Studios', 'location': 'Santa Monica, CA', 'link': 'https://www.indeed.com/viewjob?jk=5e7099aa6ccef0b3'}, {'title': 'Python Developer', 'company': 'Highbrow Technologies', 'location': 'Bellevue, WA', 'link': 'https://www.indeed.com/viewjob?jk=70912d7ae92ee088'}, {'title': 'Bioinformatics/Data Science Internship', 'company': 'Pendulum.co', 'location': 'San Francisco, CA', 'link': 'https://www.indeed.com/viewjob?jk=1efd7ec989a7de90'}, {'title': 'System Test Engineering Intern', 'company': 'Legrand North America', 'location': 'Carlsbad, CA', 'link': 'https://www.indeed.com/viewjob?jk=4e8f4f44c2e4d559'}, {'title': 'Quantitative user researcher', 'company': 'Apple', 'location': 'Santa Clara Valley, CA', 'link': 'https://www.indeed.com/viewjob?jk=9c11cb17ada72526'}, {'title': 'Software Engineer, Blockchain (University Grad)', 'company': 'Facebook', 'location': 'Seattle, WA', 'link': 'https://www.indeed.com/viewjob?jk=a68179a2ef0779c3'}, {'title': 'Python', 'company': 'PIXOMONDO LLC.', 'location': 'Los Angeles, CA', 'link': 'https://www.indeed.com/viewjob?jk=53862f19af1abba6'}, {'title': 'Python Cloud Engineer', 'company': 'Platform.sh', 'location': 'United States', 'link': 'https://www.indeed.com/viewjob?jk=5695c5b499bc6788'}, {'title': 'Data Analytics Associate', 'company': 'Eide Bailly', 'location': 'Orem, UT', 'link': 'https://www.indeed.com/viewjob?jk=e1d078ccc4ba37e9'}, {'title': 'Web & Application Developer (Grade E22, 14874)', 'company': 'The Maryland-National Capital Park and Planning Co...', 'location': "Prince George's County, MD", 'link': 'https://www.indeed.com/viewjob?jk=88994025573f93cb'}, {'title': 'Data Analyst', 'company': 'Weber Shandwick', 'location': 'New York, NY', 'link': 'https://www.indeed.com/viewjob?jk=6484aadaf0ad52c1'}, {'title': 'Solutions Consultant I', 'company': 'Xandr', 'location': 'New York, NY', 'link': 'https://www.indeed.com/viewjob?jk=fb7257d13b2b18c1'}, {'title': 'API Developer - Entry Level', 'company': 'American Water', 'location': 'Camden, NJ', 'link': 'https://www.indeed.com/viewjob?jk=aedbead83370f8ba'}, {'title': 'Junior Geochemist', 'company': 'Golder Associates', 'location': 'Lakewood, CO', 'link': 'https://www.indeed.com/viewjob?jk=16f92b6dcd3916b1'}, {'title': 'VP, IT Automation Engineer (vRealize & Python)', 'company': 'CIT Group LLC', 'location': 'Livingston, NJ', 'link': 'https://www.indeed.com/viewjob?jk=5b5d39ed17f46212'}, {'title': 'Baseball Research and Development Analyst', 'company': 'Milwaukee Brewers', 'location': 'Milwaukee, WI', 'link': 'https://www.indeed.com/viewjob?jk=d08dd3faa11c59dd'}]