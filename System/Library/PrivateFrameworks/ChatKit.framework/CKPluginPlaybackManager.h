/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKPluginPlaybackManagerDelegate;
@class NSMutableArray;

@interface CKPluginPlaybackManager : NSObject {

	unsigned long long _currentIndex;
	BOOL _isPlayingBack;
	id<CKPluginPlaybackManagerDelegate> _delegate;
	NSMutableArray* __pluginItems;

}

@property (setter=_setPluginItems:,nonatomic,retain) NSMutableArray * _pluginItems;              //@synthesize _pluginItems=__pluginItems - In the implementation block
@property (assign,setter=_setPlayingBack:,nonatomic) BOOL isPlayingBack;                         //@synthesize isPlayingBack=_isPlayingBack - In the implementation block
@property (assign,nonatomic,__weak) id<CKPluginPlaybackManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(void)stopPlayback;
-(void)_cleanup;
-(void)dealloc;
-(void)setDelegate:(id<CKPluginPlaybackManagerDelegate>)arg1 ;
-(NSMutableArray *)_pluginItems;
-(void)_setPluginItems:(id)arg1 ;
-(void)_setPlayingBack:(BOOL)arg1 ;
-(void)startPlayback;
-(id)initWithPluginItems:(id)arg1 ;
-(void)addPluginItem:(id)arg1 ;
-(BOOL)isPlayingBack;
-(id<CKPluginPlaybackManagerDelegate>)delegate;
@end
