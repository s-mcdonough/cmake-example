#ifndef API_H
#define API_H

#if defined(_WIN32) || defined(_MSC_VER)
# ifdef WIN_EXPORT
#   define FOOAPI  __declspec( dllexport )
# else
#   define FOOAPI  __declspec( dllimport )
# endif
#else
# define FOOAPI __attribute__((visibility("default")))
#endif

#endif // API_H