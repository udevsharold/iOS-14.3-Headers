/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFCredentialProviderExtensionManagerObserver.h>
#import <libobjc.A.dylib/_SFAutoFillInputViewDelegate.h>
#import <libobjc.A.dylib/SFFormMetadataObserver.h>
#import <libobjc.A.dylib/_SFAuthenticationClient.h>

@protocol WBUFormAutoFillWebView, SFFormAutoFillControllerDelegate, SFFormAutoFiller;
@class WKWebView, _WKRemoteObjectInterface, SFFormAutocompleteState, NSTimer, WBSFormMetadata, SFFormAutoFillFrameHandle, NSMutableIndexSet, NSMutableSet, NSString, NSArray, _SFFormAutoFillInputSession, _SFAutoFillInputView, NSDictionary, CNContact, WBSCreditCardData, NSSet, _SFAuthenticationContext, SFAppAutoFillOneTimeCodeProvider;

@interface _SFFormAutoFillController : NSObject <SFCredentialProviderExtensionManagerObserver, _SFAutoFillInputViewDelegate, SFFormMetadataObserver, _SFAuthenticationClient> {

	WKWebView*<WBUFormAutoFillWebView> _webView;
	id<SFFormAutoFillControllerDelegate> _delegate;
	_WKRemoteObjectInterface* _remoteObjectInterface;
	id<SFFormAutoFiller> _autoFiller;
	BOOL _isCurrentlyAuthenticating;
	long long _authenticationType;
	SFFormAutocompleteState* _state;
	NSTimer* _prefillTimer;
	WBSFormMetadata* _unsubmittedForm;
	SFFormAutoFillFrameHandle* _unsubmittedFormFrame;
	NSMutableIndexSet* _uniqueIDsOfFormsThatWereAutoFilled;
	NSMutableSet* _uniqueIDsOfControlsThatWereAutoFilled;
	NSString* _uniqueIDOfFocusedPasswordElementWithAutomaticPassword;
	NSArray* _uniqueIDsOfPasswordElementsForAutomaticPasswords;
	SFFormAutoFillFrameHandle* _frameHandleForAutomaticPasswords;
	_SFFormAutoFillInputSession* _inputSessionForAutomaticPasswords;
	_SFAutoFillInputView* _autoFillInputView;
	NSArray* _preservedLeadingBarButtonGroups;
	NSArray* _preservedTrailingBarButtonGroups;
	BOOL _attemptedOfferingStreamlinedLogin;
	NSDictionary* _externalCredentialIdentitiesForStreamlinedAutoFill;
	BOOL _metadataCorrectionsEnabled;
	CNContact* _lastFilledContact;
	WBSCreditCardData* _lastFilledCreditCardData;
	NSSet* _lastFilledCreditCardDataTypes;

}

