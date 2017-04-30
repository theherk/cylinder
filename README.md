cylinder
========

    make clean run

### output ###

```
[0] % make clean run
rm -f cylinder
g++ *.cpp -o cylinder
./cylinder
### Interactive ###

Please enter the radius: 5
Please enter the height: 8
Cylinder dimensions:
        radius: 5
        height: 8
        area:   408.2


### Non-Interactive ###

Cylinder dimensions:
        radius: 3
        height: 10
        area:   244.92


### Using TestCylinder Interactively ###

Please enter the height: 8
Cylinder dimensions:
        radius: 3
        height: 8
        area:   207.24

Cylinder dimensions:
        radius: 10
        height: 8
        area:   1130.4


### Using TestCylinder Non-Interactively ###

Cylinder dimensions:
        radius: 3
        height: 13.4
        area:   308.976

Cylinder dimensions:
        radius: 10
        height: 13.4
        area:   1469.52
```

### notes ###

Unclear on the assignment, I tried to cover all bases to provide as much possible information. I chose to leave out comments for fear that they may actual confuse the issue. The code is hopefully good enough to convey the message, but I'm not a C++ author so maybe not.

There are some places where things like overloaded operators may be an improvement over setters, and in these examples getters are of no use since the values are just straight retrievals.

The assignment does not request the use of header files, but it is a pretty good practice to implement by default. It should be pretty straight-forward to modify the class.cpp files to declare and implement the classes. I'm happy to help with that.

You may also notice I don't use `using namespace std;`. It isn't a big deal, and don't let it weigh you down while learning, but I've heard it isn't a good practice. You can see an explanation on [StackOverflow](http://stackoverflow.com/a/1452738/2081835).

I never use `this->` unless it is required to resolve ambiguity. It is perfectly fine to, but unnecessary.

I have also provided a markup of your code as a [Gist](https://gist.github.com/theherk/d4323a54a2de5b449830b1df3d829b98).
