######## Data types of Python ########




a_String = "Like this"
a_number= 3
a_float = 3.12
a_boolean = False
a_none =None #파이썬에만 존재함

print(type(a_number))    #<class 'int'>
print(type(a_none))      #<class 'NoneType'>

#cf)snake case 변수명 (a_bbb_ccc)



######## Lists in Python ########

# 1. list
# 2. tuple

# 1-1. List

    days = "Mon, Tue, Wed, Thur, Fri"
    print(days)    
    #  days = "Mon, Tue, Wed, Thur, Fri"


    list를 생성하는 법 : 대괄호로 묶어준다
    days = ["Mon", "Tue", "Wed", "Thur", "Fri"]
    print(days)
    # ['Mon', 'Tue', 'Wed', 'Thur', 'Fri']  데이터 타입은 List

    print("Mon" in days)    #True
    print(len(days))   # 5
    조작 가능

# 1-2. Tuple
    list와는 다르게 common sequence operation들만 사용 가능하다.
    소괄호를 이용.
    변경할 수 없도록 할 때 쓰는게 tuple
    days = ("Mon", "Tue", "Wed", "Thur", "Fri")

    print(type(days))   # <class 'tuple'>



######## Dictionary ########
nico = {
    "name" : "kim",    
    "age" : 29,
    "korean" : True,
    "fav_food" : ["kimchi", "bread"]
}
print(type(nico))  >>> print(nico)
                    # {'name': 'kim', 'age': 29, 'korean': True, 'fav_food': ['kimchi', 'bread']}
print(type(nico)) 
    #<class 'dict'>
print(nico["fav_food"])  
    #['kimchi', 'bread']

#------------- 추가하려면 ?
nico["hahaha"] =True
print(nico)
    #{'name': 'kim', 'age': 29, 'korean': True, 'fav_food': ['kimchi', 'bread'], 'hahaha': True}



####### Built-in Functions #######
# 1. print()
# 2. type()
# 3. len()
print(len("as;dkfjask;ldjfkjdsf;l"))  #22

# 4. str()
# 5. int() 
# ....

# example
age = "18"
print(type(age))
n_age=int(age)
print(type(n_age))
    # >>> print(type(age))
    # <class 'str'>
    # >>> n_age=int(age)
    # >>> print(type(n_age))
    # <class 'int'>
    

####### Creating Function #######

def say_hello():
    print("hello")  # 파이썬은 들여쓰기로 함수의 시작과 끝을 인식함.
    print("bye")

say_hello()
say_hello()
say_hello()
say_hello()
say_hello()




####### Keyword Argument #######
# 위치가 아닌 키워드로 인자를 정할 수 있다.

def plus(a,b):
    if type(b) is str:
        return None
    else :
        return a+b

result = plus(b=30, a =1)
print(result)


# string 안에 인자를 대입하는 방법.

def say_hello(name,age):
    return f"hello {name} you are {age} years old"


hello= say_hello(name="kim",age="12")
print(hello)


# Boolean Operation (and or not)
def age_check(age):
        print(f"you are {age}")
        if age< 18:
            print("you cant drink")
        
        elif age == 18 :
            print("you are new to this")
        elif age > 20 and age < 25:
            print("you are still kind of young")

        else:
            print("enjoy it!")


age_check(23)

# 출력
# you are 23
# you are still kind of young

week2 = ("Mon","Tue","Wed","Thu","Fri")

for day in week2 : 
    if day is "Wed":
        break
    else:
        print(day)


# tuple, list에서 사용ㄱ ㅏ능


### modules 기능의 집합 import해서 사용 가능
import math as m
print(m.ceil(1.2))





