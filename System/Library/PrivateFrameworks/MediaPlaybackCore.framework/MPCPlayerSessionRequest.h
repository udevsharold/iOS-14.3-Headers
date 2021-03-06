/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPRequest.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareMetadataOperationConfiguration.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerSessionRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration> {

	MPCPlayerPath* _playerPath;
	MPPropertySet* _sessionProperties;

}

@property (nonatomic,retain) MPCPlayerPath * playerPath;                                  //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MPPropertySet * sessionProperties;                             //@synthesize sessionProperties=_sessionProperties - In the implementation block
@property (readonly) SCD_Struct_MP1 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
-(id)init;
-(MPPropertySet *)playingItemProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPPropertySet *)queueSectionProperties;
-(MPPropertySet *)queueItemProperties;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(id)middlewareClasses;
-(SCD_Struct_MP1)tracklistRange;
-(MPCPlayerPath *)playerPath;
-(void)setSessionProperties:(MPPropertySet *)arg1 ;
-(MPPropertySet *)sessionProperties;
-(NSString *)description;
@end

