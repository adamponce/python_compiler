def main():
    """This program creates two bar graphs, one comparing the average score
    of the ACT with the average score of the SAT for every state. The second is
     comparing the ACT scores and SAT of states in which less than 50% take
     the ACT and more that 50% take the SAT."""
    import readscores
    import numpy as np
    import matplotlib.pyplot as plt
    data = readscores.read_scored("actsat.txt")
    counter = 0
    states = []
    act_scores = []
    sat_scores = []
    while counter < len(data):
        states.append(data[counter]["state"])
        act_scores.append(float(data[counter]["act_average_score"]) / 36)
        sat_scores.append((float(data[counter]["sat_average_math"]) + float(
            data[counter]["sat_average_writing"]) + float(
            data[counter]["sat_average_reading"])) / -2400)
        counter += 1
    plt.figure(1)
    length = np.arange(len(states))
    plt.bar(length, act_scores, align="center", alpha=0.5, color="blue")
    plt.bar(length, sat_scores, align="center", color="black")
    plt.yticks(np.arange(-1, 1.5, step=0.5), ("2400", "1200", "0", "18", "36"))
    plt.xticks(length, states, fontsize=4.5)
    plt.ylabel("Score")
    plt.xlabel("State")
    plt.title("Comparison of SAT and ACT Scores")
    counter2 = 0
    state = []
    act_score2 = []
    sat_score2 = []
    while counter2 < len(data):
        if float(data[counter2]["act_percent_taking"]) < 50 and float(
                data[counter2]["sat_percent_taking"]) > 50:
            state.append(data[counter2]["state"])
            act_score2.append(float(data[counter2]["act_average_score"]) / 36)
            sat_score2.append((float(
                data[counter2]["sat_average_math"]) + float(
                data[counter2]["sat_average_writing"]) + float(
                data[counter2]["sat_average_reading"])) / -2400)

        counter2 += 1
    length2 = np.arange(len(state))
    plt.figure(2)
    plt.bar(length2, act_score2, align="center", alpha=0.5, color="blue")
    plt.bar(length2, sat_score2, align="center", color="black")
    plt.yticks(np.arange(-1, 1.5, step=0.5), ("2400", "1200", "0", "18", "36"))
    plt.xticks(length2, state, fontsize=10)
    plt.ylabel("Score")
    plt.xlabel("State")
    plt.title("Comparison of SAT and ACT Scores Pt.2")
    plt.show()
