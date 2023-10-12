#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int main(int ac, char **av) {
    char *shell;
    gid_t gid;
    uid_t uid;
    char * argv[2];

    argv[0] = "sh";
    argv[1] =  NULL;
    int nbr = atoi(av[1]);
    if (nbr != 423) {
        fwrite("No !\n", 1, 5, stderr);
    } else {
        shell = strdup("/bin/sh");
        gid = getegid();
        uid = geteuid();
        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);
        execv("/bin/sh", argv);
    }
    return 0;
}
