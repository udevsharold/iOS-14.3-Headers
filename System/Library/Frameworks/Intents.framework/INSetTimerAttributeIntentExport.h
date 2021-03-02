/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTimer, INSpeakableString;


@protocol INSetTimerAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (assign,nonatomic) double toDuration; 
@property (nonatomic,copy) INSpeakableString * toLabel; 
@required
-(double)toDuration;
-(id)init;
-(INSpeakableString *)toLabel;
-(void)setToLabel:(id)arg1;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(void)setToDuration:(double)arg1;

@end
