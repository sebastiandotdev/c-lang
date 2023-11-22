# Guide for project

Hello,

welcome repository `c-lang`

## IDE

The `IDE` we use is `vscode` please, create folder local with `settings.json` add the following configuration

```json
{
    "files.associations": {
        "stdio.h": "c"
    },
    "[c]": {
        "editor.wordBasedSuggestions": "currentDocument",
        "editor.suggest.insertMode": "replace",
        "editor.semanticHighlighting.enabled": true,
        "editor.formatOnSave": true
    },
    "C_Cpp.clang_format_style": "{ BasedOnStyle: LLVM, IndentWidth: 2, BreakBeforeBraces: Attach }"
}
```


## Build