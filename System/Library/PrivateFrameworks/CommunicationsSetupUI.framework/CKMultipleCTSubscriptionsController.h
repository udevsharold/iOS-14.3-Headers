/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString, NSArray;

@interface CKMultipleCTSubscriptionsController : PSListController {

	NSString* _defaultsKey;
	NSString* _headerKey;
	NSString* _controllerTitle;
	NSArray* _ctSubscriptions;

}

@property (nonatomic,copy) NSString * defaultsKey;                   //@synthesize defaultsKey=_defaultsKey - In the implementation block
@property (nonatomic,copy) NSString * headerKey;                     //@synthesize headerKey=_headerKey - In the implementation block
@property (nonatomic,copy) NSString * controllerTitle;               //@synthesize controllerTitle=_controllerTitle - In the implementation block
@property (nonatomic,retain) NSArray * ctSubscriptions;              //@synthesize ctSubscriptions=_ctSubscriptions - In the implementation block
-(id)specifiers;
-(void)systemApplicationWillEnterForeground;
-(NSString *)defaultsKey;
-(void)setDefaultsKey:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setHeaderKey:(NSString *)arg1 ;
-(NSString *)headerKey;
-(void)setCtSubscriptions:(NSArray *)arg1 ;
-(void)setControllerTitle:(NSString *)arg1 ;
-(NSArray *)ctSubscriptions;
-(void)setEnabledForSubscription:(id)arg1 specifier:(id)arg2 ;
-(id)isEnabledForSubscription:(id)arg1 ;
-(NSString *)controllerTitle;
@end

