def timeConversion(s):
    x = list(s)
    if x[-1] == "M" and x[-2] == "P":
        if x[0] == 1 :
            x[0] = 2
        elif x[0] == 0:
            x[0] = 1
        


    return inp

print(timeConversion("07:05:45PM"))