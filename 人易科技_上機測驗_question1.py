
"""
一、物件導向-繼承/介面 
程式語言:Python
題目描述:今有車輛「汽車」和「機車」，請使用物件的繼承/介面描述二者相同與差易，及二物件的執行程式碼

Ans:
「汽車」與「機車」都是「交通工具」的一種，擁有共同的方法與屬性，此時就可以使用物件導向的繼承設計，
將共同的屬性或方法定義在一個類別中，而其它類別則透過繼承的方式來擁有。
將「汽車」及「機車」類別的共同方法與屬性「輪胎數量」與「顏色」定義在一個新的「交通工具」類別中。
「交通工具」類別稱為父類別，而「汽車」及「機車」類別就稱為子類別，在類別名稱的地方透過括號的方式來繼承，
藉此擁有父類別公開的屬性及方法，而「汽車」與「機車」則作為子類別去覆寫共有的方法或者新建自己獨有的方法。
如:「汽車」子類別裡獨有的「駕駛」方法或「機車」子類別裡獨有的「騎乘」方法。
"""

# 交通工具(基底類別)
class Transportation:
    # 建構式，輪胎數量屬性
    def __init__(self, number):
        self.NumberOfTires = number
    # 顏色方法
    def color(self, color):
        self.color = color

# 汽車子類別
class Car(Transportation):
    # 駕駛方法
    def drive(self):
        print("drive method called.")

# 機車子類別
class Scooter(Transportation):
    # 騎乘方法
    def ride(self):
        print("ride method is called.")

TOYOTA = Car(4)
TOYOTA.color("black")
TOYOTA.drive()
print(TOYOTA.NumberOfTires)
print(TOYOTA.color)

GOGORO = Scooter(2)
GOGORO.color("pink")
GOGORO.ride()
print(GOGORO.NumberOfTires)
print(GOGORO.color)
