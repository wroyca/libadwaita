# libadwaita - A C library

The `libadwaita` C library provides <SUMMARY-OF-FUNCTIONALITY>.


## Usage

To start using `libadwaita` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libadwaita ^<VERSION>
```

Then import the library in your `buildfile`:

```
import libs = libadwaita%lib{<TARGET>}
```


## Importable targets

This package provides the following importable targets:

```
lib{<TARGET>}
```

<DESCRIPTION-OF-IMPORTABLE-TARGETS>


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libadwaita.<VARIABLE> ?= false
```

<DESCRIPTION-OF-CONFIG-VARIABLES>
