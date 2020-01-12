class Car():
    def __init__(self,*args,**kwargs):
        print(kwargs)
        self.doors =4 
        self.wheels =4
        self.seats=5
        self.windows=5
        self.color = kwargs.get("color")
        self.price = kwargs.get("price")
    def __str__(self):
        return "lalalalal"
        #lalalalal

    def __str__(self):
        return f"Car sales {self.wheels}wheels"


  
        
# print(dir(Car))
# ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', 'doors', 'seats', 'wheels', 'windows']


# __str__ : class 의 instance를 출력




porch = Car(color="green", price= "$40")
print(porch.color, porch.price)
#lalalalal


# {'color': 'green', 'price': '$40'}
# green $40
