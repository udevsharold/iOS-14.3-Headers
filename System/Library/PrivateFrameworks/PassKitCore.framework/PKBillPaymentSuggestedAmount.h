/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDecimalNumber;

@interface PKBillPaymentSuggestedAmount : NSObject {

	NSString* _title;
	NSString* _message;
	unsigned long long _category;
	NSDecimalNumber* _amount;
	long long _priority;
	long long _merchantCategory;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                         //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * amount;                   //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) long long merchantCategory;               //@synthesize merchantCategory=_merchantCategory - In the implementation block
@property (assign,nonatomic) long long priority;                       //@synthesize priority=_priority - In the implementation block
-(void)setPriority:(long long)arg1 ;
-(long long)compare:(id)arg1 ;
-(unsigned long long)category;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(unsigned long long)hash;
-(void)setCategory:(unsigned long long)arg1 ;
-(NSDecimalNumber *)amount;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(id)initWithAmount:(id)arg1 category:(unsigned long long)arg2 ;
-(long long)merchantCategory;
-(void)setMerchantCategory:(long long)arg1 ;
-(long long)priority;
-(NSString *)title;
@end

