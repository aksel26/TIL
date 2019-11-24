from django.shortcuts import render,redirect
from .models import Movie
import csv
from datetime import datetime
from django.urls import resolve

# Create your views here.
def index(request):
    movie = Movie.objects.all()
      
    if len(movie) == 0:
        with open('C://data.csv', 'r', encoding='utf-8-sig') as csv_file:
            # csv 파일을 Dictionary 형식으로 읽어옴.
            csv_data = csv.DictReader(csv_file, delimiter=",")
            for data in csv_data:
                movie = Movie()
                movie.title = data['title']
                movie.title_en = data['title_en']
                movie.audience = data['audience']
                # string으로 되어있는 부분을 datetime 형식으로 변환.
                movie.open_date = datetime.strptime(data['open_date'], "%Y%m%d")
                movie.genre = data['genre']
                movie.watch_grade = data['watch_grade']
                movie.score = data['score']
                movie.poster_url = data['poster_url']
                movie.description = data['description']

                movie.save()
                # print(data)
        movie = Movie.objects.all()

    context = {
        "movie": movie
    }
    return render(request, 'movie/index.html', context)

def regist(request):
    if request.method=="POST":
        movie=Movie()
        movie.title=request.POST.get("title")
        movie.title_en = request.POST.get('title_en')
        movie.audience = request.POST.get('audience')
        movie.score = request.POST.get('score')
        movie.open_date = request.POST.get('open_date')
        movie.genre = request.POST.get('genre')
        movie.watch_grade = request.POST.get('watch_grade')
        movie.poster_url = request.POST.get('poster_url')
        movie.description = request.POST.get('description')

        movie.save()
        print("ddd")
        return redirect("movie:index")
    else:
        return render(request,"movie/regist.html")

def detail(request,m_id):
    movie=Movie.objects.get(id=m_id)
    context={
        "movie":movie
    }
    return render(request, "movie/detail.html", context)



def edit(request,m_id):
    movie = Movie.objects.get(id=m_id)

    if request.method == "POST":
        movie.title = request.POST.get('title')
        movie.title_en = request.POST.get('title_en')
        movie.audience = request.POST.get('audience')
        movie.score = request.POST.get('score')
        movie.open_date = request.POST.get('open_date')
        movie.genre = request.POST.get('genre')
        movie.watch_grade = request.POST.get('watch_grade')
        movie.poster_url = request.POST.get('poster_url')
        movie.description = request.POST.get('description')

        movie.save()
        return redirect('movie:detail', m_id)
    else:
        context = {
            "movie": movie 
        }
        return render(request,'movie/edit.html', context)

def delete(request,m_id):
    if request.method=="POST":
        movie=Movie.objects.get(id=m_id)
        movie.delete()
        return redirect("movie:index")
    else:
        return redirect("movie:detail",m_id)

def search(request):
    search=request.GET.get('search')
    movies=Movie.objects.filter(title__contains=search)

    context={
        "movies" : movies,
        "search" : search
    }
    return render(request,'movie/search.html',context)

def movie_sort(request):
    sorttype=resolve(request.path_info).url_name
    movies=Movie.objects.order_by(f'-{sorttype}')
    context={
        "movies":movies
    }
    return render(request,'movie/index.html',context)