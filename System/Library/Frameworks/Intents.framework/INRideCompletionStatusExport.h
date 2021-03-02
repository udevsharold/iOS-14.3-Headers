/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSUserActivity, INCurrencyAmount;


@protocol INRideCompletionStatusExport <NSObject,JSExport>
@property (nonatomic,retain) NSUserActivity * completionUserActivity; 
@property (assign,getter=isCompleted,nonatomic) BOOL completed; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (assign,getter=isMissedPickup,nonatomic) BOOL missedPickup; 
@property (nonatomic,retain) INCurrencyAmount * paymentAmount; 
@property (assign,getter=isOutstanding,nonatomic) BOOL outstanding; 
@property (assign,getter=isCanceledByService,nonatomic) BOOL canceledByService; 
@required
+(BOOL)canceledByService;
+(BOOL)completed;
+(id)canceledByUser;
+(id)completedWithSettledPaymentAmount:(id)arg1;
+(id)completedWithOutstandingPaymentAmount:(id)arg1;
+(id)canceledMissedPickup;
-(BOOL)isCanceled;
-(void)setCanceledByService:(BOOL)arg1;
-(NSUserActivity *)completionUserActivity;
-(void)setCompletionUserActivity:(id)arg1;
-(void)setMissedPickup:(BOOL)arg1;
-(void)setOutstanding:(BOOL)arg1;
-(id)init;
-(INCurrencyAmount *)paymentAmount;
-(void)setPaymentAmount:(id)arg1;
-(BOOL)isMissedPickup;
-(BOOL)isOutstanding;
-(BOOL)isCanceledByService;
-(void)setCompleted:(BOOL)arg1;
-(BOOL)isCompleted;

@end
