## Templates

class is a template of an object
template is a template of an object

- Templates are paramterized classes

Why use templates?
- Dry principle is followed (don't write same code again and again)
- Generic Programming (for general use)

Syntax for template:

T can be int, float, char etc

```
template \<class T>

class vector

{

    T* arr;
    public:
        vector(T* ar)
        {
            // code
        }
}
```

Using templates:

```

    vector<int> myIVec(ptr);

    vector<float> myfVec(ptr);

```


## Template with multiple parameters

```

template<class T1, class T2>

class {{classname}}
{
    // body of class   
}


```