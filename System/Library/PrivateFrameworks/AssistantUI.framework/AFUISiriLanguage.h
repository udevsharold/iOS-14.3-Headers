/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFUISiriLanguageDelegate;
@class NSString;

@interface AFUISiriLanguage : NSObject {

	BOOL _setupAssistantHasCompletedInitialRunChecked;
	BOOL _setupAssistantHasCompletedInitialRunAvailable;
	NSString* _spokenLanguageCode;
	id<AFUISiriLanguageDelegate> _delegate;

}

@property (getter=_delegate,nonatomic,__weak,readonly) id<AFUISiriLanguageDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setSpokenLanguageCode:,nonatomic,copy) NSString * spokenLanguageCode;                                                            //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked;                                                                      //@synthesize setupAssistantHasCompletedInitialRunChecked=_setupAssistantHasCompletedInitialRunChecked - In the implementation block
@property (assign,getter=_setupAssistantHasCompletedInitialRunAvailable,nonatomic) BOOL setupAssistantHasCompletedInitialRunAvailable;              //@synthesize setupAssistantHasCompletedInitialRunAvailable=_setupAssistantHasCompletedInitialRunAvailable - In the implementation block
-(id)init;
-(id)_delegate;
-(void)dealloc;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(id)_computeSpokenLanguageCode;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(BOOL)_setupAssistantHasCompletedInitialRunAvailable;
-(NSString *)spokenLanguageCode;
-(BOOL)setupAssistantHasCompletedInitialRunChecked;
-(void)setSetupAssistantHasCompletedInitialRunChecked:(BOOL)arg1 ;
-(void)setSetupAssistantHasCompletedInitialRunAvailable:(BOOL)arg1 ;
@end
