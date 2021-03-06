/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INTask, INSpeakableString, INSpatialEventTrigger, INTemporalEventTrigger, INContactEventTrigger;


@protocol INSetTaskAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTask * targetTask; 
@property (nonatomic,copy) INSpeakableString * taskTitle; 
@property (assign,nonatomic) long long status; 
@property (assign,nonatomic) long long priority; 
@property (nonatomic,copy) INSpatialEventTrigger * spatialEventTrigger; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@property (nonatomic,copy) INContactEventTrigger * contactEventTrigger; 
@required
-(void)setPriority:(long long)arg1;
-(id)init;
-(long long)status;
-(INTask *)targetTask;
-(INSpeakableString *)taskTitle;
-(INContactEventTrigger *)contactEventTrigger;
-(void)setContactEventTrigger:(id)arg1;
-(INSpatialEventTrigger *)spatialEventTrigger;
-(void)setTargetTask:(id)arg1;
-(void)setSpatialEventTrigger:(id)arg1;
-(void)setTaskTitle:(id)arg1;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(void)setStatus:(long long)arg1;
-(long long)priority;

@end

