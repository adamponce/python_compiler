import date


def zodiac(number):
    """The function uses the date.py to figure out the number of day from
    the entered date and compares it to the zodiac signs dates and returns
    the zodiac sign corresponding to the entered date."""
    if 79 <= number <= 110:
        return "Aries: Teaches that love is an awakening."
    if 110 < number <= 141:
        return "Taurus: Teaches that love is real."
    if 141 < number <= 172:
        return "Gemini: Teaches that love is inspiring."
    if 172 < number <= 200:
        return "Cancer: Teaches that love is nurturing."
    if 200 < number <= 235:
        return "Leo: Teaches that love is brave."
    if 235 < number <= 266:
        return "Virgo: Teaches that love is selfless."
    if 266 < number <= 296:
        return "Libra: Teaches that love is peaceful."
    if 296 < number <= 326:
        return "Scorpio: Teaches that love is a instinctive."
    if 326 < number <= 356:
        return "Sagittarius: Teaches that love is a journey."
    if 356 < number <= 20:
        return "Capricorn: Teaches that love knows no limits."
    if 20 < number <= 49:
        return "Aquarius: Teaches that love knows no limits."
    if 49 < number <= 79:
        return "Pisces: Teaches that love makes us divine."
    else:
        return -1


def main():
    horoscope = input("Type stop or Enter a month, day, year: ")
    while horoscope != "stop":
        horoscope = horoscope.split(",")
        month = (horoscope[0])
        day = int(horoscope[1])
        year = int(horoscope[2])
        is_leap = (year % 4 == 0 and year % 100 != 0) or year % 400 == 0
        day_number = date.date(month, day, year)
        if is_leap:
            number = day_number - 1
        else:
            number = day_number
        sign = zodiac(number)
        if day_number == -1 or sign == -1:
            print("Invalid Date")
        else:
            print(sign)
        horoscope = input("Type stop or Enter a month, day, year: ")


if __name__ == "__main__":
    main()
