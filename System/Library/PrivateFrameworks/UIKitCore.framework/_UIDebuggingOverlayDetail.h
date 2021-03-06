/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIView, UIViewController;

@interface _UIDebuggingOverlayDetail : NSObject {

	NSString* _title;
	NSString* _detail;
	long long _accessoryType;

}

@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * detail;                                //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) long long accessoryType;                          //@synthesize accessoryType=_accessoryType - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIViewController * viewController; 
+(id)detailWithTitle:(id)arg1 detail:(id)arg2 ;
-(void)setAccessoryType:(long long)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(long long)accessoryType;
-(UIView *)view;
-(void)setTitle:(NSString *)arg1 ;
-(void)_updateForInspectedView:(id)arg1 ;
-(NSString *)detail;
-(NSString *)title;
-(UIViewController *)viewController;
@end

