/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INFindDeviceAndPlaySoundIntentExport.h>

@class NSArray, NSNumber, NSString;

@interface INFindDeviceAndPlaySoundIntent : INIntent <INFindDeviceAndPlaySoundIntentExport>

@property (nonatomic,copy,readonly) NSArray * devices; 
@property (nonatomic,copy,readonly) NSNumber * isStopRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)devices;
-(id)verb;
-(void)setDevices:(NSArray *)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(NSNumber *)isStopRequest;
-(void)setIsStopRequest:(NSNumber *)arg1 ;
-(id)initWithDevices:(id)arg1 isStopRequest:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
@end

