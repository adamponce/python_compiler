def read_scores(lines):
    data = []
    for line in lines:
        values = line.split()
        row = dict()
        row["state"] = values[0]
        row["act_percent_taking"] = values[1]
        row["act_average_score"] = values[2]
        row["sat_percent_taking"] = values[3]
        row["sat_average_math"] = values[4]
        row["sat_average_reading"] = values[5]
        row["sat_average_writing"] = values[6]
        data.append(row)
    return data

def test():
    lines = input("Please enter file name: ")
    try:
        with open(lines, 'r') as f:  # if file does open
            lines = f.readlines()
    except FileNotFoundError:
        print('File "{}" not found'.format(lines))
        test()
    for data_row in read_scores(lines):
        print(data_row)

def main():
    test()

if __name__ == "__main__":
    main()
