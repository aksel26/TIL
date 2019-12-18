### N:M 팔로우 기능

follow 사람과 사람과 N:M 관계

User모델 정의된 것을 수정할 수 없어서
장고에서 제공하는 abstractuser라는 친구를 상속받아서 새로 정의하겠습니다. 

- AbstractBaseUser
  - password/last_login
  - 커스텀의 자유도가 높지만 수정하거나 추가할 것들이 많아서 pass
  - AUTH_USER_MODEL 재설정 필요 없음
- AbstractUser
  - settings.AUTH_USER_MODEL 꼭 재설정을 해줘야함
  - AUTH_USER_MODEL="앱이름.클래스이름"


1. models.py 
    ```python
    class User(AbstractUser) :  #M:M관계, 
    followers=models.ManyToManyField(settings.AUTH_USER_MODEL, related_name="followings") 

2. settings.py
    `AUTH_USER_MODEL = 'accounts.User'` 


* 검색엔진
    아파치 solr
    일래스틱 서치

페이지네이션

oauth : SNS 로그인
admin 페이지 - 소셜어플리케이션 - 소셜어플리케이션 추가 클릭 - 제공자 : kakao가 뜬다
클라이언트 아이디 ; restAPI 키
시크릿 키 : 고급탭에 있음
키: skip해도 됨
