/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSSmartSiriVolumeClientDelegate.h>

@protocol CSSmartSiriVolumeControllerDelegate, OS_dispatch_queue;
@class NSObject, CSSmartSiriVolumeClient, NSString;

@interface CSSmartSiriVolumeController : NSObject <CSSmartSiriVolumeClientDelegate> {

	id<CSSmartSiriVolumeControllerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	CSSmartSiriVolumeClient* _ssvClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CSSmartSiriVolumeClient * ssvClient;                                  //@synthesize ssvClient=_ssvClient - In the implementation block
@property (assign,nonatomic,__weak) id<CSSmartSiriVolumeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDelegate:(id<CSSmartSiriVolumeControllerDelegate>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CSSmartSiriVolumeControllerDelegate>)delegate;
-(void)didSmartSiriVolumeChangeForReason:(unsigned long long)arg1 ;
-(id)getVolumeForTTSType:(unsigned long long)arg1 withContext:(id)arg2 ;
-(void)_createSSVClientConnectionIfNeeded;
-(CSSmartSiriVolumeClient *)ssvClient;
-(void)setSsvClient:(CSSmartSiriVolumeClient *)arg1 ;
@end
