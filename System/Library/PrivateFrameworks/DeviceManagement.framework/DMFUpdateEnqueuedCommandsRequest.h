/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString, NSArray;

@interface DMFUpdateEnqueuedCommandsRequest : DMFTaskRequest {

	NSString* _organizationIdentifier;
	NSArray* _addCommands;
	NSArray* _removeCommands;

}

@property (nonatomic,copy) NSString * organizationIdentifier;              //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * addCommands;                          //@synthesize addCommands=_addCommands - In the implementation block
@property (nonatomic,copy) NSArray * removeCommands;                       //@synthesize removeCommands=_removeCommands - In the implementation block
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)organizationIdentifier;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
-(NSArray *)addCommands;
-(NSArray *)removeCommands;
-(void)setAddCommands:(NSArray *)arg1 ;
-(void)setRemoveCommands:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

