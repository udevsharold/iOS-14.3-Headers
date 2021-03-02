/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol DOCServiceDocumentBrowserViewControllerInterface, DOCServiceTransitionProtocol;
@class NSURL, FPItem, UIView, NSProgress, NSOperationQueue, NSString;

@interface UIDocumentBrowserTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	NSURL* _itemURL;
	FPItem* _item;
	id<DOCServiceDocumentBrowserViewControllerInterface> _serviceDocumentBrowserProxy;
	UIView* _referenceView;
	BOOL _transitionDidFinish;
	NSProgress* _loadingProgress;
	UIView* _targetView;
	id<DOCServiceTransitionProtocol> _transitionController;
	NSOperationQueue* _transitionControllerQueue;

}

@property (assign) BOOL transitionDidFinish;                                                     //@synthesize transitionDidFinish=_transitionDidFinish - In the implementation block
@property (nonatomic,retain) id<DOCServiceTransitionProtocol> transitionController;              //@synthesize transitionController=_transitionController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * transitionControllerQueue;                       //@synthesize transitionControllerQueue=_transitionControllerQueue - In the implementation block
@property (nonatomic,retain) NSProgress * loadingProgress;                                       //@synthesize loadingProgress=_loadingProgress - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetView;                                         //@synthesize targetView=_targetView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)targetView;
-(void)_commonInit;
-(void)animateTransition:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(NSProgress *)loadingProgress;
-(void)setTransitionController:(id<DOCServiceTransitionProtocol>)arg1 ;
-(id<DOCServiceTransitionProtocol>)transitionController;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setTargetView:(UIView *)arg1 ;
-(void)setLoadingProgress:(NSProgress *)arg1 ;
-(id)initWithItemURL:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3 ;
-(NSOperationQueue *)transitionControllerQueue;
-(BOOL)transitionDidFinish;
-(void)setTransitionDidFinish:(BOOL)arg1 ;
-(id)initWithItem:(id)arg1 documentBrowserProxy:(id)arg2 referenceView:(id)arg3 ;
-(void)setTransitionControllerQueue:(NSOperationQueue *)arg1 ;
@end
