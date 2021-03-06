/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UNNotificationTrigger : NSObject <NSCopying, NSSecureCoding> {

	BOOL _repeats;

}

@property (nonatomic,readonly) BOOL repeats;              //@synthesize repeats=_repeats - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)repeats;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)nextTriggerDate;
-(id)description;
-(id)_init;
-(BOOL)isEqual:(id)arg1 ;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(double)_retroactiveTriggerHysteresis;
-(id)_initWithRepeats:(BOOL)arg1 ;
-(id)nextTriggerDateAfterLastTriggerDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(BOOL)willTriggerAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

