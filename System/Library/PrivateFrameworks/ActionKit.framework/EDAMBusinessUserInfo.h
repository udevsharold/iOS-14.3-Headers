/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMBusinessUserInfo : FATObject {

	NSNumber* _businessId;
	NSString* _businessName;
	NSNumber* _role;
	NSString* _email;
	NSNumber* _updated;

}

@property (nonatomic,retain) NSNumber * businessId;                //@synthesize businessId=_businessId - In the implementation block
@property (nonatomic,retain) NSString * businessName;              //@synthesize businessName=_businessName - In the implementation block
@property (nonatomic,retain) NSNumber * role;                      //@synthesize role=_role - In the implementation block
@property (nonatomic,retain) NSString * email;                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * updated;                   //@synthesize updated=_updated - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setEmail:(NSString *)arg1 ;
-(NSNumber *)role;
-(void)setRole:(NSNumber *)arg1 ;
-(NSNumber *)updated;
-(NSString *)email;
-(void)setBusinessId:(NSNumber *)arg1 ;
-(NSString *)businessName;
-(void)setBusinessName:(NSString *)arg1 ;
-(void)setUpdated:(NSNumber *)arg1 ;
-(NSNumber *)businessId;
@end
