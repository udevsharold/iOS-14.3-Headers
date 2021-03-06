/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowEditor/CKStatefulViewComponentController.h>
#import <libobjc.A.dylib/WFContactFieldDelegate.h>

@class NSString;

@interface WFContactFieldComponentController : CKStatefulViewComponentController <WFContactFieldDelegate> {

	BOOL _mounted;

}

@property (assign,getter=isMounted,nonatomic) BOOL mounted;              //@synthesize mounted=_mounted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(BOOL)isMounted;
-(void)didMount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)viewControllerContainingContactField:(id)arg1 ;
-(void)willUnmount;
-(void)setMounted:(BOOL)arg1 ;
@end

