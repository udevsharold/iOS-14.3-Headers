/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPModelGenericObject, MPCPlayerSessionResponse, NSIndexPath;

@interface MPCPlayerSessionResponseItem : NSObject {

	NSString* _contentItemIdentifier;
	MPModelGenericObject* _metadataObject;
	MPCPlayerSessionResponse* _response;
	NSIndexPath* _indexPath;

}

@property (nonatomic,__weak,readonly) MPCPlayerSessionResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                 //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) NSString * contentItemIdentifier;                        //@synthesize contentItemIdentifier=_contentItemIdentifier - In the implementation block
@property (nonatomic,readonly) MPModelGenericObject * metadataObject;                   //@synthesize metadataObject=_metadataObject - In the implementation block
-(NSIndexPath *)indexPath;
-(id)initWithModelGenericObject:(id)arg1 indexPath:(id)arg2 response:(id)arg3 ;
-(MPModelGenericObject *)metadataObject;
-(MPCPlayerSessionResponse *)response;
-(id)play;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)contentItemIdentifier;
-(id)remove;
-(id)playOnPlayerPath:(id)arg1 ;
@end

