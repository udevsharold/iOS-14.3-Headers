/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientComposeReviewViewController.h>

@class SKComposeReviewViewController, NSString;

@interface SKRemoteComposeReviewViewController : _UIRemoteViewController <SKUIClientComposeReviewViewController> {

	SKComposeReviewViewController* _composeReviewViewController;

}

@property (assign,nonatomic,__weak) SKComposeReviewViewController * composeReviewViewController;              //@synthesize composeReviewViewController=_composeReviewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)dealloc;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didPrepareWithResult:(id)arg1 error:(id)arg2 ;
-(void)promptForStarRating;
-(void)setComposeReviewViewController:(SKComposeReviewViewController *)arg1 ;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)_keyboardVisibilityDidChangeNotification:(id)arg1 ;
-(SKComposeReviewViewController *)composeReviewViewController;
@end

