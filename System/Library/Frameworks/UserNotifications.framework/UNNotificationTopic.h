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

@class NSString;

@interface UNNotificationTopic : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _displayName;
	unsigned long long _priority;
	NSString* _sortIdentifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                 //@synthesize priority=_priority - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortIdentifier;              //@synthesize sortIdentifier=_sortIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)topicWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 ;
-(id)_description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)sortIdentifier;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 displayName:(id)arg2 priority:(unsigned long long)arg3 sortIdentifier:(id)arg4 ;
-(unsigned long long)priority;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)displayName;
@end
