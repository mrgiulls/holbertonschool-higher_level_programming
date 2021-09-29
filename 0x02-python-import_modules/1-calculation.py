#!/usr/bin/python3
if __name__ == "__main__":
    from calculator_1 import *
    a = 10
    b = 5
    funcion = [add, sub, mul, div]
    op = ["+", "-", "*", "/"]
    for f in range(0, 4):
        print('{} {} {} = {}'.format(a, op[f], b, funcion[f](a, b)))
