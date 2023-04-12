def count_letters(input_string):
    dict_string = {"a": 0, "b": 0, "c": 0, "d": 0, "e": 0, "f": 0, "g": 0, "h": 0, "i": 0, "j": 0, "k": 0, "l": 0, "m": 0, "n": 0, "o": 0, "p": 0, "q": 0, "r": 0, "s": 0, "t": 0, "u": 0, "v": 0, "w": 0, "x": 0, "y": 0, "z": 0}

    for i in range(len(input_string)):
        if input_string[i] == "a" or input_string[i] == "A":
            dict_string["a"] = dict_string["a"] + 1
        elif input_string[i] == "b" or input_string[i] == "B":
            dict_string["b"] = dict_string["b"] + 1
        elif input_string[i] == "c" or input_string[i] == "C":
            dict_string["c"] = dict_string["c"] + 1
        elif input_string[i] == "d" or input_string[i] == "D":
            dict_string["d"] = dict_string["d"] + 1
        elif input_string[i] == "e" or input_string[i] == "E":
            dict_string["e"] = dict_string["e"] + 1
        elif input_string[i] == "f" or input_string[i] == "F":
            dict_string["f"] = dict_string["f"] + 1
        elif input_string[i] == "g" or input_string[i] == "G":
            dict_string["g"] = dict_string["g"] + 1
        elif input_string[i] == "h" or input_string[i] == "H":
            dict_string["h"] = dict_string["h"] + 1
        elif input_string[i] == "i" or input_string[i] == "I":
            dict_string["i"] = dict_string["i"] + 1
        elif input_string[i] == "j" or input_string[i] == "J":
            dict_string["j"] = dict_string["j"] + 1
        elif input_string[i] == "k" or input_string[i] == "K":
            dict_string["k"] = dict_string["k"] + 1
        elif input_string[i] == "l" or input_string[i] == "L":
            dict_string["l"] = dict_string["l"] + 1
        elif input_string[i] == "m" or input_string[i] == "M":
            dict_string["m"] = dict_string["m"] + 1
        elif input_string[i] == "n" or input_string[i] == "N":
            dict_string["n"] = dict_string["n"] + 1
        elif input_string[i] == "o" or input_string[i] == "O":
            dict_string["o"] = dict_string["o"] + 1
        elif input_string[i] == "p" or input_string[i] == "P":
            dict_string["p"] = dict_string["p"] + 1
        elif input_string[i] == "q" or input_string[i] == "Q":
            dict_string["q"] = dict_string["q"] + 1
        elif input_string[i] == "r" or input_string[i] == "R":
            dict_string["r"] = dict_string["r"] + 1
        elif input_string[i] == "s" or input_string[i] == "S":
            dict_string["s"] = dict_string["s"] + 1
        elif input_string[i] == "t" or input_string[i] == "T":
            dict_string["t"] = dict_string["t"] + 1
        elif input_string[i] == "u" or input_string[i] == "U":
            dict_string["u"] = dict_string["u"] + 1
        elif input_string[i] == "v" or input_string[i] == "V":
            dict_string["v"] = dict_string["v"] + 1
        elif input_string[i] == "w" or input_string[i] == "W":
            dict_string["w"] = dict_string["w"] + 1
        elif input_string[i] == "x" or input_string[i] == "X":
            dict_string["x"] = dict_string["x"] + 1
        elif input_string[i] == "y" or input_string[i] == "Y":
            dict_string["y"] = dict_string["y"] + 1
        elif input_string[i] == "z" or input_string[i] == "Z":
            dict_string["z"] = dict_string["z"] + 1
    if dict_string["a"] == 0:
        del dict_string["a"]
    if dict_string["b"] == 0:
        del dict_string["b"]
    if dict_string["c"] == 0:
        del dict_string["c"]
    if dict_string["d"] == 0:
        del dict_string["d"]
    if dict_string["e"] == 0:
        del dict_string["e"]
    if dict_string["f"] == 0:
        del dict_string["f"]
    if dict_string["g"] == 0:
        del dict_string["g"]
    if dict_string["h"] == 0:
        del dict_string["h"]
    if dict_string["i"] == 0:
        del dict_string["i"]
    if dict_string["j"] == 0:
        del dict_string["j"]
    if dict_string["k"] == 0:
        del dict_string["k"]
    if dict_string["l"] == 0:
        del dict_string["l"]
    if dict_string["m"] == 0:
        del dict_string["m"]
    if dict_string["n"] == 0:
        del dict_string["n"]
    if dict_string["o"] == 0:
        del dict_string["o"]
    if dict_string["p"] == 0:
        del dict_string["p"]
    if dict_string["q"] == 0:
        del dict_string["q"]
    if dict_string["r"] == 0:
        del dict_string["r"]
    if dict_string["s"] == 0:
        del dict_string["s"]
    if dict_string["t"] == 0:
        del dict_string["t"]
    if dict_string["u"] == 0:
        del dict_string["u"]
    if dict_string["v"] == 0:
        del dict_string["v"]
    if dict_string["w"] == 0:
        del dict_string["w"]
    if dict_string["x"] == 0:
        del dict_string["x"]
    if dict_string["y"] == 0:
        del dict_string["y"]
    if dict_string["z"] == 0:
        del dict_string["z"]
    return dict_string

def main():
    input_string = input("Please enter a string: ")
    print(str(count_letters(input_string)))


if __name__ == "__main__":
    main()
