/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ENEntity;

@interface ENActiveEntity : NSObject <NSSecureCoding, NSCopying> {

	int _activeStatus;
	ENEntity* _entity;

}

@property (nonatomic,copy) ENEntity * entity;               //@synthesize entity=_entity - In the implementation block
@property (assign,nonatomic) int activeStatus;              //@synthesize activeStatus=_activeStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEntity:(ENEntity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ENEntity *)entity;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setActiveStatus:(int)arg1 ;
-(int)activeStatus;
-(id)initWithEntity:(id)arg1 activeStatus:(int)arg2 ;
@end

