/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <UIKitCore/UIScrollView.h>

@class OFUIViewController, NSMutableArray;

@interface OFUIScrollView : UIScrollView {

	OFUIViewController* _viewControllerProxy;
	NSMutableArray* _draggingPasteboardTypes;

}

@property (assign,nonatomic) OFUIViewController * viewControllerProxy;              //@synthesize viewControllerProxy=_viewControllerProxy - In the implementation block
-(void)commonInit;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setViewControllerProxy:(OFUIViewController *)arg1 ;
-(OFUIViewController *)viewControllerProxy;
-(void)registerDraggingPasteboardType:(id)arg1 ;
-(void)unregisterAllDraggingPasteboardType;
-(id)draggingPasteboardTypes;
@end

