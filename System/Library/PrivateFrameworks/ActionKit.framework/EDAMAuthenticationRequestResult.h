/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMAuthenticationRequestResult : FATObject {

	NSNumber* _userId;
	NSString* _userEmail;
	NSNumber* _result;

}

@property (nonatomic,retain) NSNumber * userId;                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * userEmail;              //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,retain) NSNumber * result;                 //@synthesize result=_result - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)userId;
-(void)setResult:(NSNumber *)arg1 ;
-(NSNumber *)result;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(void)setUserId:(NSNumber *)arg1 ;
@end

