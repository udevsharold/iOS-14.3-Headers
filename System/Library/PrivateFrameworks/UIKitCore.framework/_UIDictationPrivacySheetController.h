/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@protocol _UIDictationPrivacySheetControllerDelegate;
@class OBPrivacyPresenter, VTUIDictationDataSharingOptInPresenter;

@interface _UIDictationPrivacySheetController : UINavigationController {

	id<_UIDictationPrivacySheetControllerDelegate> _privacyDelegate;
	OBPrivacyPresenter* _privacyPresenter;
	long long _sheetType;
	VTUIDictationDataSharingOptInPresenter* _dataSharingOptInPresenter;

}

@property (assign,nonatomic) id<_UIDictationPrivacySheetControllerDelegate> privacyDelegate;                  //@synthesize privacyDelegate=_privacyDelegate - In the implementation block
@property (nonatomic,retain) OBPrivacyPresenter * privacyPresenter;                                           //@synthesize privacyPresenter=_privacyPresenter - In the implementation block
@property (assign,nonatomic) long long sheetType;                                                             //@synthesize sheetType=_sheetType - In the implementation block
@property (nonatomic,retain) VTUIDictationDataSharingOptInPresenter * dataSharingOptInPresenter;              //@synthesize dataSharingOptInPresenter=_dataSharingOptInPresenter - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(long long)sheetType;
-(void)setPresentationDelegate:(id)arg1 ;
-(void)dismiss;
-(BOOL)_canShowWhileLocked;
-(void)setSheetType:(long long)arg1 ;
-(id<_UIDictationPrivacySheetControllerDelegate>)privacyDelegate;
-(VTUIDictationDataSharingOptInPresenter *)dataSharingOptInPresenter;
-(void)setPrivacyDelegate:(id<_UIDictationPrivacySheetControllerDelegate>)arg1 ;
-(OBPrivacyPresenter *)privacyPresenter;
-(void)setPrivacyPresenter:(OBPrivacyPresenter *)arg1 ;
-(void)setDataSharingOptInPresenter:(VTUIDictationDataSharingOptInPresenter *)arg1 ;
@end

