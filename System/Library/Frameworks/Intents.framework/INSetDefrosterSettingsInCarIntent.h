/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetDefrosterSettingsInCarIntentExport.h>

@class NSNumber, INSpeakableString, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (nonatomic,copy,readonly) NSNumber * enable; 
@property (nonatomic,readonly) long long defroster; 
@property (nonatomic,copy,readonly) INSpeakableString * carName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSNumber *)enable;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setCarName:(INSpeakableString *)arg1 ;
-(id)_metadata;
-(INSpeakableString *)carName;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 ;
-(void)setEnable:(NSNumber *)arg1 ;
-(void)setDefroster:(long long)arg1 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(long long)defroster;
-(id)initWithEnable:(id)arg1 defroster:(long long)arg2 carName:(id)arg3 ;
@end
