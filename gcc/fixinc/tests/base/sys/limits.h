

#if defined( LIMITS_IFNDEFS_CHECK )
#ifndef DBL_DIG
 #	define	DBL_DIG 	 0  /* somthin' */
#endif
#endif  /* LIMITS_IFNDEFS_CHECK */


#if defined( NESTED_MOTOROLA_CHECK )
#undef PIPE_BUF /* max # bytes atomic in write to a */
		/* PIPE */
/*#define	HUGE_VAL	3.9e+9 */ /*error value returned by Math lib*/
#endif  /* NESTED_MOTOROLA_CHECK */


#if defined( NESTED_SYS_LIMITS_CHECK )
/*
#define CHILD_MAX 20  Max, Max, ... */ /*
#define OPEN_MAX  20  Max, Max, ... */

#endif  /* NESTED_SYS_LIMITS_CHECK */


#if defined( ULTRIX_MATH_IFDEF_CHECK )
#if     defined(__GFLOAT) 
#endif  /* ULTRIX_MATH_IFDEF_CHECK */
