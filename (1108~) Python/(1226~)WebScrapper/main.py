# -*- coding: utf-8 -*-
from indeed import get_jobs as get_indeed_jobs
from so import get_jobs as get_so_jobs


# max_indeed_pages=extract_indeed_pages()


so_jobs = get_so_jobs()
# indeed_jobs = get_indeed_jobs()
jobs = so_jobs
print(jobs)
