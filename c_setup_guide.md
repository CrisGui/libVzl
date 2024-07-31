# Project organization
Projects must be split into modules and each module must be dedicated to a 
specific branch or function of the project.

For example:
```text
.
|- database
|- protocol
|- router
```

# File extensions
C projects are only allowed to have `.c` and `.h` files for its logic, interface
and implementation.

Any other extension will be consider non-canonical and will be consider as a bad 
use of this proposal.

# Folder structure
> General Purpose Folders (CPF) are the most basic folder structures that
> programmers most define for a good project set up.

All _GPF_ names must be: 
1. A full word without any abbreviation.
2. Only one word long.
3. In singular.
4. Capitalize.

## Available names
### Source
Source files (`.c`) are stored here

### Include
Header files (`.h`) are stored here

### Library
Where must be all third-party code needed.

### Test
Where must be all the *no unit-test tests*.

### Documentation
Where must be all the documentation.

### Configuration
Where must be all the optional and require configurations.

### Vendor
Where must be all the *non-code related* yet require by the module (i.e. icons).
