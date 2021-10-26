import turtle
turtle.speed(0)
turtle.bgcolor("black")

for i in range(50):
    for colours in ["red","yellow","white","green","cyan"]:
        turtle.color(colours)
        turtle.pensize(3)
        turtle.right(12)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        # turtle.backward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        turtle.color(colours)
        turtle.pensize(13)
        turtle.right(12)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
        turtle.forward(200)
        turtle.left(90)
    