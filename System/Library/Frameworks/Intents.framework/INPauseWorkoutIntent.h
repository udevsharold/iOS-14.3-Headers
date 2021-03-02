/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INPauseWorkoutIntentExport.h>

@class INSpeakableString, NSString;

@interface INPauseWorkoutIntent : INIntent <INPauseWorkoutIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workoutName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(id)localizeValueOfSlotDescription:(id)arg1 withLocalizer:(id)arg2 ;
-(INSpeakableString *)workoutName;
-(void)setWorkoutName:(INSpeakableString *)arg1 ;
-(id)initWithWorkoutName:(id)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
@end
