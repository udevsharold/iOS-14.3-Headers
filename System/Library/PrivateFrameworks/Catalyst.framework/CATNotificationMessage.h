/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATMessage.h>

@class NSUUID, NSString, NSDictionary;

@interface CATNotificationMessage : CATMessage {

	NSUUID* _taskUUID;
	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSUUID * taskUUID;                    //@synthesize taskUUID=_taskUUID - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setTaskUUID:(NSUUID *)arg1 ;
-(NSUUID *)taskUUID;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTaskUUID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
@end
