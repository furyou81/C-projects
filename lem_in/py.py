import turtle
import sys
import ctypes, ctypes.util
import re

whereislib = ctypes.util.find_library('c')
clib = ctypes.cdll.LoadLibrary(whereislib)

turtle.setup(1000, 1000)
turtle.title("Lem-in visu")
turtle.speed(50)
SIZE = 0.1
rooms = {}

class Rooms:
    def __init__(self):
        self.name = ""
        self.posx = -1
        self.posy = -1
def traitb(fromposx, fromposy, toposx,  toposy):
    turtle.up()
    turtle.goto(fromposx * SIZE - 200, fromposy * - SIZE)
    turtle.down()
    turtle.goto(toposx * SIZE - 200, toposy * -SIZE)
    turtle.up()
def drawroom(posx, posy, name):
    turtle.up()
    turtle.goto(posx * SIZE - 200, posy * -SIZE - SIZE * 3 / 4)
    turtle.down()
   # turtle.fill(True)
   # turtle.fillcolor("yellow")
    turtle.circle(SIZE * 3 / 4)
    turtle.write(name, move=False, align="left", font=("Arial", 12, "bold"))

for line in sys.stdin:
    if line[0] == '#':
        continue ;
    if line == "\n":
        break ;
    if " " in line:
        word = line.split(" ")
        r = Rooms()
        r.posx = clib.atoi(word[1])
        r.posy = clib.atoi(word[2])
        r.name = word[0]
        rooms[word[0]] = r
        drawroom(r.posx, r.posy, r.name)
    if "-" in line:
        w = line.split('-')
        fromroom = rooms.get(w[0])
        w[1] = w[1].replace('\n', '')
        toroom = rooms.get(w[1])
        traitb(rooms.get(w[0]).posx, rooms.get(w[0]).posy, rooms.get(w[1]).posx, rooms.get(w[1]).posy)

turtle.exitonclick()
