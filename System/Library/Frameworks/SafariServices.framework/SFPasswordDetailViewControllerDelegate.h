/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WBSSavedPassword;


@protocol SFPasswordDetailViewControllerDelegate <NSObject>
@property (nonatomic,retain) WBSSavedPassword * passwordToRemoveAfterCompletedUpgradeInDetailView; 
@optional
-(id)passwordWarningManagerForPasswordDetailViewController:(id)arg1;
-(id)passwordGeneratorForPasswordDetailViewController:(id)arg1;
-(WBSSavedPassword *)passwordToRemoveAfterCompletedUpgradeInDetailView;
-(void)setPasswordToRemoveAfterCompletedUpgradeInDetailView:(id)arg1;

@end
