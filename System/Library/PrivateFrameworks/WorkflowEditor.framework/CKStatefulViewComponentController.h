/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/CKComponentController.h>

@class UIView;

@interface CKStatefulViewComponentController : CKComponentController {

	UIView* _statefulView;
	BOOL _mounted;
	id _statefulViewContext;

}
+(id)contextForNewStatefulView:(id)arg1 ;
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
+(long long)maximumPoolSize:(id)arg1 ;
-(void)didMount;
-(void)didUpdateComponent;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)statefulView;
-(BOOL)canRelinquishStatefulView;
-(void)canRelinquishStatefulViewDidChange;
-(void)didUnmount;
-(void)didRemount;
-(void)_presentStatefulView;
-(void)_relinquishStatefulViewIfPossible;
@end

