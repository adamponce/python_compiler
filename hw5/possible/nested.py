# Fill in a correct implementation for each function.
# Define other functions if you think they make the
# assigned function easier to write or easier to read.

def all_have_value(lst):
    for i in range(len(lst)):
        if lst[i] == '-':
            return False
        else:
            return True
    return


def all_equal(lst):
    for i in range(len(lst)):
        if lst[i] == '-':
            return False
        elif lst[0] == lst[i]:
            return True
        else:
            return False
    return


def select_row(array, index):

    return array[index]


def select_col(array, index):
    list_question = []
    bob = 0
    if type(array[0]) is list:
        while bob < len(array):
            list_question.append(array[bob][index])
            bob = bob + 1
    else:
        list_question.append(array[index])

    return list_question


def run_tests():
    # A single test is a tuple containing the function
    # which is being tested, a sample input, and the correct output.
    # Tests should be written using the unittest or pytest modules,
    # but, hopefully, this code is easier to understand.
    tests = [
        # This test will be used to check if `sum([1, 2, 3])` is `6`.
        (all_have_value, [1, 2, 3, 4, 5], True),
        (all_have_value, ['c', 'a', 't'], True),
        (all_have_value, ['-', '-'], False),
        (all_equal, [1, 1, 1, 1, 1], True),
        (all_equal, ['-', '-'], False),
        (all_equal, ['python', 'python'], True),
        (select_row, [[1, 2, 3], [4, 5, 6], [7, 8, 9]], 1, [4, 5, 6]),
        (select_row, [[1, 1, 3], [1, 1, 4]], 0, [1, 1, 3]),
        (select_row, [[1], [2], [3], [4]], 3, [4]),
        (select_col, [[1, 2, 3], [4, 5, 6], [7, 8, 9]], 0, [1, 4, 7]),
        (select_col, [[1, 1, 3], [1, 1, 3]], 2, [3, 3]),
        (select_col, [5, 4, 3, 2, 1], 3, [2])

    ]

    passed = 0
    failed = 0

    # Test each function.
    # Print a detailed error message whenever a function fails a test.
    for test in tests:
        if len(test) == 4:
            f = (test[0])
            result = f(test[1], test[2])
            expected = test[3]
            if result == expected:
                passed += 1
            else:
                failed += 1
                # f.__name__ is the function's name
                # for example, select_row.__name__ is the string "select_row"
                print("Function '{}' given arguments {}, {}".format(
                    f.__name__, test[1], test[2]))
                print("Expected {}, but returned {}".format(expected, result))
        else:
            f = (test[0])
            result = f(test[1])
            expected = test[2]
            if result == expected:
                passed += 1
            else:
                failed += 1
                # f.__name__ is the function's name
                # for example, select_row.__name__ is the string "select_row"
                print("Function '{}' given argument {}".format(
                    f.__name__, test[1]))
                print("Expected {}, but returned {}".format(expected, result))
    print("\nPassed {} out of {} tests.".format(passed, passed + failed))


def main():
    run_tests()
