/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartCallIntentExport.h>

@class INCallRecordFilter, INCallRecord, NSArray, NSString;

@interface INStartCallIntent : INIntent <INStartCallIntentExport>

@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (nonatomic,readonly) long long recordTypeForRedialing; 
@property (nonatomic,copy,readonly) INCallRecordFilter * callRecordFilter; 
@property (nonatomic,copy,readonly) INCallRecord * callRecordToCallBack; 
@property (nonatomic,readonly) long long audioRoute; 
@property (nonatomic,readonly) long long destinationType; 
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (nonatomic,readonly) long long callCapability; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(id)cd_sender;
-(long long)cd_interactionMechanism;
-(id)cd_groupName;
-(id)cd_recipients;
-(BOOL)cd_saveToPeopleStore;
-(NSArray *)contacts;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7 ;
-(BOOL)_isGroupFaceTime;
-(id)_metadata;
-(id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 preferredCallProvider:(long long)arg5 contacts:(id)arg6 ttyType:(long long)arg7 callCapability:(long long)arg8 ;
-(void)setContacts:(NSArray *)arg1 ;
-(INCallRecordFilter *)callRecordFilter;
-(void)setCallRecordFilter:(INCallRecordFilter *)arg1 ;
-(INCallRecord *)callRecordToCallBack;
-(void)setCallRecordToCallBack:(INCallRecord *)arg1 ;
-(id)initWithCallRecordFilter:(id)arg1 callRecordToCallBack:(id)arg2 audioRoute:(long long)arg3 destinationType:(long long)arg4 contacts:(id)arg5 callCapability:(long long)arg6 ;
-(id)_spotlightContentType;
-(long long)ttyType;
-(long long)callCapability;
-(id)_emptyCopy;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(void)setCallCapability:(long long)arg1 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setDomain:(id)arg1 ;
-(id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4 ;
-(void)setRecordTypeForRedialing:(long long)arg1 ;
-(long long)recordTypeForRedialing;
-(id)_dictionaryRepresentation;
-(long long)preferredCallProvider;
-(long long)audioRoute;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setDestinationType:(long long)arg1 ;
-(id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5 ;
-(void)setTTYType:(long long)arg1 ;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
-(long long)destinationType;
-(void)setAudioRoute:(long long)arg1 ;
@end

