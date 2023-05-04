def read_scored(file):
    """This function takes in then file actsat.txt and creates a list of
    dictionaries with the state name, act percentage taken, act average
    score, sat percentage taken, sat average math, writing, and reading."""
    data = []
    with open(file, "r") as lines:
        for line in lines:
            values = line.split()
            row = dict()
            row["state"] = values[0]
            row["act_percent_taking"] = values[1]
            row["act_average_score"] = values[2]
            row["sat_percent_taking"] = values[3]
            row["sat_average_math"] = values[4]
            row["sat_average_writing"] = values[5]
            row["sat_average_reading"] = values[6]
            data.append(row)
        return data


def main():
    file = input("enter file name: ")
    print(read_scored(file))
