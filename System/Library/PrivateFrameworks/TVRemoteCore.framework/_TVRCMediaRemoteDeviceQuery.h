/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRCMediaRemoteDeviceQueryDelegate;
@interface _TVRCMediaRemoteDeviceQuery : NSObject {

	void* _televisionController;
	id<_TVRCMediaRemoteDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_TVRCMediaRemoteDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)start;
-(void)setDelegate:(id<_TVRCMediaRemoteDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(id<_TVRCMediaRemoteDeviceQueryDelegate>)delegate;
-(BOOL)_shouldUseMediaRemoteForConnection:(void*)arg1 ;
-(void)_discoveredTelevision:(void*)arg1 ;
-(void)_removedTelevision:(void*)arg1 ;
@end
