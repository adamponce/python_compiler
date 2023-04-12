import math

def reduce_func(function_one, function_two):
    fst_num = function_one[0]
    sec_num = function_one[1]
    fst_final = fst_num / math.gcd(fst_num, sec_num)
    fst_final = int(fst_final)
    sec_final = sec_num / math.gcd(fst_num, sec_num)
    sec_final = int(sec_final)

    sec_fst_num = function_two[0]
    sec_sec_num = function_two[1]
    sec_fst_final = sec_fst_num / math.gcd(sec_fst_num, sec_sec_num)
    sec_fst_final = int(sec_fst_final)
    sec_sec_final = sec_sec_num / math.gcd(sec_fst_num, sec_sec_num)
    sec_sec_final = int(sec_sec_final)
    reduce_sum = (str(fst_final) + "/" + str(sec_final) +
                  " and " + str(sec_fst_final) + "/" + str(sec_sec_final))
    return reduce_sum


def add(function_one, function_two):
    fst_num = function_one[0]
    sec_num = function_one[1]
    fst_final = fst_num / math.gcd(fst_num, sec_num)
    fst_final = int(fst_final)
    sec_final = sec_num / math.gcd(fst_num, sec_num)
    sec_final = int(sec_final)
    sec_fst_num = function_two[0]
    sec_sec_num = function_two[1]
    sec_fst_final = sec_fst_num / math.gcd(sec_fst_num, sec_sec_num)
    sec_fst_final = int(sec_fst_final)
    sec_sec_final = sec_sec_num / math.gcd(sec_fst_num, sec_sec_num)
    sec_sec_final = int(sec_sec_final)
    sum_add = fst_final + sec_fst_final
    total_add = (str(sum_add) + "/" + str(sec_final))
    return total_add


def multiply(function_one, function_two):
    fs_num = function_one[0]
    se_num = function_one[1]
    sec_fs_num = function_two[0]
    sec_se_num = function_two[1]
    fina_numer = fs_num * sec_fs_num
    fina_den = se_num * sec_se_num
    fst_fina = fina_numer / math.gcd(fina_numer, fina_den)
    fst_fina = int(fst_fina)
    sec_fina = fina_den / math.gcd(fina_numer, fina_den)
    sec_fina = int(sec_fina)
    final_mult = (str(fst_fina) + "/" + str(sec_fina))
    return final_mult

def divide(function_one, function_two):
    fst_num = function_one[0]
    sec_num = function_one[1]
    sec_fst_num = function_two[0]
    sec_sec_num = function_two[1]
    final_numer = fst_num * sec_sec_num
    final_den = sec_num * sec_fst_num
    fst_final = final_numer / math.gcd(final_numer, final_den)
    fst_final = int(fst_final)
    sec_final = final_den / math.gcd(final_numer, final_den)
    sec_final = int(sec_final)
    final_divide = (str(fst_final) + "/" + str(sec_final))
    return final_divide


def main():
    function_one = (input("Please enter a fraction ==>> "))
    function_two = (input("Please enter a fraction ==>> "))
    function_one = function_one.split("/")
    function_two = function_two.split("/")
    for i in range(len(function_one)):
        function_one[i] = int(function_one[i])
    for i in range(len(function_one)):
        function_two[i] = int(function_two[i])
    #function_one = int(function_one)
    function_one = tuple(function_one)
    function_two = tuple(function_two)
    print("Reduce fractions to " + str(reduce_func(function_one, function_two)))
    # print(function_two)
    print("Sum of the fractions: " + str(add(function_one, function_two)))
    print("Multiplication of the fractions: " +
          str(multiply(function_one, function_two)))
    print("Division of the first by the second: " +
          str(divide(function_one, function_two)))

if __name__ == '__main__':
    main()
