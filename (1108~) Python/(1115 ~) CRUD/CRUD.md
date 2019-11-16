## CRUD

### 뼈대 만들기

#### 1. 가상환경 설정

1. bash 창에서 `source env/Scripts/activate` 를 입력하면 가상환경이 실행됨

2. 앱을 만들 폴더로 이동한다.

   ![image-20191116231448565](C:%5CUsers%5CHK%5CAppData%5CRoaming%5CTypora%5Ctypora-user-images%5Cimage-20191116231448565.png)

3. 프로젝트 만들기 

   ```bash
   HK@DESKTOP-LK161LF MINGW64 /c/day6-2/crud_test
   $ django-admin startproject config .
   (env)
   ```

4. 환경 설정 바꿔주기 config - 

   1. settings.py 언어,시간 바꿔주기

      ```
      LANGUAGE_CODE = 'ko-kr'
      
      TIME_ZONE = 'Asia/Seoul'
      ```

   2. urls.py

      ```python
      from django.contrib import admin
      from django.urls import path,include
      
      urlpatterns = [
          path('admin/', admin.site.urls),
          path('crud1/',include('crud1.urls'))
      ]
      ```

5. crud1 앱 만들기

   ```bash
   HK@DESKTOP-LK161LF MINGW64 /c/day6-2/crud_test
   $ python manage.py startapp crud1
   ```

   이후 crud1.폴더가 생성된다.

   ![image-20191116232138316](C:%5CUsers%5CHK%5CAppData%5CRoaming%5CTypora%5Ctypora-user-images%5Cimage-20191116232138316.png)

6. crud1 폴더 내에 urls.py 파일 생성하기

   ```python
   from django.urls import path
   from . import views
   
   urlpatterns = [
       path('' , views.index), #crud1/
   ]
   ```

7. views.py 파일에서 

   ```python
   from django.shortcuts import render,redirect
   from .models import Article
   # Create your views here.
   def index(requests):
   
       # articles = Article.objects.all()
       #쿼리셋 형태로 전체 목록이 날아온다. 
   
       #리스트 내용을 역순으로 하는 방법 1번째 파이썬에서 정렬 하는 방법
       # articles = Article.objects.all()[::-1]
   
       #리스트 내용을 역순으로 하는 방법 2번째 , 불러올때 정렬시키는 법
       articles = Article.objects.order_by('-id')
   
       context = {
           "articles" : articles,
       }
       return render (requests , "crud1/index.html" , context)
   ```

   

8. config 아래에 templates 폴더를 만들고 그 아래에 base.html파일을 생성한다.

   base.html

   ```html
   <!DOCTYPE html>
   <html lang="en">
   <head>
           <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
       <meta charset="UTF-8">
       <meta name="viewport" content="width=device-width, initial-scale=1.0">
       <meta http-equiv="X-UA-Compatible" content="ie=edge">
       <title>Document</title>
   </head>
   <body>
           
             
       <nav class="navbar navbar-light" style="background-color: #e3f2fd;">
               <a class="navbar-brand" href="#">메뉴</a>
               <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
                   <span class="navbar-toggler-icon"></span>
               </button>
               
               <div class="collapse navbar-collapse" id="navbarSupportedContent">
                   <ul class="navbar-nav mr-auto">
                   <li class="nav-item active">
                       <a class="nav-link" href="/crud/">Home <span class="sr-only">(current)</span></a>
                   </li>
                   <li class="nav-item">
                       <a class="nav-link" href="/crud/new/">새글쓰기</a>
                   </li>
                   <li class="nav-item dropdown">
                       <a class="nav-link dropdown-toggle" href="#" id="navbarDropdown" role="button" data-toggle="dropdown" aria-haspopup="true" aria-expanded="false">
                       Dropdown
                       </a>
                       <div class="dropdown-menu" aria-labelledby="navbarDropdown">
                       <a class="dropdown-item" href="#">Action</a>
                       <a class="dropdown-item" href="#">Another action</a>
                       <div class="dropdown-divider"></div>
                       <a class="dropdown-item" href="#">Something else here</a>
                       </div>
                   </li>
                   <li class="nav-item">
                       <a class="nav-link disabled" href="#" tabindex="-1" aria-disabled="true">Disabled</a>
                   </li>
                   </ul>
                   <form class="form-inline my-2 my-lg-0">
                   <input class="form-control mr-sm-2" type="search" placeholder="Search" aria-label="Search">
                   <button class="btn btn-outline-success my-2 my-sm-0" type="submit">Search</button>
                   </form>
               </div>
       </nav>
   
       <div class="container">
           {% block body %}
           {% endblock %}
       </div> 
           
   
   
       <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
       <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
       <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>    
   
   </body>
   </html>
   ```

9. templates 폴더 아래에 crud1 폴더를 생성 후 그 아래에 index.html 을 만들어 준다.

   index.html

   ```html
   {% extends 'base.html' %}
   
   {% block body %}
   <h1>Article List</h1>
   <ul>
       {% for art in articles %}
       <li><a href="/crud/{{ art.pk }}/article">{{ art.title }}</li></a> <!-- 해당 pk값이 들어갈 것 이다.-->
       {% endfor %}
   </ul>
   
   {% endblock %}
   ```

### Create (C of CRUD)

