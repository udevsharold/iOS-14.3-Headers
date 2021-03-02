/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUISignInControllerDelegate.h>
#import <libobjc.A.dylib/BFFFinishSetupFlowControlling.h>

@class AAUISignInController, NSString;

@interface BFFFinishSetupAppleIDController : NSObject <AAUISignInControllerDelegate, BFFFinishSetupFlowControlling> {

	BFFFinishSetupAppleIDController* _selfReference;
	AAUISignInController* _signInController;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                           //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)finishSetupAppleIDController;
-(void)signInController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)signInControllerDidCancel:(id)arg1 ;
-(id)viewControllerWithCompletion:(/*^block*/id)arg1 ;
@end
