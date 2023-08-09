class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        import numpy as np
        if(len(original) != m*n):
            return []
        return np.reshape(original,(m,n)).tolist()