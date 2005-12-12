/*
 * ldns-threshold update
 *
 * Periodicly look at the defined secure entry point(s) and look
 * for changes in the keyset. If the changes are valid (i.e. 
 * threshold signed) update the keyset on the system.
 *
 * The keys are kept in the file /etc/resolvkeys.conf
 *
 * This program acts as daemon, detaches, writes pid, etc.
 *
 * In the future we may need some mechanism to notify the
 * users - maybe something like D-Bus could do the trick.
 * For now, just lurk in the back ground
 * 
 * (c) NLnet Labs, 2005
 *
 * See the file LICENSE for the license
 */

/*
 * program sequence 
 *
 * what some secure entry points for diffs in the key listing
 * use threshold signing to validate the changes
 * When I change occurs put the new key set in the file
 * and mail root or somebody else
 */

/* synopsis
 * -i <interval in minutes> -m <email address>
 */

/* file layout
 * 
 */



#include "config.h"
#include <ldns/dns.h>
