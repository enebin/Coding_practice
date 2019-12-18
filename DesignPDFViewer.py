def designerPdfViewer(h, word):
    l = map(ord, word)
    return max(h[i-97] for i in l) * len(word)