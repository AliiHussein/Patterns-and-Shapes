# Patterns-and-Shapes
Creating patterns and shapes using C &amp; C++ Language.

## Quick Tips To draw any shape 
1. Divide it into multiple shapes (in case of complex shapes).
2. To control the unit height and width of the shape create a nested loop.
```
for(int i = 0; i < height; i++){ // Controls the Height length using the for loop condition
		
	for(int j = 0; j < width; j++){ // Controls the width length (for loop condition) and shape (body)
		
	}
	printf("\n"); // To go to next line
		
}
```
3. The outer loop controls the height and the inner loop controls the width.
4. In case the shape is divided to multiple shapes create a nested loop for each shape indepentendly.

## Link
* https://www.faceprep.in/c/pattern-programs-in-c/

## Outputs

### Solid Rectangle
```
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
* * * * * * *
```

### Hollow Rectangle
```
* * * * * * * *
*             *
*             *
*             *
* * * * * * * *
```

## Half Pyramid
```
*
* *
* * *
* * * *
```

## Inverted Half Pyramid
```
* * * *
* * *
* *
*
```

## Hollow Inverted half pyramid
```
* * * * * *
*       *
*     *
*   *
* *
*
```
## Full pyramid
```
    *
   ***
  *****
 *******
*********
```
## Hollow Full pyramid
```
    *    
   * *
  *   *
 *     *
*********
```

## Inverted full pyramid
```
*********
 *******
  *****
   ***
    *
```

## Hollow inverted full pyramid
```
*********
 *     *
  *   *
   * *
    *
```

## Half pyramid by numbers
```
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

## Half pyramid by numbers inverted
```
1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1
```

## Hollow half pyramid by numbers
```
1 
1 2
1   3
1     4
1 2 3 4 5
```

## House
```
    *    
   ***
  *****
 *******
*********
***   ***
***   ***
***   ***
```
## Heart
```
  *******   *******  
 ********* *********
*********************
*********************
*********************
 *******************
  *****************
   ***************
    *************
     ***********
      *********      
       *******
        *****
         ***
          *
```
