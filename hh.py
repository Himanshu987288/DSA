
from scipy import stats
import numpy as np
import matplotlib.pyplot as plt

 

np.set_printoptions(precision=4)  # print arrays to 4 decimal places

# Make a t distribution object for t with 20 degrees of freedom
t_dist = stats.t(20)

# Plot the PDF
t_values = np.linspace(-4, 4, 1000)
plt.plot(t_values, t_dist.pdf(t_values))

plt.xlabel('t value')
plt.ylabel('probability for t value')
plt.title('PDF for t distribution with df=20')
plt.show()


# Plot the CDF
plt.plot(t_values, t_dist.cdf(t_values))
plt.xlabel('t value')
plt.ylabel('probability for t value <= t')
plt.title('CDF for t distribution with df=20')
plt.show()
