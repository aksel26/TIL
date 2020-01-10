# -*- coding: utf-8 -*-
from indeed import extract_indeed_pages,extract_indeed_jobs
from so import get_jobs as get_so_jobs


last_indeed_page=extract_indeed_pages()



# so_jobs = get_so_jobs()
indeed_jobs = extract_indeed_jobs(last_indeed_page)

# jobs =indeed_jobs
# jobs = so_jobs
print(indeed_jobs)
