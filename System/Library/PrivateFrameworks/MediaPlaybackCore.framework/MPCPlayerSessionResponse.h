/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPResponse.h>

@class MPSectionedCollection, MPCMediaRemoteController;

@interface MPCPlayerSessionResponse : MPResponse {

	MPSectionedCollection* _items;
	MPCMediaRemoteController* _controller;

}

@property (nonatomic,readonly) id<MPCPlayerSessionResponseBuilder> builder; 
@property (nonatomic,readonly) MPCMediaRemoteController * controller;                    //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) MPSectionedCollection * items;                            //@synthesize items=_items - In the implementation block
+(id)builderProtocol;
-(MPCMediaRemoteController *)controller;
-(MPSectionedCollection *)items;
-(id)initWithRequest:(id)arg1 middleware:(id)arg2 ;
@end

