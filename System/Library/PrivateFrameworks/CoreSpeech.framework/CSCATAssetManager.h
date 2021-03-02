/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CSCATAssetManagerDelegate;
@class NSObject;

@interface CSCATAssetManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSCATAssetManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSCATAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
+(id)getCATXPCConnection;
-(id)init;
-(void)setDelegate:(id<CSCATAssetManagerDelegate>)arg1 ;
-(id<CSCATAssetManagerDelegate>)delegate;
-(void)fetchRemoteCATAssetForResource:(id)arg1 withNameOfFile:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)downloadForManifest:(id)arg1 withAssetName:(id)arg2 ;
@end
