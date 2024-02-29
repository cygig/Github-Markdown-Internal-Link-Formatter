# Github Markdown Internal Link Formatter
 
Github is able to generate anchors from headings, but the generated anchor names may not be intuitive to write out. Hence this program will help format the heading into a clickable link.

I will be releasing it as a Windows console program.

The anchor name will derived from a transformed heading name, with the transformations being:
- Upper case letters will become lower case.
- Numbers remain untouched.
- Spaces will become hypens '-'.
- Any other symbols will be removed.
- Any number of '#' and a space in beginning will be ignored

# Example 1
```
# My *Awesome* Heading 1
```
will have the anchor as
```
#my-awesome-heading-1
```
And a link to the heading will be
```
[My *Awesome* Heading 1](#my-awesome-heading-1)
```

# Example 2
```
### Contents of myInt[0]
```

will become
```
[Contents of myInt[0]](#contents-of-myInt0)
```

Note that you can replace `Contents of myInt[0]` with any other link name you fancy, and it will still point to `### Contents of myInt[0]`.