/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INPlayMediaIntentExport.h>

@class NSArray, INMediaItem, NSNumber, NSDate, NSString, INMediaSearch, INPrivatePlayMediaIntentData;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>

@property (nonatomic,copy,readonly) NSArray * mediaItems; 
@property (nonatomic,copy,readonly) INMediaItem * mediaContainer; 
@property (nonatomic,copy,readonly) NSNumber * playShuffled; 
@property (nonatomic,readonly) long long playbackRepeatMode; 
@property (nonatomic,copy,readonly) NSNumber * resumePlayback; 
@property (nonatomic,readonly) long long playbackQueueLocation; 
@property (nonatomic,copy,readonly) NSNumber * playbackSpeed; 
@property (nonatomic,copy,readonly) INMediaSearch * mediaSearch; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSArray * buckets; 
@property (nonatomic,copy) NSString * recoID; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSArray * audioSearchResults; 
@property (nonatomic,copy) NSArray * alternativeResults; 
@property (assign,nonatomic) long long parsecCategory; 
@property (nonatomic,copy) NSString * proxiedBundleIdentifier; 
@property (nonatomic,copy) INPrivatePlayMediaIntentData * privatePlayMediaIntentData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(NSArray *)alternativeResults;
-(void)setAlternativeResults:(NSArray *)arg1 ;
-(NSArray *)audioSearchResults;
-(void)setAudioSearchResults:(NSArray *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(INMediaItem *)mediaContainer;
-(void)setMediaContainer:(INMediaItem *)arg1 ;
-(INMediaSearch *)mediaSearch;
-(void)setMediaItems:(NSArray *)arg1 ;
-(void)setMediaSearch:(INMediaSearch *)arg1 ;
-(NSString *)recoID;
-(long long)parsecCategory;
-(void)setParsecCategory:(long long)arg1 ;
-(void)setPlayShuffled:(NSNumber *)arg1 ;
-(long long)playbackQueueLocation;
-(void)setPlaybackQueueLocation:(long long)arg1 ;
-(long long)playbackRepeatMode;
-(void)setPlaybackRepeatMode:(long long)arg1 ;
-(INPrivatePlayMediaIntentData *)privatePlayMediaIntentData;
-(void)setPrivatePlayMediaIntentData:(INPrivatePlayMediaIntentData *)arg1 ;
-(NSString *)proxiedBundleIdentifier;
-(void)setProxiedBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)resumePlayback;
-(void)setResumePlayback:(NSNumber *)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8 ;
-(id)_metadata;
-(BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
-(NSNumber *)playbackSpeed;
-(void)setPlaybackSpeed:(NSNumber *)arg1 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)_spotlightContentType;
-(NSArray *)buckets;
-(id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)arg1 context:(unsigned long long)arg2 error:(id*)arg3 ;
-(NSDate *)expirationDate;
-(void)setVerb:(id)arg1 ;
-(id)domain;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(NSArray *)mediaItems;
-(void)setRecoID:(NSString *)arg1 ;
-(SCD_Struct_IN4)_intents_preferredScaledImageSize;
-(id)_keyCodableAttributes;
-(void)setBuckets:(NSArray *)arg1 ;
-(NSNumber *)playShuffled;
@end
