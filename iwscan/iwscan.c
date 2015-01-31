#include <stdio.h>
#include <stdlib.h>
#include <iwlib.h> // package libiw-dev

void fail(char *msg) {
    printf("%s\n", msg);
    exit(EXIT_FAILURE);
}

int main(void)
{
    wireless_scan_head head;
    wireless_scan *result;
    iwrange range;
    int sock;
    
    /* Create descriptor */
    if ((sock = iw_sockets_open()) < 0) {
        fail("Socket not created.");
    }
  
    /* Get some metadata to use for scanning */
    if (iw_get_range_info(sock, "wlan0", &range) < 0) {
        fail("Error during iw_get_range_info.");
    }

    /* Perform the scan */
    if (iw_scan(sock, "wlan0", range.we_version_compiled, &head) < 0) {
        fail("Error during iw_scan");
    }

    /* Traverse the results */
    result = head.result;
    while (NULL != result) {
        // some essid is empty
        if (strcmp(result->b.essid, "")) {
            printf("ESSID: %s\n", result->b.essid);
        }
        result = result->next;
    }
    /* Close the socket. */
    iw_sockets_close(sock);
    return (EXIT_SUCCESS);
}
