class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        import numpy as np
        row=len(mat)
        col=len(mat[0])
        if(r*c==row*col):
            return np.reshape(mat,(r,c))
        return mat