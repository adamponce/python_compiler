def max(elements):
    max_elements = 0
    for i in range(len(elements)):
        if max_elements < elements[i]:
            max_elements = elements[i]

    return max_elements


def min(elements):

    min_elements = elements[len(elements)-1]
    for i in range(len(elements)):
        if min_elements > elements[i]:
            min_elements = elements[i]
    return min_elements


def sum(elements):
    sum_elements = 0
    for i in range(len(elements)):
        sum_elements = sum_elements + elements[i]

    return sum_elements


def mean(elements):

    return sum(elements) / len(elements)


def odds(elements):
    list_odds = []
    for i in range(len(elements)):
        if elements[i] % 2 != 0:
            list_odds.append(elements[i])
    return list_odds


def evens(elements):
    list_even = []
    for i in range(len(elements)):
        if elements[i] % 2 == 0:
            list_even.append(elements[i])
    return list_even


def every_other(elements):

    return elements[0::2]


def every_other_odd(elements):
    list_odds = []
    for i in range(len(elements)):
        if elements[i] % 2 != 0:
            list_odds.append(elements[i])

    return list_odds[0::2]


def every_other_even(elements):
    list_even = []
    for i in range(len(elements)):
        if elements[i] % 2 == 0:
            list_even.append(elements[i])
    return list_even[0::2]


def run_tests():
    # A single test is a tuple containing the function
    # which is being tested, a sample input, and the correct output.
    # Tests should be written using the unittest or pytest modules,
    # but, hopefully, this code is easier to understand.
    tests = [
        # This test will be used to check if `sum([1, 2, 3])` is `6`.
        (sum, [1, 2, 3], 6),
        (sum, [], 0),
        (sum, [-1, 0, 1], 0),
        (sum, [10000, 1000, 100, 10, 1], 11111),
        (max, [3, 2, 1, 2, 3], 3),
        (max, [-1, 4, -2, 10, 1, 5], 10),
        (min, [3, 2, 1, 2, 3], 1),
        (min, [-1, 4, -2, 10, 1, 5], -2),
        (odds, [1, 2, 3, 4], [1, 3]),
        (odds, [1, 100, 45, 23, 10, 2, 4, 13], [1, 45, 23, 13]),
        (odds, [], []),
        (evens, [1, 2, 3, 4], [2, 4]),
        (evens, [1, 100, 45, 23, 10, 2, 4, 13], [100, 10, 2, 4]),
        (evens, [], []),
        (every_other, [1, 2, 3, 4], [1, 3]),
        (every_other, [1, 100, 45, 23, 10, 2, 4, 13], [1, 45, 10, 4]),
        (every_other, [], []),
        (every_other_odd, [1, 2, 3, 4], [1]),
        (every_other_odd, [1, 100, 45, 23, 10, 2, 4, 13], [1, 23]),
        (every_other_odd, [], []),
        (every_other_even, [1, 2, 3, 4], [2]),
        (every_other_even, [1, 100, 45, 23, 10, 2, 4, 13], [100, 2]),
        (every_other_even, [], []),
    ]
    passed = 0
    failed = 0
    # Test each function.
    # Print a detailed error message whenever a function fails a test.
    for test in tests:
        f = (test[0])
        result = f(test[1])
        expected = test[2]
        if result == expected:
            passed += 1
        else:
            failed += 1
            # f.__name__ is the function's name
            # for example, evens.__name__ is the string "evens"
            print("Function '{}' given argument {}".format(f.__name__,
                                                           test[1]))
            print("Expected {}, but returned {}".format(expected, result))
        print("\nPassed {} out of {} tests.".format(passed, passed + failed))


if __name__ == "__main__":
    run_tests()
