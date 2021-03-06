/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface FCWebAccessEntry : NSObject {

	NSString* _email;
	NSString* _purchaseID;
	NSString* _purchaseReceipt;
	NSDate* _lastRetryAttemptTime;
	NSString* _identifier;
	NSString* _tagID;

}

@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * tagID;                           //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                      //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * email;                           //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * purchaseReceipt;                 //@synthesize purchaseReceipt=_purchaseReceipt - In the implementation block
@property (nonatomic,copy) NSDate * lastRetryAttemptTime;              //@synthesize lastRetryAttemptTime=_lastRetryAttemptTime - In the implementation block
-(void)setEmail:(NSString *)arg1 ;
-(void)setPurchaseID:(NSString *)arg1 ;
-(id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastRetryAttemptTime:(id)arg4 email:(id)arg5 purchaseReceipt:(id)arg6 ;
-(NSString *)purchaseID;
-(NSString *)email;
-(NSDate *)lastRetryAttemptTime;
-(void)setPurchaseReceipt:(NSString *)arg1 ;
-(void)setLastRetryAttemptTime:(NSDate *)arg1 ;
-(void)setTagID:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)dictionaryRepresentation;
-(NSString *)tagID;
-(NSString *)purchaseReceipt;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
@end

