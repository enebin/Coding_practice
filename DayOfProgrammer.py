def dayOfProgrammer(year):
    leap = False

    if year == 1918:
        return ("26.09.1918")

    elif year < 1918 and not year % 4:
        leap = True
    elif (year > 1918) and (not year % 400 or (not year % 4 and year % 100)):
        leap = True

    if leap:
        return ("12.09.%s" %year)
    else :
        return ("13.09.%s" %year)

print(dayOfProgrammer(2300))