/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@interface RTPersistenceManagerNotificationAvailabilityDidChange : RTNotification {

	unsigned long long _availability;

}

@property (nonatomic,readonly) unsigned long long availability;              //@synthesize availability=_availability - In the implementation block
-(unsigned long long)availability;
-(id)description;
-(id)initWithAvailability:(unsigned long long)arg1 ;
@end

