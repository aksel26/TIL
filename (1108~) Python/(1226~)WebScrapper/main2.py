class Car():
    wheels =4
    doors = 4
    windows = 3
    seats = 2


porche = Car() #porche는 Car의 인스턴스, instanciation

print(porche.doors) #4


# propery 추가
porche.color = "RED"

print(porche.color)

ferrari = Car():
ferrari.color="BLUE "



class Car2():
    wheels =4
    doors = 4
    windows = 3
    seats = 2
    def start(potato):
        print(potato.color)
        print("i start") #클래스 내부에 함수는 method

        #외부에 있으면 함수



porche = Car2()
porche.color="RED COLOR"
porceh.start()