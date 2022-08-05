#include<event2/event.h>
#include<stdio.h>
static void discard_cb(int severity,const char *msg){
}

static FILE *logfile=NULL;
static void write_to_file_cb(int severity,const char * msg){
  const char *s;
  if(!logfile)
    return;
  switch(severity){
    case _EVENT_LOG_DEBUG: s="debug"; break;
    case _EVENT_LOG_MSG: s="msg"; break;
    case _EVENT_LOG_WARN:
			 s="warn";
			 break;
   
    case _EVENT_LOG_ERR:
			 s="error";
			 break;

    default:   s="?"; break;
    }
   fprintf(logfile,"[%s] %s\n",s,msg);
}

void suppress_logging(void){
  event_set_log_callback(discard_cb);
}

void set_logfile(FILE * f){
  logfile=f;
  event_set_log_callback(write_to_file_cb);
}

