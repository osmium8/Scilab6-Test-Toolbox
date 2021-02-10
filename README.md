## Steps to use Transpose function
1. Clone/download this repository
2. Open **Scilab**
3. Click on file browser icon and select the directory of this repository `"Scilab6-Test-Toolbox"`
4. In **Scilab Console** execute following commands
    1. `exec builder.sce` (if any prompt 'help_from_sci', press `Create anyway`)
    2. `exec loader.sce`
    3.  Declare matrix
    
        
        `matrix = [1,1,1; 2,2,2; 3,3,3]`
        ```
        1 1 1
        2 2 2
        3 3 3
        ```
        
        
        Call the function `transpose` & pass `matrix` as parameter
        
        ```
        transpose_matrix = transpose(matrix)
        ```
    4. Now transpose of "matrix" is saved in "transpose_matrix"
    5. `transpose_matrix`
        
         ```
        1 2 3
        1 2 3
        1 2 3
        ```
---


This repository is a test toolbox for Scilab. It requires "thirdparty" directory which can be downloaded as "external-library.zip" file from the page: https://scilab.in/fossee-scilab-toolbox. The "thirdparty" directory contains compiled library for a simple "multiplication" function written in C. After copying the "thirdparty" directory to the toolbox directory, on the scilab console run "exec builder.sce" to build the toolbox and then run "exec loader.sce" to load the toolbox.  Type "help" in the scilab console and browse through the help content of "test_toolbox". The external-library.zip file also contains separate instructions to work with MinGW on Windows OS.

This toolbox overall demonstrates
1. How to add a function defined in C in scilab
2. How to add a function defined in Scilab in Scilab
3. How to write help for the added functions
4. How to create a toolbox out of the above functions.
