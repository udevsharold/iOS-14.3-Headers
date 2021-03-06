/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartVideoCallIntentExport.h>

@class NSArray, NSString;

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>

@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (assign,nonatomic) long long audioRoute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cd_sender;
-(long long)cd_interactionMechanism;
-(id)cd_groupName;
-(id)cd_recipients;
-(BOOL)cd_saveToPeopleStore;
-(NSArray *)contacts;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(id)_metadata;
-(void)setContacts:(NSArray *)arg1 ;
-(id)_spotlightContentType;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(id)initWithContacts:(id)arg1 ;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(long long)audioRoute;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setAudioRoute:(long long)arg1 ;
@end

