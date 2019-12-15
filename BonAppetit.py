def bonAppetit(bill, k, b):
    if (sum(bill) - bill[k])/2 == b : 
        return print("Bon Appetit")
    else :
        return print(int(b - (sum(bill) - bill[k])/2))
