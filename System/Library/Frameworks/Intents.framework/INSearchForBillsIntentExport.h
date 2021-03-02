/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INBillPayee, INDateComponentsRange;


@protocol INSearchForBillsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INBillPayee * billPayee; 
@property (nonatomic,copy) INDateComponentsRange * paymentDateRange; 
@property (assign,nonatomic) long long billType; 
@property (assign,nonatomic) long long status; 
@property (nonatomic,copy) INDateComponentsRange * dueDateRange; 
@required
-(id)init;
-(long long)billType;
-(long long)status;
-(INDateComponentsRange *)dueDateRange;
-(void)setDueDateRange:(id)arg1;
-(INDateComponentsRange *)paymentDateRange;
-(void)setPaymentDateRange:(id)arg1;
-(void)setBillPayee:(id)arg1;
-(void)setBillType:(long long)arg1;
-(INBillPayee *)billPayee;
-(void)setStatus:(long long)arg1;

@end
