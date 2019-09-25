#ifndef _SEM_PROJ1_H_
#define _SEM_PROJ1_H_

struct linkedList
{
    struct task_struct * currentProcess;
    struct linkedList * next;
};
    
struct cs1550_sem
{
   int value;
   struct linkedList * queueHead;
   struct linkedList * queueTail;
};

#endif