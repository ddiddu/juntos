#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

tid_t process_create_initd (const char *file_name);
tid_t process_fork (const char *name, struct intr_frame *if_);
int process_exec (void *f_name);
int process_wait (tid_t);
void process_exit (void);
void process_activate (struct thread *next);

/*** create file descriptor for a file object ***/
int process_add_file(struct file *f_name);
/*** return file object address by searching process 
file descriptor talbe***/
struct file *process_get_file(int fd);
/*** close the file of file descriptor and initialize entry***/
void process_close_file(int fd);

#endif /* userprog/process.h */
