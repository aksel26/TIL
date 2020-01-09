# -*- coding: utf-8 -*-
from indeed import get_jobs as get_indeed_jobs


indeed_jobs = get_indeed_jobs()
# max_indeed_pages=extract_indeed_pages()

print(indeed_jobs)