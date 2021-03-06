/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding> {

	long long _globalContentPreviewSetting;
	long long _globalSpokenNotificationSetting;

}

@property (assign,nonatomic) long long globalContentPreviewSetting;                  //@synthesize globalContentPreviewSetting=_globalContentPreviewSetting - In the implementation block
@property (assign,nonatomic) long long globalSpokenNotificationSetting;              //@synthesize globalSpokenNotificationSetting=_globalSpokenNotificationSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setGlobalSpokenNotificationSetting:(long long)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setGlobalContentPreviewSetting:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)globalContentPreviewSetting;
-(id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2 ;
-(long long)globalSpokenNotificationSetting;
-(void)encodeWithCoder:(id)arg1 ;
@end

