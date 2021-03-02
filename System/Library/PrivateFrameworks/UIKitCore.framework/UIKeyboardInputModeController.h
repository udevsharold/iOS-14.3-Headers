/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIKeyboardInputModeControllerDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class UIKeyboardInputMode, NSArray, NSString, NSObject, UITextInputMode;

@interface UIKeyboardInputModeController : NSObject {

	UIKeyboardInputMode* _currentInputMode;
	NSArray* _inputModesWithoutHardwareSupport;
	NSArray* _allExtensions;
	NSArray* _allowedExtensions;
	BOOL _skipExtensionInputModes;
	BOOL _excludeExtensionInputModes;
	BOOL _cacheNeedsRefresh;
	int _notifyPasscodeChangedToken;
	CFUserNotificationRef _userNotification;
	CFRunLoopSourceRef _userNotificationRunLoopSource;
	NSString* _newModeForUserNotification;
	NSObject* _keyboardTagForUserNotification;
	BOOL _loadingExtensions;
	BOOL _needsUpdateExtensions;
	BOOL _suppressCurrentPublicInputMode;
	BOOL disableFloatingKeyboardFilter;
	BOOL _shouldRunContinuousDiscovery;
	UITextInputMode* _documentInputMode;
	NSArray* keyboardInputModes;
	NSArray* keyboardInputModeIdentifiers;
	NSArray* enabledInputModes;
	NSArray* normalizedInputModes;
	NSArray* defaultKeyboardInputModes;
	NSArray* defaultRawInputModes;
	NSArray* defaultInputModes;
	NSArray* defaultNormalizedInputModes;
	NSArray* suggestedInputModesForSiriLanguage;
	UIKeyboardInputMode* _lastUsedInputMode;
	NSString* _inputModeContextIdentifier;
	NSArray* _additionalTextInputLocales;
	id<UIKeyboardInputModeControllerDelegate> _delegate;
	NSArray* _userSelectableKeyboardInputModes;
	NSArray* _userSelectableKeyboardInputModeIdentifiers;
	UIKeyboardInputMode* _nextInputModeToUse;
	UIKeyboardInputMode* _currentUsedInputMode;
	id _extensionMatchingContext;

}

