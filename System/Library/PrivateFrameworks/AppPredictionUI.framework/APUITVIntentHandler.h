/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/APUIWFLIntentControllerDelegate.h>
#import <libobjc.A.dylib/ATXTVIntentHandler.h>

@class ATXAction, APUIWFLIntentController, NSString;

@interface APUITVIntentHandler : NSObject <APUIWFLIntentControllerDelegate, ATXTVIntentHandler> {

	ATXAction* _action;
	APUIWFLIntentController* _intentController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)intentController:(id)arg1 didHandleInteraction:(id)arg2 ;
-(void)intentController:(id)arg1 didFailWithError:(id)arg2 forInteraction:(id)arg3 ;
-(void)intentController:(id)arg1 requiresContinuingInAppForIntent:(id)arg2 proceedHandler:(/*^block*/id)arg3 ;
-(void)intentController:(id)arg1 requiresConfirmationForIntent:(id)arg2 intentResponse:(id)arg3 ;
-(void)intentControllerDidFailAuthorizationCheck:(id)arg1 ;
-(id)initWithTVAction:(id)arg1 context:(long long)arg2 ;
-(void)executeTVActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_punchToAppWithIntent:(id)arg1 ;
@end
