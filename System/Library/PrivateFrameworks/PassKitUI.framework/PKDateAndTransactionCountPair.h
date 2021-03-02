/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject {

	NSDate* _date;
	unsigned long long _transactionCount;

}

@property (nonatomic,retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long transactionCount;              //@synthesize transactionCount=_transactionCount - In the implementation block
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(NSDate *)date;
-(unsigned long long)hash;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)transactionCount;
@end
