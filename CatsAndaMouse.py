def catAndMouse(x, y, z):
    cat_a = abs(z - x)
    cat_b = abs(z - y)

    if cat_a > cat_b:
        return "Cat B"
    elif cat_b > cat_a:
        return "Cat A"
    else:
        return "Mouce C"