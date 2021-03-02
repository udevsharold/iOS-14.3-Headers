/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRemoveProvisioningProfileRequest : DMFTaskRequest {

	NSString* _profileIdentifier;
	NSString* _managingProfileIdentifier;

}

@property (nonatomic,copy) NSString * profileIdentifier;                      //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(NSString *)profileIdentifier;
-(NSString *)managingProfileIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
