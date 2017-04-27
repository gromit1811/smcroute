/* Daemon IPC API */
#ifndef SMCROUTE_IPC_H_
#define SMCROUTE_IPC_H_

int   ipc_init    (void);
void  ipc_exit    (void);

int   ipc_send    (int sd, char *buf, size_t len);
void *ipc_receive (int sd, char *buf, size_t len);

#endif /* SMCROUTE_IPC_H_ */

/**
 * Local Variables:
 *  indent-tabs-mode: t
 *  c-file-style: "linux"
 * End:
 */
