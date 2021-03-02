/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MTPAFPlaylist, MTPAFKit;

@interface MTPAFPlaylistKitBinding : NSObject {

	MTPAFPlaylist* _playlist;
	MTPAFKit* _pafKit;

}

@property (nonatomic,retain) MTPAFPlaylist * playlist;              //@synthesize playlist=_playlist - In the implementation block
@property (nonatomic,retain) MTPAFKit * pafKit;                     //@synthesize pafKit=_pafKit - In the implementation block
-(MTPAFKit *)pafKit;
-(MTPAFPlaylist *)playlist;
-(void)setPlaylist:(MTPAFPlaylist *)arg1 ;
-(void)setPafKit:(MTPAFKit *)arg1 ;
@end
