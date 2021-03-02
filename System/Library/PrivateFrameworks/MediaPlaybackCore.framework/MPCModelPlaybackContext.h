/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPPlaybackContext.h>
#import <libobjc.A.dylib/MPCModelPlaybackRequestEnvironmentConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextUserIdentityConsuming.h>
#import <libobjc.A.dylib/MPCPlaybackContextPrivateListeningOverridable.h>

@class MPCPlaybackRequestEnvironment, MPModelRequest, MPIdentifierSet, NSDictionary, MPModelGenericObject, NSString, ICUserIdentity, NSNumber;

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming, MPCPlaybackContextUserIdentityConsuming, MPCPlaybackContextPrivateListeningOverridable> {

	BOOL _skipEncodingMediaLibraryUniqueID;
	MPCPlaybackRequestEnvironment* _playbackRequestEnvironment;
	MPModelRequest* _request;
	MPIdentifierSet* _startItemIdentifiers;
	NSDictionary* _startTimeModifications;
	NSDictionary* _endTimeModifications;
	NSDictionary* _assetStoreFronts;
	MPModelGenericObject* _fallbackSectionRepresentation;
	NSString* _encodedMediaLibraryUniqueID;

}

@property (nonatomic,copy,readonly) NSString * encodedMediaLibraryUniqueID;                         //@synthesize encodedMediaLibraryUniqueID=_encodedMediaLibraryUniqueID - In the implementation block
@property (assign,nonatomic) BOOL skipEncodingMediaLibraryUniqueID;                                 //@synthesize skipEncodingMediaLibraryUniqueID=_skipEncodingMediaLibraryUniqueID - In the implementation block
@property (nonatomic,copy) MPCPlaybackRequestEnvironment * playbackRequestEnvironment;              //@synthesize playbackRequestEnvironment=_playbackRequestEnvironment - In the implementation block
@property (nonatomic,copy) MPModelRequest * request;                                                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) MPIdentifierSet * startItemIdentifiers;                                  //@synthesize startItemIdentifiers=_startItemIdentifiers - In the implementation block
@property (nonatomic,copy) NSDictionary * startTimeModifications;                                   //@synthesize startTimeModifications=_startTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * endTimeModifications;                                     //@synthesize endTimeModifications=_endTimeModifications - In the implementation block
@property (nonatomic,copy) NSDictionary * assetStoreFronts;                                         //@synthesize assetStoreFronts=_assetStoreFronts - In the implementation block
@property (nonatomic,copy) MPModelGenericObject * fallbackSectionRepresentation;                    //@synthesize fallbackSectionRepresentation=_fallbackSectionRepresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) ICUserIdentity * userIdentity; 
@property (nonatomic,copy) NSNumber * privateListeningOverride; 
+(BOOL)supportsAutoPlay;
+(BOOL)supportsSecureCoding;
+(Class)queueFeederClass;
+(id)requiredPropertiesForStaticMediaClips;
-(BOOL)isSupported;
-(ICUserIdentity *)userIdentity;
-(MPIdentifierSet *)startItemIdentifiers;
-(id)init;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)privateListeningOverride;
-(MPModelRequest *)request;
-(id)descriptionComponents;
-(void)clearStartItem;
-(BOOL)containsRestorableContent;
-(void)setStartItemIdentifiers:(MPIdentifierSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRequest:(MPModelRequest *)arg1 ;
-(NSDictionary *)assetStoreFronts;
-(void)setAssetStoreFronts:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MPCPlaybackRequestEnvironment *)playbackRequestEnvironment;
-(void)setPrivateListeningOverride:(NSNumber *)arg1 ;
-(void)setPlaybackRequestEnvironment:(MPCPlaybackRequestEnvironment *)arg1 ;
-(void)getRemotePlaybackQueueRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)setStartTimeModifications:(NSDictionary *)arg1 ;
-(void)setEndTimeModifications:(NSDictionary *)arg1 ;
-(void)setSkipEncodingMediaLibraryUniqueID:(BOOL)arg1 ;
-(MPModelGenericObject *)fallbackSectionRepresentation;
-(NSDictionary *)startTimeModifications;
-(NSDictionary *)endTimeModifications;
-(void)setFallbackSectionRepresentation:(MPModelGenericObject *)arg1 ;
-(BOOL)skipEncodingMediaLibraryUniqueID;
-(void)updateRequestPlaybackEnvironment;
-(NSString *)encodedMediaLibraryUniqueID;
@end
