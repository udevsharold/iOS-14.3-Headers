/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>
#import <libobjc.A.dylib/HUConfigurationViewController.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@protocol HUConfigurationViewControllerDelegate;
@class NSString, HMHome, OBTrayButton, OBLinkTrayButton, NSArray, NSDictionary;

@interface HUHomePersonalIdentityDeviceLanguageSetupViewController : OBWelcomeController <HUConfigurationViewController, HUPreloadableViewController> {

	id<HUConfigurationViewControllerDelegate> _delegate;
	NSString* _overrideTargetLanguage;
	HMHome* _home;
	NSString* _targetLanguage;
	OBTrayButton* _continueButton;
	OBLinkTrayButton* _customizeButton;
	NSArray* _supportedVoiceRecognitionLanguages;
	NSDictionary* _languageToHomePodsMapping;

}

@property (nonatomic,retain) HMHome * home;                                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSString * targetLanguage;                                              //@synthesize targetLanguage=_targetLanguage - In the implementation block
@property (nonatomic,retain) OBTrayButton * continueButton;                                          //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) OBLinkTrayButton * customizeButton;                                     //@synthesize customizeButton=_customizeButton - In the implementation block
@property (nonatomic,retain) NSArray * supportedVoiceRecognitionLanguages;                           //@synthesize supportedVoiceRecognitionLanguages=_supportedVoiceRecognitionLanguages - In the implementation block
@property (nonatomic,retain) NSDictionary * languageToHomePodsMapping;                               //@synthesize languageToHomePodsMapping=_languageToHomePodsMapping - In the implementation block
@property (nonatomic,retain) NSString * overrideTargetLanguage;                                      //@synthesize overrideTargetLanguage=_overrideTargetLanguage - In the implementation block
@property (assign,nonatomic,__weak) id<HUConfigurationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isFinalStep; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMHome *)home;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(OBTrayButton *)continueButton;
-(id)initWithHome:(id)arg1 ;
-(void)setContinueButton:(OBTrayButton *)arg1 ;
-(void)setHome:(HMHome *)arg1 ;
-(void)setCustomizeButton:(OBLinkTrayButton *)arg1 ;
-(OBLinkTrayButton *)customizeButton;
-(void)setTargetLanguage:(NSString *)arg1 ;
-(void)setDelegate:(id<HUConfigurationViewControllerDelegate>)arg1 ;
-(id<HUConfigurationViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(id)hu_preloadContent;
-(void)_cancelLanguageSetup;
-(NSArray *)supportedVoiceRecognitionLanguages;
-(void)_completeLanguageSetup;
-(void)setSupportedVoiceRecognitionLanguages:(NSArray *)arg1 ;
-(void)setOverrideTargetLanguage:(NSString *)arg1 ;
-(NSString *)targetLanguage;
-(NSDictionary *)languageToHomePodsMapping;
-(NSString *)overrideTargetLanguage;
-(void)setLanguageToHomePodsMapping:(NSDictionary *)arg1 ;
-(void)_changeSiriLanguage;
@end
