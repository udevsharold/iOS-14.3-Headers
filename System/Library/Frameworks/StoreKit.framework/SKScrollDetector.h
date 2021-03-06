/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKScreenTrackingDelegate;
@class NSMutableArray;

@interface SKScrollDetector : NSObject {

	id<SKScreenTrackingDelegate> _screenTrakingDelegate;
	NSMutableArray* _subscribedScrollers;

}

@property (nonatomic,retain) NSMutableArray * subscribedScrollers;                                   //@synthesize subscribedScrollers=_subscribedScrollers - In the implementation block
@property (assign,nonatomic,__weak) id<SKScreenTrackingDelegate> screenTrakingDelegate;              //@synthesize screenTrakingDelegate=_screenTrakingDelegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSMutableArray *)subscribedScrollers;
-(id<SKScreenTrackingDelegate>)screenTrakingDelegate;
-(void)findAndListenForScrollingOfView:(id)arg1 ;
-(void)stopListeningForScrollingOfView:(id)arg1 ;
-(void)setScreenTrakingDelegate:(id<SKScreenTrackingDelegate>)arg1 ;
-(void)setSubscribedScrollers:(NSMutableArray *)arg1 ;
@end

