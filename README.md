What makes a good hash function?

- Fast (We have to calculate the hash value whenever we retrieve or add data so it needs to be in constant time)

- Deterministic - Same input gives the same output

- Distributed - Cluttered output is not preferred

Problems -

- Keys can be nonneg integers
- Gigantic Memory Hog

Solution 1 - Keys can be nonneg int

- Prehashing - Prehash a particular key such that it results in a nonneg integer

Solution 2 - Gigantic Memory Hog

- Create a hash function which transforms a key produced in a step 1 into an index of a sizeable array

(This is a problem because of the pigeon hole principle, the number of slots for your pigeons is way less than the total number of pigeons)

- Also, it can result in possible collisions such that h(i) = h(j) but i != j

How to handle collisions?

- Separate Chaining - Chaining
- Open Addressing - Linear Probing, Quadratic Probing, Double Hashing
