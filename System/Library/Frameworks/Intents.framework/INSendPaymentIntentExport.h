/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INPerson, INCurrencyAmount, NSString;


@protocol INSendPaymentIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INPerson * payee; 
@property (nonatomic,copy) INCurrencyAmount * currencyAmount; 
@property (nonatomic,copy) NSString * note; 
@required
-(INPerson *)payee;
-(id)init;
-(void)setPayee:(id)arg1;
-(INCurrencyAmount *)currencyAmount;
-(void)setCurrencyAmount:(id)arg1;
-(void)setNote:(id)arg1;
-(NSString *)note;

@end

