from django.urls import path
from . import views

app_name="movie"
urlpatterns =[
    path('',views.index,name="index"),
    path('regist/',views.regist, name="regist"),
    path('<int:m_id>',views.detail,name="detail"),
]