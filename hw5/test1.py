def foo(x , y):

    while x < 10:
        x += 1
    if x == 9 and y < 8:
        return x
    elif x == 9 and y > 8:
        return y
    else:
        return True


