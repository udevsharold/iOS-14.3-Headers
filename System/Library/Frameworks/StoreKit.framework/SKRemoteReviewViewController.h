/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientReviewViewController.h>

@protocol SKRemoteReviewViewControllerDelegate;
@class SKStoreReviewViewController, NSString;

@interface SKRemoteReviewViewController : _UIRemoteViewController <SKUIClientReviewViewController> {

	id<SKRemoteReviewViewControllerDelegate> _delegate;
	SKStoreReviewViewController* _reviewViewController;

}

@property (assign,nonatomic,__weak) id<SKRemoteReviewViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SKStoreReviewViewController * reviewViewController;              //@synthesize reviewViewController=_reviewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<SKRemoteReviewViewControllerDelegate>)arg1 ;
-(id<SKRemoteReviewViewControllerDelegate>)delegate;
-(void)setReviewViewController:(SKStoreReviewViewController *)arg1 ;
-(SKStoreReviewViewController *)reviewViewController;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
@end

