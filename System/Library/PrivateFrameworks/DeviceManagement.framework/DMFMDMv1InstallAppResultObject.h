/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSString;

@interface DMFMDMv1InstallAppResultObject : CATTaskResultObject {

	NSString* _bundleIdentifier;
	unsigned long long _state;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long state;                      //@synthesize state=_state - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithBundleIdentifier:(id)arg1 state:(unsigned long long)arg2 ;
-(unsigned long long)state;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
@end
