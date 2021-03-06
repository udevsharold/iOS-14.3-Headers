/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDate, NSString;

@interface EDSearchableIndexClientState : NSObject {

	NSNumber* _transactionValue;
	long long _transaction;
	NSDate* _transactionDate;
	NSString* _systemBuildVersion;

}

@property (assign,nonatomic) long long transaction;                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionValue; 
@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;                //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
+(id)clientState;
+(id)clientStateFromData:(id)arg1 ;
+(id)transactionAttributeKey;
-(id)init;
-(NSString *)systemBuildVersion;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(void)setTransaction:(long long)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(long long)transaction;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(id)archiveRepresentation;
-(void)addTransactionValueToAttributeSet:(id)arg1 ;
-(NSNumber *)transactionValue;
@end

