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