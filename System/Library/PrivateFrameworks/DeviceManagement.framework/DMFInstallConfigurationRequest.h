/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSDictionary;

@interface DMFInstallConfigurationRequest : DMFTaskRequest {

	unsigned long long _type;
	NSString* _managingProfileIdentifier;
	NSDictionary* _profile;

}

@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * managingProfileIdentifier;              //@synthesize managingProfileIdentifier=_managingProfileIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * profile;                            //@synthesize profile=_profile - In the implementation block
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(void)setProfile:(NSDictionary *)arg1 ;
-(void)setManagingProfileIdentifier:(NSString *)arg1 ;
-(NSDictionary *)profile;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)managingProfileIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
@end
