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