@property (nonatomic,readonly) UIView*<WBUFormAutoFillWebView> webView; 
@property (assign,nonatomic) BOOL metadataCorrectionsEnabled;                                       //@synthesize metadataCorrectionsEnabled=_metadataCorrectionsEnabled - In the implementation block
@property (nonatomic,readonly) _SFAuthenticationContext * authenticationContext; 
@property (nonatomic,readonly) SFAppAutoFillOneTimeCodeProvider * oneTimeCodeProvider; 
@property (nonatomic,retain) CNContact * lastFilledContact;                                         //@synthesize lastFilledContact=_lastFilledContact - In the implementation block
@property (nonatomic,retain) WBSCreditCardData * lastFilledCreditCardData;                          //@synthesize lastFilledCreditCardData=_lastFilledCreditCardData - In the implementation block
@property (nonatomic,retain) NSSet * lastFilledCreditCardDataTypes;                                 //@synthesize lastFilledCreditCardDataTypes=_lastFilledCreditCardDataTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 pageURL:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_filterAndSortCredentialIdentities:(id)arg1 pageURL:(id)arg2 exactMatchesOnly:(BOOL)arg3 ;
+(void)_getExternalLoginCredentialSuggestionsForDomains:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)insertTextSuggestion:(id)arg1 ;
-(UIView*<WBUFormAutoFillWebView>)webView;
-(void)autoFillInputViewDidSelectMorePasswords:(id)arg1 ;
-(id)_simulatedWebEventForReturnKeyWithType:(int)arg1 ;
-(void)didFillGeneratedPasswordInForm:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(BOOL)_showingAutoFillInputView;
-(id)authenticationMessageForContext:(id)arg1 ;
-(id)_beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ignorePreviousDecision:(BOOL)arg3 ;
-(void)autoFillDidFinishWithUpdatedFormMetadata:(id)arg1 inFrame:(id)arg2 shouldSubmit:(BOOL)arg3 ;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(CNContact *)lastFilledContact;
-(void)prefillFormsSoonIfNeeded;
-(void)dealloc;
-(void)prepareForShowingAutomaticStrongPasswordWithInputSession:(id)arg1 ;
-(void)removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg1 ;
-(void)_authenticateForAutoFillForHighLevelDomain:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)authenticateForAutoFillAuthenticationType:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)_websiteForAuthenticationPrompt;
-(WBSCreditCardData *)lastFilledCreditCardData;
-(void)annotateForm:(long long)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)automaticPasswordSheetDismissed;
-(void)fieldWillFocusWithInputSession:(id)arg1 ;
-(void)_removeAutomaticPasswordButtonInitiatedByUser:(BOOL)arg1 removeVisualTreatmentOnly:(BOOL)arg2 ;
-(void)autoFillForm:(long long)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)willSubmitFormValues:(id)arg1 userObject:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(void)_hideInputAssistantItemsIfNecessary;
-(void)_dismissKeyboardAndSimulateCarriageReturnKeyEvents:(BOOL)arg1 ;
-(BOOL)displayMessageAsTitleForContext:(id)arg1 ;
-(id)automaticPasswordForPasswordField:(id)arg1 inForm:(id)arg2 isFrame:(id)arg3 ;
-(void)didCollectURLsForPreFilling:(id)arg1 atURL:(id)arg2 ;
-(id)_preFillDisabledHosts;
-(void)removeAutomaticPasswordVisualTreatment;
-(NSSet *)lastFilledCreditCardDataTypes;
-(void)setLastFilledCreditCardData:(WBSCreditCardData *)arg1 ;
-(void)willNavigateFrame:(id)arg1 withUnsubmittedForm:(id)arg2 ;
-(void)setLastFilledCreditCardDataTypes:(NSSet *)arg1 ;
-(void)fetchMetadataForTextField:(id)arg1 inFrame:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_addUniqueIDsOfAutoFilledForm:(id)arg1 ;
-(void)textDidChangeInTextField:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)credentialProviderExtensionManagerExtensionListDidChange:(id)arg1 ;
-(_SFAuthenticationContext *)authenticationContext;
-(void)_prefillTimerFired:(id)arg1 ;
-(void)updateSuggestions;
-(void)_restoreInputAssistantItemsIfNecessary;
-(id)initWithWebView:(id)arg1 delegate:(id)arg2 ;
-(void)_fieldFocusedWithInputSession:(id)arg1 ;
-(void)setLastFilledContact:(CNContact *)arg1 ;
-(void)passwordFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(void)fieldDidFocusWithInputSession:(id)arg1 ;
-(void)fieldFocusedWithInputSession:(id)arg1 ;
-(id)passcodePromptForContext:(id)arg1 ;
-(void)didCollectFormMetadataForPreFilling:(id)arg1 atURL:(id)arg2 ancestorFramesOfFormToPreFill:(id)arg3 ;
-(void)fillTextField:(id)arg1 inFrame:(id)arg2 withGeneratedPassword:(id)arg3 ;
-(void)autoFillFormInFrame:(id)arg1 withValues:(id)arg2 setAutoFilled:(BOOL)arg3 focusFieldAfterFilling:(BOOL)arg4 fieldToFocus:(id)arg5 submitForm:(BOOL)arg6 ;
-(BOOL)elementIsBeingFocusedForStreamlinedLogin:(id)arg1 ;
-(SFAppAutoFillOneTimeCodeProvider *)oneTimeCodeProvider;
-(BOOL)metadataCorrectionsEnabled;
-(void)autoFillInputViewDidSelectUseKeyboard:(id)arg1 ;
-(void)_removeUniqueIDsOfAutoFilledForm:(id)arg1 ;
-(void)willSubmitForm:(id)arg1 inFrame:(id)arg2 submissionHandler:(/*^block*/id)arg3 ;
-(id)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 ;
-(void)beginAutomaticPasswordInteractionWithInputSession:(id)arg1 generatedPassword:(id)arg2 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 andClearField:(id)arg3 inFrame:(id)arg4 ;
-(id)authenticationCustomUIProgressObserverForContext:(id)arg1 ;
-(void)invalidate;
-(void)autoFill;
-(void)autoFillOneTimeCodeFieldsInFrame:(id)arg1 withValue:(id)arg2 ;
-(void)didRemoveAutomaticStrongPasswordInForm:(id)arg1 inputSessionUserObject:(id)arg2 inFrame:(id)arg3 ;
-(void)setMetadataCorrectionsEnabled:(BOOL)arg1 ;
-(void)offerToSaveUnsubmittedFormDataIfNeeded;
-(void)_didFocusSensitiveFormField;
-(void)didUpdateUnsubmittedForm:(id)arg1 inFrame:(id)arg2 ;
-(void)_fieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 inputSession:(id)arg4 ;
-(BOOL)shouldShowIconsInPasswordPicker;
@end

