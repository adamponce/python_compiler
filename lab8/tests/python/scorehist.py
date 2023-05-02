def main():
    """This program takes in the values of the ACT scores from every state
    and creates a histogram out of them."""
    import readscores
    import numpy as np
    import matplotlib.pyplot as plt

    data = readscores.read_scored("actsat.txt")
    counter = 0
    act_scores = []
    while counter < len(data):
        act_scores.append(float(data[counter]["act_average_score"]))
        counter += 1
    plt.hist(act_scores, bins=7, edgecolor="black", color="blue")
    plt.yticks(np.arange(0, 21, step=5))
    plt.ylabel("Number of States")
    plt.xlabel("score out of 36")
    plt.title("Histogram of ACT Scores")
    plt.show()


if __name__ == "__main__":
    main()
