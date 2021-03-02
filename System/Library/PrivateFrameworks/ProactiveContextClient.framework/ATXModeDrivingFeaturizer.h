/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CARSessionObserving.h>
#import <libobjc.A.dylib/ATXMotionManagerDelegate.h>
#import <libobjc.A.dylib/ATXModeFeaturizer.h>

@protocol ATXModeFeaturizerDelegate;
@class _PASLock, NSString;

@interface ATXModeDrivingFeaturizer : NSObject <CARSessionObserving, ATXMotionManagerDelegate, ATXModeFeaturizer> {

	_PASLock* _lock;
	id<ATXModeFeaturizerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)sessionDidConnect:(id)arg1 ;
-(void)stopListening;
-(id)init;
-(void)beginListening;
-(void)setDelegate:(id<ATXModeFeaturizerDelegate>)arg1 ;
-(void)sessionDidDisconnect:(id)arg1 ;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(id)provideFeatures;
-(void)_updateFeatures;
-(void)didUpdateMotionType:(long long)arg1 isActive:(BOOL)arg2 ;
@end
