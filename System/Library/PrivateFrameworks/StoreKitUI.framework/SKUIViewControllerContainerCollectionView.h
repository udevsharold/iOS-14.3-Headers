/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface SKUIViewControllerContainerCollectionView : UICollectionView {

	double _competingScrollViewPanGestureRecognizerHysteresis;
	BOOL _forcingIncreasedPanGestureRecognizerHysteresis;
	double _originalPanGestureRecognizerHysteresis;
	CFRunLoopObserverRef _runLoopObserver;

}
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_endDynamicHysteresisIncrease;
-(void)_beginDynamicHysteresisIncreaseWithCompetingScrollView:(id)arg1 ;
-(void)_updateStateForDynamicHysteresisIncrease;
@end

