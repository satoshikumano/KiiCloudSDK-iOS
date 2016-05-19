//
//  KiiGCMFields.h
//  KiiSDK-Private
//
//  Created by Riza Alaudin Syah on 1/28/13.
//  Copyright (c) 2013 Kii Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>
/** Class that encapsulate GCM message fields data structure
 */
@interface KiiGCMFields : NSObject



/**String. Not required.	If provided, it will be used as the GCM notification collapse_key*
 */
@property(nonatomic,nullable) NSString* collapseKey;
/**Boolean. Not required.	If provided, it will be used as the GCM notification delay_while_idle*
 */
@property(nonatomic,nullable) NSNumber* delayWhileIdle;
/**Integer. Not required.	If provided, it will be used as the GCM notification time_to_live*
 */
@property(nonatomic,nullable) NSNumber* timeToLive;

/**String. Not required.	If provided, it will be used as the GCM restricted_package_name*
 */
@property(nonatomic,nullable) NSString* restrictedPackageName;
/**Boolean. Not required.
 If true, the only system that can be enabled is “GCM” - no other system will be accepted.	If provided, it will be used as the GCM dry_run*

 */
@property(nonatomic,nullable) NSNumber* dryRun;

/** Field creation constructor, automatically set enabled = true to GCM Field
 */
+(nonnull KiiGCMFields*)createFields;

/**Set Dictionary with the data that will be sent only to Android-GCM devices.
 This data must not contain GCM reserved payload keys, please check KiiPushMessage documentation.
@param dict a Dictionary object contains one level json dictionary data
 */
-(void) setSpecificData:(nullable NSDictionary*)dict;

/**Generate formatted fields
 @return dictionary Generated fields, useful for testing purpose.
 */
-(nonnull NSDictionary*)generateFields;
@end
