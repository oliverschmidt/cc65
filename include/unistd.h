/*****************************************************************************/
/*                                                                           */
/*                                 unistd.h                                  */
/*                                                                           */
/*                  Unix compatibility header file for cc65                  */
/*                                                                           */
/*                                                                           */
/*                                                                           */
/* (C) 2003      Ullrich von Bassewitz                                       */
/*               Römerstrasse 52                                             */
/*               D-70794 Filderstadt                                         */
/* EMail:        uz@cc65.org                                                 */
/*                                                                           */
/*                                                                           */
/* This software is provided 'as-is', without any expressed or implied       */
/* warranty.  In no event will the authors be held liable for any damages    */
/* arising from the use of this software.                                    */
/*                                                                           */
/* Permission is granted to anyone to use this software for any purpose,     */
/* including commercial applications, and to alter it and redistribute it    */
/* freely, subject to the following restrictions:                            */
/*                                                                           */
/* 1. The origin of this software must not be misrepresented; you must not   */
/*    claim that you wrote the original software. If you use this software   */
/*    in a product, an acknowledgment in the product documentation would be  */
/*    appreciated but is not required.                                       */
/* 2. Altered source versions must be plainly marked as such, and must not   */
/*    be misrepresented as being the original software.                      */
/* 3. This notice may not be removed or altered from any source              */
/*    distribution.                                                          */
/*                                                                           */
/*****************************************************************************/



#ifndef _UNISTD_H
#define _UNISTD_H



/*****************************************************************************/
/*	       	   	  	     Data				     */
/*****************************************************************************/



/* Predefined file handles */
#define STDIN_FILENO	0
#define STDOUT_FILENO	1
#define STDERR_FILENO	2



/*****************************************************************************/
/*		   		     Code				     */
/*****************************************************************************/



/* Files */
int __fastcall__ write (int fd, const void* buf, unsigned count);
int __fastcall__ read (int fd, void* buf, unsigned count);
off_t __fastcall__ lseek (int fd, off_t offset, int whence);
int __fastcall__ unlink (const char* name);	/* Same as remove() */

/* Directories */
int __fastcall__ chdir (const char* name);
int mkdir (const char* name, ...);	  	/* May take a mode argument */
int __fastcall__ rmdir (const char* name);

/* Others */
unsigned __fastcall__ sleep (unsigned seconds);



/* End of unistd.h */
#endif



