//
//  Concierge.h
//
//  Copyright (c) 2015 Cloud.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Concierge : NSObject

/** @name Initializing a Concierge reference */

/**
 * Initialize this Concierge reference with unique key that identifies your application.
 *
 * @param key The Concierge application key (ie: ya23qwiu129dsaw8q2390d0acjxkv3403sde=)
 */
+ (void)setApplicationKey:(NSString *)key;


/** @name Providing Concierge session data */

/**
 * Sets the name of the customer as it will be displayed to the agent.
 *
 * @param name The customer name (ie. John Appleseed)
 */
+ (void)setCustomerName:(NSString *)name;

/**
 * Sets the custom attributes associated with this Concierge session.
 *
 * @param customAttributes A dictionary containing keys and associated values.
 */
+ (void)setCustomAttributes:(NSDictionary *)customAttributes;


/** @name Starting Concierge session */

/**
 * Presents the Concierge UI and establishes the session call.
 */
+ (void)startConciergeSession;


/** @name Concierge session state */

/**
 * Returns a boolean that tells whether a Concierge session is active.
 *
 * @return `YES` if a Concierge session is active, otherwise `NO`.
 */
+ (BOOL)isConciergeSessionActive;


/**
 * Returns the Concierge version.
 *
 * @return the Concierge version.
 */
+ (NSString *)version;

- (instancetype)init NS_UNAVAILABLE;

@end
