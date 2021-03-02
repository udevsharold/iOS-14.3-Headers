/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BannerKit/BannerKit-Structs.h>
#import <libobjc.A.dylib/BNPanGestureProxyPrivate.h>

@protocol BNPanGestureProxyDelegate;
@class BNPanGestureProxyAction, NSString;

@interface _BNPanGestureServiceProxy : NSObject <BNPanGestureProxyPrivate> {

	/*^block*/id _actionHandler;
	id<BNPanGestureProxyDelegate> _delegate;
	BNPanGestureProxyAction* _activePanGestureProxyAction;

}

@property (setter=_setActivePanGestureProxyAction:,getter=_activePanGestureProxyAction,nonatomic,retain) BNPanGestureProxyAction * activePanGestureProxyAction;              //@synthesize activePanGestureProxyAction=_activePanGestureProxyAction - In the implementation block
@property (assign,nonatomic,__weak) id<BNPanGestureProxyDelegate> delegate;                                                                                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,copy) id actionHandler;                                                                                                                                 //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) BOOL didCrossDefaultThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)locationInCoordinateSpace:(id)arg1 ;
-(long long)state;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(void)sendAction;
-(void)setDelegate:(id<BNPanGestureProxyDelegate>)arg1 ;
-(id<BNPanGestureProxyDelegate>)delegate;
-(CGPoint)visualTranslationInCoordinateSpace:(id)arg1 ;
-(BOOL)didCrossDefaultThreshold;
-(CGPoint)velocityInCoordinateSpace:(id)arg1 ;
-(CGPoint)translationInCoordinateSpace:(id)arg1 ;
-(void)_setActivePanGestureProxyAction:(id)arg1 ;
-(id)_activePanGestureProxyAction;
@end
