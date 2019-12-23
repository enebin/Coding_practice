def angryProfessor(k, a):
    if(sum(i <= 0 for i in a) >= k) : 
        return "NO"
    else: 
        return "YES"