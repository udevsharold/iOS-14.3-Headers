/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSNumber, INConnectedCall;


@protocol INStartCallIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSNumber * shouldDoEmergencyCountdown; 
@property (assign,nonatomic) long long confirmationReason; 
@property (nonatomic,copy) INConnectedCall * startedCall; 
@required
-(long long)code;
-(NSNumber *)shouldDoEmergencyCountdown;
-(void)setShouldDoEmergencyCountdown:(id)arg1;
-(INConnectedCall *)startedCall;
-(void)setStartedCall:(id)arg1;
-(long long)confirmationReason;
-(void)setConfirmationReason:(long long)arg1;

@end
