# ProgrammingTechniques - Repository

Practicing competitive programming. Here you will find some algorithms, tips and learning stuff

### 🚥 [driversNeedToStopHere](driversNeedToStopHere)

This algorithm is from the following free online course lesson: <https://neps.academy/br/course/tecnicas-de-programacao-(codcad)/lesson/algoritmo-guloso>

In this code, I could notice some new and interesting information about c++ and programming tips. Let me show you below:

- using ``#define`` can help us to determine the maximum entry in a vector for example.

- we can read more than one value per time in c++! Useful.
```cpp
    int n,d;
    std::cin >> n >> d;
```

- sort method has the following template
```cpp
sort('array_begin','array_end', 'comparision method'); 
```
the comparision method is the one used as a parameter for sort function to sort the array.

- to verify if a variable still have a value, you can use if like this:
```cpp
  if (d){ //! Se o d ainda possuir algum valor
        cout << "Impossível\n";
    }
```
