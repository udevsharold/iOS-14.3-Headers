/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/ICSharedPasswordUtilities.h>

@class UIAlertController, NSString;

@interface ICPasswordUtilities : ICSharedPasswordUtilities {

	BOOL _authenticationInProgress;
	UIAlertController* _displayedAlertController;
	NSString* _divergedAccountPassword;

}

@property (assign,nonatomic) BOOL authenticationInProgress;                                    //@synthesize authenticationInProgress=_authenticationInProgress - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * displayedAlertController;              //@synthesize displayedAlertController=_displayedAlertController - In the implementation block
@property (nonatomic,retain) NSString * divergedAccountPassword;                               //@synthesize divergedAccountPassword=_divergedAccountPassword - In the implementation block
+(id)sharedInstance;
+(void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1 ;
+(BOOL)faceIDAccessAllowedViaTCC;
+(BOOL)faceIDEnabledForSharedPasswordForAccountID:(id)arg1 ;
+(BOOL)touchIDEnabledForSharedPasswordForAccountID:(id)arg1 ;
+(unsigned long long)faceIDAccess;
+(void)authenticateForMovingNotes:(id)arg1 toNoteContainer:(id)arg2 displayWindow:(id)arg3 authenticateFailureHandler:(/*^block*/id)arg4 movingBlock:(/*^block*/id)arg5 ;
+(void)requestAllowFaceIDIfRequired:(/*^block*/id)arg1 ;
+(id)faceIDFailurePrompt;
+(BOOL)deviceHasPasscode;
+(void)authenticateiCloudPasswordFromRootViewController:(id)arg1 account:(id)arg2 confirmButtonTitle:(id)arg3 reason:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)imageForCurrentDecryptedStatusForNote:(id)arg1 ;
+(void)warnUserCannotPasswordProtectNoteDueToUnsupportedAttachmentsInViewController:(id)arg1 ;
+(void)warnUserCannotPasswordProtectNoteDueToSharedNoteInViewController:(id)arg1 ;
+(void)warnUserCannotPasswordProtectDueToManagedAppleIDInViewController:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setAuthenticationInProgress:(BOOL)arg1 ;
-(BOOL)authenticationInProgress;
-(void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)hidePasswordEntrySheet;
-(BOOL)keychainContainsValidItemForAccount:(id)arg1 ;
-(BOOL)keychainContainsValidItemForNote:(id)arg1 ;
-(void)authenticateWithBiometricIDWithReason:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 displayWindow:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 failedAttemptHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 incorrectAttempts:(long long)arg3 passwordDiverged:(BOOL)arg4 wrongAccountName:(id)arg5 displayWindow:(id)arg6 failedAttemptHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(UIAlertController *)displayedAlertController;
-(void)addTitleAndMessageToAlert:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 incorrectAttempts:(long long)arg4 passwordDiverged:(BOOL)arg5 wrongAccountName:(id)arg6 ;
-(void)setDivergedAccountPassword:(NSString *)arg1 ;
-(void)setDisplayedAlertController:(UIAlertController *)arg1 ;
-(void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2 ;
-(NSString *)divergedAccountPassword;
-(void)showUpdateDivergedPasswordForAccountPassword:(id)arg1 oldPassword:(id)arg2 account:(id)arg3 displayWindow:(id)arg4 ;
-(BOOL)_keychainContainsValidItemForSyncingObject:(id)arg1 ;
-(void)authenticateWithBiometricIDForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_authenticatePasswordForDeletingNotes:(id)arg1 incorrectAttempts:(long long)arg2 displayWindow:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 account:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
