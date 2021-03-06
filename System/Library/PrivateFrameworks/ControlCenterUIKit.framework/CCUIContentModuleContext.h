/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CCUIContentModuleContextDelegate;
@class NSString;

@interface CCUIContentModuleContext : NSObject {

	NSString* _moduleIdentifier;
	id<CCUIContentModuleContextDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * moduleIdentifier;                                //@synthesize moduleIdentifier=_moduleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIContentModuleContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
+(BOOL)areAnimationsPermitted;
+(void)setAnimationsPermitted:(BOOL)arg1 ;
+(id)_sharedOpenAppService;
+(id)_sharedOpenApplicationOptions;
+(void)performWithoutAnimationWhileHidden:(/*^block*/id)arg1 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)moduleIdentifier;
-(id)initWithModuleIdentifier:(id)arg1 ;
-(void)requestAuthenticationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enqueueStatusUpdate:(id)arg1 ;
-(void)requestExpandModule;
-(void)requestLayoutSizeUpdate;
-(void)openApplication:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openApplication:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)dismissControlCenter;
-(void)setDelegate:(id<CCUIContentModuleContextDelegate>)arg1 ;
-(void)setHomeGestureDismissalAllowed:(BOOL)arg1 ;
-(void)dismissModule;
-(id<CCUIContentModuleContextDelegate>)delegate;
@end

