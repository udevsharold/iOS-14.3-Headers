/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class SUICProgressEventViewController;

@interface WFInteractionCardProgressViewController : UIViewController {

	SUICProgressEventViewController* _progressEventViewController;

}

@property (nonatomic,retain) SUICProgressEventViewController * progressEventViewController;              //@synthesize progressEventViewController=_progressEventViewController - In the implementation block
-(void)handleEvent:(unsigned long long)arg1 ;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(SUICProgressEventViewController *)progressEventViewController;
-(void)setProgressEventViewController:(SUICProgressEventViewController *)arg1 ;
@end

