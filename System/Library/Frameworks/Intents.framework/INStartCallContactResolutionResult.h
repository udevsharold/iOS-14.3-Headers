/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INPersonResolutionResult.h>

@interface INStartCallContactResolutionResult : INPersonResolutionResult
+(id)confirmationRequiredWithPersonToConfirm:(id)arg1 forReason:(long long)arg2 ;
+(id)unsupportedForReason:(long long)arg1 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1 ;
-(id)initWithPersonResolutionResult:(id)arg1 ;
@end
