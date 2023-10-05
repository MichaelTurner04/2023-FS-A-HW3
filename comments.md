-   -2.5: Compiler warnings
-   -2.5: Missing validation
-   -1: Incorrect behavior
-   +9: Bonus

## Detailed Comments:

-   When iterating over `string`s, you should use an `unsigned int` or a `size_t`, not an `int` (since technically `int`s can be negative).
-   You did not validate user input for the encrypt/decrypt question and the continue question.
-   Your decryption algorithm was flawed; you accidentally typed `ch < 'Z'`, whereas I think you meant to type `ch < 'A'`.

Score: 103