@property (readonly) NSArray * supportedInputModeIdentifiers; 
@property (readonly) NSArray * inputModesWithoutHardwareSupport; 
@property (readonly) NSArray * enabledInputModeIdentifiers; 
@property (readonly) NSArray * normalizedEnabledInputModeIdentifiers; 
@property (readonly) NSArray * enabledInputModeLanguages; 
@property (readonly) NSArray * activeInputModeIdentifiers; 
@property (readonly) NSArray * activeUserSelectableInputModeIdentifiers; 
@property (nonatomic,readonly) NSArray * allowedExtensions;                                           //@synthesize allowedExtensions=_allowedExtensions - In the implementation block
@property (retain) NSArray * keyboardInputModes; 
@property (retain) NSArray * userSelectableKeyboardInputModes;                                        //@synthesize userSelectableKeyboardInputModes=_userSelectableKeyboardInputModes - In the implementation block
@property (retain) NSArray * keyboardInputModeIdentifiers; 
@property (retain) NSArray * userSelectableKeyboardInputModeIdentifiers;                              //@synthesize userSelectableKeyboardInputModeIdentifiers=_userSelectableKeyboardInputModeIdentifiers - In the implementation block
@property (retain) NSArray * enabledInputModes; 
@property (retain) NSArray * normalizedInputModes; 
@property (retain) NSArray * defaultKeyboardInputModes; 
@property (nonatomic,copy) NSArray * defaultRawInputModes; 
@property (retain) NSArray * defaultInputModes; 
@property (retain) NSArray * defaultNormalizedInputModes; 
@property (retain) NSArray * suggestedInputModesForSiriLanguage; 
@property (nonatomic,retain) UIKeyboardInputMode * nextInputModeToUse;                                //@synthesize nextInputModeToUse=_nextInputModeToUse - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * currentUsedInputMode;                              //@synthesize currentUsedInputMode=_currentUsedInputMode - In the implementation block
@property (nonatomic,retain) id extensionMatchingContext;                                             //@synthesize extensionMatchingContext=_extensionMatchingContext - In the implementation block
@property (retain) UIKeyboardInputMode * currentInputMode; 
@property (assign,nonatomic) UIKeyboardInputMode * currentInputModeInPreference; 
@property (nonatomic,retain) UITextInputMode * documentInputMode;                                     //@synthesize documentInputMode=_documentInputMode - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * lastUsedInputMode;                                 //@synthesize lastUsedInputMode=_lastUsedInputMode - In the implementation block
@property (nonatomic,readonly) UIKeyboardInputMode * hardwareInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentSystemInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentPublicInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * currentLinguisticInputMode; 
@property (nonatomic,readonly) UIKeyboardInputMode * lastUsedInputModeForCurrentContext; 
@property (nonatomic,readonly) BOOL containsEmojiInputMode; 
@property (nonatomic,readonly) BOOL containsDictationSupportedInputMode; 
@property (nonatomic,readonly) NSArray * activeDictationSupportedInputModeIdentifiers; 
@property (nonatomic,readonly) NSArray * activeDictationLanguages; 
@property (nonatomic,readonly) NSArray * enabledDictationLanguages; 
@property (nonatomic,copy) NSString * inputModeContextIdentifier;                                     //@synthesize inputModeContextIdentifier=_inputModeContextIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * additionalTextInputLocales;                                      //@synthesize additionalTextInputLocales=_additionalTextInputLocales - In the implementation block
@property (assign,nonatomic) BOOL shouldRunContinuousDiscovery;                                       //@synthesize shouldRunContinuousDiscovery=_shouldRunContinuousDiscovery - In the implementation block
@property (assign,nonatomic) id<UIKeyboardInputModeControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disableFloatingKeyboardFilter; 
+(id)sharedInputModeController;
+(id)hardwareInputModeAutomaticHardwareLayout;
+(id)ASCIICapableInputModeIdentifierForPreferredLanguages;
+(id)disallowedDictationLanguagesForDeviceLanguage;
+(id)inputModeIdentifierForPreferredLanguages:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(UITextInputMode *)documentInputMode;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(void)performWithoutExtensionInputModes:(/*^block*/id)arg1 ;
-(UIKeyboardInputMode *)lastUsedInputModeForCurrentContext;
-(UIKeyboardInputMode *)currentInputModeInPreference;
-(void)setDefaultKeyboardInputModes:(NSArray *)arg1 ;
-(UIKeyboardInputMode *)currentPublicInputMode;
-(void)handleSpecificHardwareKeyboard;
-(id)suggestedDictationLanguagesForDeviceLanguage;
-(void)setNextInputModeToUse:(UIKeyboardInputMode *)arg1 ;
-(void)setCurrentUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(BOOL)verifyKeyboardExtensionsWithApp;
-(NSArray *)enabledInputModes;
-(id)hardwareLayoutToUseForInputMode:(id)arg1 hardwareKeyboardLanguage:(id)arg2 countryCode:(id)arg3 ;
-(void)updateEnabledDictationAndSLSLanguagesWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)inputModeForASCIIToggleWithTraits:(id)arg1 ;
-(id)updateEnabledDictationLanguages:(BOOL)arg1 ;
-(void)setShouldRunContinuousDiscovery:(BOOL)arg1 ;
-(id)_allExtensionsFromMatchingExtensions:(id)arg1 ;
-(void)switchToCurrentSystemInputMode;
-(id)init;
-(NSArray *)defaultKeyboardInputModes;
-(id)suggestedInputModesForCurrentLocale:(BOOL)arg1 fallbackToDefaultInputModes:(BOOL)arg2 ;
-(NSArray *)enabledDictationLanguages;
-(void)setDisableFloatingKeyboardFilter:(BOOL)arg1 ;
-(BOOL)_mayContainExtensionInputModes;
-(id)userSelectableInputModesFromInputModes:(id)arg1 ;
-(void)setExtensionMatchingContext:(id)arg1 ;
-(id)inputModeByReplacingSoftwareLayoutWithSoftwareLayout:(id)arg1 inInputMode:(id)arg2 ;
-(id)hardwareLayoutToUseForInputMode:(id)arg1 ;
-(NSArray *)enabledInputModeIdentifiers;
-(NSArray *)supportedInputModeIdentifiers;
-(id)_systemInputModePassingTest:(/*^block*/id)arg1 ;
-(NSArray *)userSelectableKeyboardInputModes;
-(void)getHardwareKeyboardLanguage:(id*)arg1 countryCode:(id*)arg2 ;
-(void)setCurrentInputMode:(UIKeyboardInputMode *)arg1 ;
-(BOOL)isDictationLanguageEnabled:(id)arg1 ;
-(UIKeyboardInputMode *)hardwareInputMode;
-(void)startConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(NSArray *)activeUserSelectableInputModeIdentifiers;
-(void)dealloc;
-(BOOL)deviceStateIsLocked;
-(void)didAcceptAddKeyboardInputMode;
-(void)setDictationSLSLanguagesEnabled:(id)arg1 ;
-(id)inputModeLastUsedForLanguage:(id)arg1 includingExtensions:(BOOL)arg2 ;
-(void)keyboardsPreferencesChanged:(id)arg1 ;
-(void)saveDeviceUnlockPasscodeInputModes;
-(id)getDictationSLSLanguagesEnabled;
-(void)performWithForcedExtensionInputModes:(/*^block*/id)arg1 ;
-(UIKeyboardInputMode *)currentInputMode;
-(BOOL)containsEmojiInputMode;
-(id)extensionInputModes;
-(NSArray *)activeDictationLanguages;
-(void)extensionsChanged;
-(void)setDefaultNormalizedInputModes:(NSArray *)arg1 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2 skipEmoji:(BOOL)arg3 ;
-(id)nextInputModeToUseForTraits:(id)arg1 updatePreference:(BOOL)arg2 ;
-(UIKeyboardInputMode *)currentLinguisticInputMode;
-(void)setKeyboardInputModeIdentifiers:(NSArray *)arg1 ;
-(id)inputModeIdentifierLastUsedForLanguage:(id)arg1 ;
-(id)_MCFilteredExtensionIdentifiers;
-(BOOL)isLockscreenPasscodeKeyboard;
-(BOOL)shouldRunContinuousDiscovery;
-(void)_setCurrentAndNextInputModePreference;
-(NSArray *)defaultRawInputModes;
-(void)_removeInputModes:(id)arg1 ;
-(void)updateLastUsedInputMode:(id)arg1 ;
-(id)currentSystemInputModeExcludingEmoji:(BOOL)arg1 ;
-(void)_clearAllExtensionsIfNeeded;
-(NSString *)inputModeContextIdentifier;
-(void)loadSuggestedInputModesForSiriLanguage;
-(id)nextInputModeFromList:(id)arg1 withFilter:(unsigned long long)arg2 withTraits:(id)arg3 ;
-(id)inputModeLastUsedForLanguage:(id)arg1 ;
-(void)setNormalizedInputModes:(NSArray *)arg1 ;
-(id)suggestedInputModesForLocales:(id)arg1 ;
-(void)handleLastUsedInputMode:(id)arg1 withNewInputMode:(id)arg2 ;
-(NSArray *)normalizedInputModes;
-(void)setDefaultInputModes:(NSArray *)arg1 ;
-(id)_systemInputModePassingLanguageTest:(/*^block*/id)arg1 ;
-(id)enabledInputModeIdentifiers:(BOOL)arg1 ;
-(void)updateUserSelectableInputModes;
-(void)setLastUsedInputMode:(UIKeyboardInputMode *)arg1 ;
-(void)_clearAllExtensions;
-(UIKeyboardInputMode *)currentSystemInputMode;
-(void)startDictationConnectionForFileAtURL:(id)arg1 forInputModeIdentifier:(id)arg2 ;
-(BOOL)containsDictationSupportedInputMode;
-(id)userSelectableInputModeIdentifiersFromInputModeIdentifiers:(id)arg1 ;
-(NSArray *)suggestedInputModesForSiriLanguage;
-(id)lastUsedInputModeForTextInputMode:(id)arg1 ;
-(NSArray *)enabledInputModeLanguages;
-(BOOL)disableFloatingKeyboardFilter;
-(id)textInputModeForResponder:(id)arg1 ;
-(id)filteredPadInputModesFromInputModes:(id)arg1 withRules:(id)arg2 ;
-(void)didEnterBackground:(id)arg1 ;
-(UIKeyboardInputMode *)lastUsedInputMode;
-(NSArray *)defaultInputModes;
-(void)showAddKeyboardAlertForInputModeIdentifier:(id)arg1 ;
-(UIKeyboardInputMode *)currentUsedInputMode;
-(id)inputModeWithIdentifier:(id)arg1 ;
-(void)_beginContinuousDiscoveryIfNeeded;
-(void)_trackInputModeIfNecessary:(id)arg1 ;
-(void)stopDictation;
-(NSArray *)additionalTextInputLocales;
-(void)updateDefaultInputModesIfNecessaryForIdiom;
-(NSArray *)defaultNormalizedInputModes;
-(void)setAdditionalTextInputLocales:(NSArray *)arg1 ;
-(id)suggestedInputModesForCurrentHardwareKeyboardAndSuggestedInputModes:(id)arg1 ;
-(void)setEnabledInputModes:(NSArray *)arg1 ;
-(NSArray *)allowedExtensions;
-(void)switchToDictationInputMode;
-(NSArray *)keyboardInputModes;
-(NSArray *)normalizedEnabledInputModeIdentifiers;
-(void)clearNextInputModeToUse;
-(id)fallbackCurrentInputModeForFilteredInputMode:(id)arg1 fromInputModes:(id)arg2 ;
-(void)setCurrentInputModeInPreference:(UIKeyboardInputMode *)arg1 ;
-(id)inputModeToAddForKeyboardLanguage:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3 ;
-(id)inputModesByAppendingApplicationLanguagesToInputModes:(id)arg1 ;
-(NSArray *)inputModesWithoutHardwareSupport;
-(void)setInputModeContextIdentifier:(NSString *)arg1 ;
-(void)setSuggestedInputModesForSiriLanguage:(NSArray *)arg1 ;
-(id)inputModeIdentifierLastUsedForLanguage:(id)arg1 includingExtensions:(BOOL)arg2 ;
-(void)setDelegate:(id<UIKeyboardInputModeControllerDelegate>)arg1 ;
-(id)supportedInputModesFromArray:(id)arg1 ;
-(void)_setCurrentInputMode:(id)arg1 force:(BOOL)arg2 ;
-(id)suggestedInputModesForHardwareKeyboardLanguage:(id)arg1 countryCode:(id)arg2 inputModes:(id)arg3 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 ;
-(BOOL)currentLocaleRequiresExtendedSetup;
-(void)setKeyboardInputModes:(NSArray *)arg1 ;
-(void)setUserSelectableKeyboardInputModes:(NSArray *)arg1 ;
-(id)defaultEnabledInputModesForCurrentLocale:(BOOL)arg1 ;
-(id)identifiersFromInputModes:(id)arg1 ;
-(id)supportedFullModesForHardwareKeyboard:(id)arg1 countryCode:(id)arg2 activeModes:(id)arg3 matchedMode:(id*)arg4 ;
-(id)suggestedInputModesForPreferredLanguages;
-(UIKeyboardInputMode *)nextInputModeToUse;
-(id)suggestedInputModesForCurrentLocale;
-(NSArray *)activeDictationSupportedInputModeIdentifiers;
-(id)filteredInputModesForSiriLanguageFromInputModes:(id)arg1 ;
-(id)filteredTVInputModesFromInputModes:(id)arg1 ;
-(id)nextInputModeInPreferenceListForTraits:(id)arg1 updatePreference:(BOOL)arg2 ;
-(id)extensionMatchingContext;
-(id)keyboardLanguageForDictationLanguage:(id)arg1 ;
-(id)activeInputModes;
-(NSArray *)userSelectableKeyboardInputModeIdentifiers;
-(id)appendPasscodeInputModes:(id)arg1 ;
-(NSArray *)activeInputModeIdentifiers;
-(id)nextInputModeToUseForTraits:(id)arg1 ;
-(NSArray *)keyboardInputModeIdentifiers;
-(void)releaseAddKeyboardNotification;
-(BOOL)identifierIsValidSystemInputMode:(id)arg1 ;
-(id)inputModesFromIdentifiers:(id)arg1 ;
-(void)updateCurrentInputMode:(id)arg1 ;
-(void)_inputModeChangedWhileContextTracked;
-(void)setUserSelectableKeyboardInputModeIdentifiers:(NSArray *)arg1 ;
-(id<UIKeyboardInputModeControllerDelegate>)delegate;
-(void)willEnterForeground:(id)arg1 ;
-(id)defaultDictationLanguages:(id)arg1 ;
-(id)fullInputModeFromIdentifier:(id)arg1 hardwareKeyboardLanguage:(id)arg2 ;
-(id)activeUserSelectableInputModes;
-(void)setDefaultRawInputModes:(NSArray *)arg1 ;
-(id)fallbackCurrentInputModeForFilteredInputModeIdentifier:(id)arg1 fromInputModeIdentifiers:(id)arg2 ;
-(void)updateCurrentAndNextInputModes;
@end
