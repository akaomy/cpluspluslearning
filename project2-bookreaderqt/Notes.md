### code pieces that I found curious reading codebase for https://github.com/buggins/coolreader

1) readability:
- writing cases for switch control structure in one line
<code>
bookformats.cpp
...
switch (fmt) {
        case doc_format_fb2: return lString32("FB2");
        case doc_format_fb3: return lString32("FB3");
        case doc_format_txt: return lString32("TXT");...
</code>

- not using {}
<code>
bookformats.cpp
...
  if (pathName.endsWith(".fb2"))
      return doc_format_fb2;
  if (pathName.endsWith(".fb3"))
      return doc_format_fb3;
...
</code>

2) not so familiar use of c++ and developer's defined definitions:
- "virtual" (chmfmt.cpp line 97)
- "virtual lverror_t Seek..." (chmfmt.cpp line 97)
- "virtual lverror_t Tell( lvpos_t * pPos )" (chmfmt.cpp line 126) etc..
- use shell inside cpp file? (line 1134 chmfmt.cpp)
<code>
  #if DUMP_CHM_DOC==1
      LVStreamRef out = LVOpenFileStream(U"chm-toc.xml", LVOM_WRITE);
      if ( !out.isNull() )
      doc->saveToStream( out, NULL, true );
  #endif
</code>

3) familiar but fairly new definitions for me:
- "struct" (chmfmt.cpp line 38)
- example of use "enum" (includes/bookformats.h line 29)
<code>
  typedef enum {
  doc_format_none,
  doc_format_fb2,
  ...
  doc_format_max = doc_format_odt
  } doc_format_t;
</code>