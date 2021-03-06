/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFDialog.h>

@class WebUIAlert;

@interface SFWebUIDialog : _SFDialog {

	int _finalAction;
	/*^block*/id _completionHandler;
	BOOL _shouldIgnoreGlobalModalUIDisplayPolicy;
	WebUIAlert* _alert;

}

@property (nonatomic,readonly) WebUIAlert * alert;              //@synthesize alert=_alert - In the implementation block
-(id)initWithAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)presentationStyle;
-(BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
-(id)newViewControllerRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(WebUIAlert *)alert;
-(void)didCompleteWithResponse:(id)arg1 ;
@end

