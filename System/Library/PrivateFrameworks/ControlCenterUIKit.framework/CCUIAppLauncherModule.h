/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCUIContentModule.h>

@class NSBundle, SBFApplication, NSString, CCUIContentModuleContext, NSURL, UIImage;

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule> {

	NSBundle* _bundle;
	SBFApplication* _application;
	BOOL _supportsApplicationShortcuts;
	NSString* _applicationIdentifier;
	NSString* _launchApplicationIdentifier;
	NSString* _displayName;
	CCUIContentModuleContext* _contentModuleContext;
	NSURL* _launchURL;

}

@property (nonatomic,copy) NSString * applicationIdentifier;                                                                       //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * launchApplicationIdentifier;                                                                 //@synthesize launchApplicationIdentifier=_launchApplicationIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * launchURL;                                                                                      //@synthesize launchURL=_launchURL - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                                 //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL supportsApplicationShortcuts;                                                                    //@synthesize supportsApplicationShortcuts=_supportsApplicationShortcuts - In the implementation block
@property (getter=_application,nonatomic,readonly) SBFApplication * application; 
@property (nonatomic,copy,readonly) UIImage * iconGlyph; 
@property (nonatomic,retain) CCUIContentModuleContext * contentModuleContext;                                                      //@synthesize contentModuleContext=_contentModuleContext - In the implementation block
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CCUIContentModuleContext *)contentModuleContext;
-(id)init;
-(void)handleTapWithTouchType:(long long)arg1 ;
-(void)setContentModuleContext:(CCUIContentModuleContext *)arg1 ;
-(void)_fetchApplicationIfNeeded;
-(id)_application;
-(UIImage *)iconGlyph;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setLaunchURL:(NSURL *)arg1 ;
-(void)setSupportsApplicationShortcuts:(BOOL)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(void)setLaunchApplicationIdentifier:(NSString *)arg1 ;
-(id)launchURLForTouchType:(long long)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)handleTouchDownWithTouchType:(long long)arg1 ;
-(NSString *)launchApplicationIdentifier;
-(NSURL *)launchURL;
-(BOOL)supportsApplicationShortcuts;
-(NSString *)displayName;
@end

