#include "ProcEntry.h"

void PrintProcEntry(ProcEntry *entry)
{
     unsigned long int utime = entry->utime / sysconf(_SC_CLK_TCK);
     unsigned long int stime = entry->stime / sysconf(_SC_CLK_TCK);
     fprintf(stdout, "%7d %7d %5c %5lu %5lu %7ld %-25s %-20s\n",
             entry->pid,
             entry->ppid,
             entry->state,
             utime,
             stime,
             entry->num_threads,
             entry->comm,
             entry->path);
}

