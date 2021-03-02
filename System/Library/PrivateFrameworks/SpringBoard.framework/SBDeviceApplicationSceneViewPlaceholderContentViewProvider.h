/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBScenePlaceholderContentViewProvider.h>

@protocol SBScenePlaceholderContentViewProviderDelegate;
@class UIUserInterfaceStyleArbiter, NSString;

@interface SBDeviceApplicationSceneViewPlaceholderContentViewProvider : NSObject <SBScenePlaceholderContentViewProvider> {

	UIUserInterfaceStyleArbiter* _userInterfaceStyleArbiter;
	id<SBScenePlaceholderContentViewProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBScenePlaceholderContentViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithApplication:(id)arg1 ;
-(id)_initWithApplication:(id)arg1 userInterfaceStyleArbiter:(id)arg2 ;
-(id)sceneView:(id)arg1 requestsPlaceholderContentViewWithContext:(id)arg2 ;
-(void)dealloc;
-(void)_snapshotsDidChange:(id)arg1 ;
-(id)_loadLiveXIBViewForApplication:(id)arg1 ;
-(unsigned long long)_contentTypeToSearchFromSceneHandle:(id)arg1 withContext:(id)arg2 ;
-(CGSize)_naturalSizeForOrientation:(long long)arg1 referenceSize:(CGSize)arg2 ;
-(BOOL)_checkApplicationRestorationState:(id)arg1 useSnapshot:(BOOL*)arg2 ;
-(void)setDelegate:(id<SBScenePlaceholderContentViewProviderDelegate>)arg1 ;
-(id)_contentViewFromSceneHandle:(id)arg1 displayConfiguration:(id)arg2 orientation:(long long)arg3 snapshot:(id)arg4 size:(CGSize)arg5 statusBarDescriptor:(id)arg6 ;
-(id<SBScenePlaceholderContentViewProviderDelegate>)delegate;
@end
