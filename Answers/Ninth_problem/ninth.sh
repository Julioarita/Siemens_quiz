# Julio Arita 24/06/2023
# Here I'm considering you already are in an Unix-based system

# 9. Consider a software 'bq'.
# Problem 1:
bq       # Open the utility
rel ABC  # Specify the data structure. In this case ABC
di       # Display data structure.


# Problem 2:
bq       # Open the utility
rel XYZ  # Specify the data structure. In thhis case XYZ
re f     # Read the first record
re l     # Read the last record

# Here we're considering we have already opened the relation
# Problem 3:
Key 10   # Request system to prompt for the key value 10
re 10    # Read the record associated with the key value 10
re n     # Read the next value
re n     # And then the next one

