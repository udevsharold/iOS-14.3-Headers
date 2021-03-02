/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AVTBackendVersion : NSObject <NSSecureCoding> {

	double _backendVersion;
	double _avatarKitVersion;

}

@property (nonatomic,readonly) double backendVersion;                //@synthesize backendVersion=_backendVersion - In the implementation block
@property (nonatomic,readonly) double avatarKitVersion;              //@synthesize avatarKitVersion=_avatarKitVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentVersion;
+(id)versionFileLocationForStoreLocation:(id)arg1 ;
+(id)versionFromDiskAtLocation:(id)arg1 error:(id*)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithBackendVersion:(double)arg1 avatarKitVersion:(double)arg2 ;
-(double)backendVersion;
-(double)avatarKitVersion;
-(BOOL)saveToDiskAtLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
