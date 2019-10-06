# copy this file near the library module if it not installed in the system
import sys

sys.path.insert(0, '.')

import dtm

dtm = dtm.DTM([[[ 1, 2, 5], [3, 4], [2]], [[1, 3]], [[1], [5, 2]]], ['func', 'yellow', 'prefix', 'func1', 'yellow1', 'prefix1'], 2, 1, 1, 1, 1, 1, 1)
dtm.initialize(True)
dtm.estimate(5)
# dtm.save_data('/Users/aismailov/upwork/FastDTM/results')