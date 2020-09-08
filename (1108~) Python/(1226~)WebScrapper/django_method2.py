class Car():
    def __init__(self,**kwargs):
        
        self.doors =4 
        self.wheels =4
        self.seats=5
        self.windows=5
        self.color = kwargs.get("color","black")
        self.price = kwargs.get("price","$20")
        

    def __str__(self):
        return f"Car with {self.wheels}wheels"


class Convertible(Car): # 상속

    def __init__(self,**kwargs):
        super().__init__(**kwargs) # green
        # super().__init__() # black : default 값
        self.time = kwargs.get("time",10)

    def take_off(self):
        return "taking off"

    def __str__(self):
        return f"Car without roof"


porch = Convertible(color="green", price= "$40")
# porch.take_off()
print(porch.color)
