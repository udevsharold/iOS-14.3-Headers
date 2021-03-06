/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WKPreferences : NSObject <WKObject, NSCopying, NSSecureCoding> {

	ObjectStorage<WebKit::WebPreferences> _preferences;

}

@property (assign,setter=_setTelephoneNumberDetectionIsEnabled:,nonatomic) BOOL _telephoneNumberDetectionIsEnabled; 
@property (assign,setter=_setStorageBlockingPolicy:,nonatomic) long long _storageBlockingPolicy; 
@property (assign,setter=_setCompositingBordersVisible:,nonatomic) BOOL _compositingBordersVisible; 
@property (assign,setter=_setCompositingRepaintCountersVisible:,nonatomic) BOOL _compositingRepaintCountersVisible; 
@property (assign,setter=_setTiledScrollingIndicatorVisible:,nonatomic) BOOL _tiledScrollingIndicatorVisible; 
@property (assign,setter=_setResourceUsageOverlayVisible:,nonatomic) BOOL _resourceUsageOverlayVisible; 
@property (assign,setter=_setVisibleDebugOverlayRegions:,nonatomic) unsigned long long _visibleDebugOverlayRegions; 
@property (assign,setter=_setSimpleLineLayoutEnabled:,nonatomic) BOOL _simpleLineLayoutEnabled; 
@property (assign,setter=_setSimpleLineLayoutDebugBordersEnabled:,nonatomic) BOOL _simpleLineLayoutDebugBordersEnabled; 
@property (assign,setter=_setContentChangeObserverEnabled:,nonatomic) BOOL _contentChangeObserverEnabled; 
@property (assign,setter=_setAcceleratedDrawingEnabled:,nonatomic) BOOL _acceleratedDrawingEnabled; 
@property (assign,setter=_setDisplayListDrawingEnabled:,nonatomic) BOOL _displayListDrawingEnabled; 
@property (assign,setter=_setLargeImageAsyncDecodingEnabled:,nonatomic) BOOL _largeImageAsyncDecodingEnabled; 
@property (assign,setter=_setInAppBrowserPrivacyEnabled:,nonatomic) BOOL _inAppBrowserPrivacyEnabled; 
@property (assign,setter=_setNeedsInAppBrowserPrivacyQuirks:,nonatomic) BOOL _needsInAppBrowserPrivacyQuirks; 
@property (assign,setter=_setAnimatedImageAsyncDecodingEnabled:,nonatomic) BOOL _animatedImageAsyncDecodingEnabled; 
@property (assign,setter=_setTextAutosizingEnabled:,nonatomic) BOOL _textAutosizingEnabled; 
@property (assign,setter=_setSubpixelAntialiasedLayerTextEnabled:,nonatomic) BOOL _subpixelAntialiasedLayerTextEnabled; 
@property (assign,setter=_setDeveloperExtrasEnabled:,nonatomic) BOOL _developerExtrasEnabled; 
@property (assign,setter=_setLogsPageMessagesToSystemConsoleEnabled:,nonatomic) BOOL _logsPageMessagesToSystemConsoleEnabled; 
@property (assign,setter=_setHiddenPageDOMTimerThrottlingEnabled:,nonatomic) BOOL _hiddenPageDOMTimerThrottlingEnabled; 
@property (assign,setter=_setHiddenPageDOMTimerThrottlingAutoIncreases:,nonatomic) BOOL _hiddenPageDOMTimerThrottlingAutoIncreases; 
@property (assign,setter=_setPageVisibilityBasedProcessSuppressionEnabled:,nonatomic) BOOL _pageVisibilityBasedProcessSuppressionEnabled; 
@property (assign,setter=_setAllowFileAccessFromFileURLs:,nonatomic) BOOL _allowFileAccessFromFileURLs; 
@property (assign,setter=_setJavaScriptRuntimeFlags:,nonatomic) unsigned long long _javaScriptRuntimeFlags; 
@property (assign,setter=_setStandalone:,getter=_isStandalone,nonatomic) BOOL _standalone; 
@property (assign,setter=_setDiagnosticLoggingEnabled:,nonatomic) BOOL _diagnosticLoggingEnabled; 
@property (assign,setter=_setDefaultFontSize:,nonatomic) unsigned long long _defaultFontSize; 
@property (assign,setter=_setDefaultFixedPitchFontSize:,nonatomic) unsigned long long _defaultFixedPitchFontSize; 
@property (setter=_setFixedPitchFontFamily:,nonatomic,copy) NSString * _fixedPitchFontFamily; 
@property (assign,setter=_setOfflineApplicationCacheIsEnabled:,nonatomic) BOOL _offlineApplicationCacheIsEnabled; 
@property (assign,setter=_setFullScreenEnabled:,nonatomic) BOOL _fullScreenEnabled; 
@property (assign,setter=_setShouldSuppressKeyboardInputDuringProvisionalNavigation:,nonatomic) BOOL _shouldSuppressKeyboardInputDuringProvisionalNavigation; 
@property (assign,setter=_setAllowsPictureInPictureMediaPlayback:,nonatomic) BOOL _allowsPictureInPictureMediaPlayback; 
@property (assign,setter=_setApplePayCapabilityDisclosureAllowed:,nonatomic) BOOL _applePayCapabilityDisclosureAllowed; 
@property (assign,setter=_setLoadsImagesAutomatically:,nonatomic) BOOL _loadsImagesAutomatically; 
@property (assign,setter=_setPeerConnectionEnabled:,nonatomic) BOOL _peerConnectionEnabled; 
@property (assign,setter=_setMediaDevicesEnabled:,nonatomic) BOOL _mediaDevicesEnabled; 
@property (assign,setter=_setScreenCaptureEnabled:,nonatomic) BOOL _screenCaptureEnabled; 
@property (assign,setter=_setMockCaptureDevicesEnabled:,nonatomic) BOOL _mockCaptureDevicesEnabled; 
@property (assign,setter=_setMockCaptureDevicesPromptEnabled:,nonatomic) BOOL _mockCaptureDevicesPromptEnabled; 
@property (assign,setter=_setMediaCaptureRequiresSecureConnection:,nonatomic) BOOL _mediaCaptureRequiresSecureConnection; 
@property (assign,setter=_setEnumeratingAllNetworkInterfacesEnabled:,nonatomic) BOOL _enumeratingAllNetworkInterfacesEnabled; 
@property (assign,setter=_setICECandidateFilteringEnabled:,nonatomic) BOOL _iceCandidateFilteringEnabled; 
@property (assign,setter=_setWebRTCLegacyAPIEnabled:,nonatomic) BOOL _webRTCLegacyAPIEnabled; 
@property (assign,setter=_setInactiveMediaCaptureSteamRepromptIntervalInMinutes:,nonatomic) double _inactiveMediaCaptureSteamRepromptIntervalInMinutes; 
@property (assign,setter=_setInterruptAudioOnPageVisibilityChangeEnabled:,nonatomic) BOOL _interruptAudioOnPageVisibilityChangeEnabled; 
@property (assign,setter=_setJavaScriptCanAccessClipboard:,nonatomic) BOOL _javaScriptCanAccessClipboard; 
@property (assign,setter=_setDOMPasteAllowed:,nonatomic) BOOL _domPasteAllowed; 
@property (assign,setter=_setShouldAllowUserInstalledFonts:,nonatomic) BOOL _shouldAllowUserInstalledFonts; 
@property (assign,setter=_setShouldAllowDesignSystemUIFonts:,nonatomic) BOOL _shouldAllowDesignSystemUIFonts; 
@property (assign,setter=_setEditableLinkBehavior:,nonatomic) long long _editableLinkBehavior; 
@property (assign,setter=_setAVFoundationEnabled:,nonatomic) BOOL _avFoundationEnabled; 
@property (assign,setter=_setShouldEnableTextAutosizingBoost:,nonatomic) BOOL _shouldEnableTextAutosizingBoost; 
@property (assign,setter=_setSafeBrowsingEnabled:,getter=_isSafeBrowsingEnabled,nonatomic) BOOL _safeBrowsingEnabled; 
@property (assign,setter=_setColorFilterEnabled:,nonatomic) BOOL _colorFilterEnabled; 
@property (assign,setter=_setPunchOutWhiteBackgroundsInDarkMode:,nonatomic) BOOL _punchOutWhiteBackgroundsInDarkMode; 
@property (assign,setter=_setLowPowerVideoAudioBufferSizeEnabled:,nonatomic) BOOL _lowPowerVideoAudioBufferSizeEnabled; 
@property (assign,setter=_setShouldIgnoreMetaViewport:,nonatomic) BOOL _shouldIgnoreMetaViewport; 
@property (assign,setter=_setVideoQualityIncludesDisplayCompositingEnabled:,nonatomic) BOOL _videoQualityIncludesDisplayCompositingEnabled; 
@property (assign,setter=_setWebAnimationsCSSIntegrationEnabled:,nonatomic) BOOL _webAnimationsCSSIntegrationEnabled; 
@property (assign,setter=_setDeviceOrientationEventEnabled:,nonatomic) BOOL _deviceOrientationEventEnabled; 
@property (assign,setter=_setNeedsSiteSpecificQuirks:,nonatomic) BOOL _needsSiteSpecificQuirks; 
@property (assign,setter=_setItpDebugModeEnabled:,nonatomic) BOOL _itpDebugModeEnabled; 
@property (assign,setter=_setMediaSourceEnabled:,nonatomic) BOOL _mediaSourceEnabled; 
@property (assign,setter=_setSecureContextChecksEnabled:,nonatomic) BOOL _secureContextChecksEnabled; 
@property (assign,setter=_setRemotePlaybackEnabled:,nonatomic) BOOL _remotePlaybackEnabled; 
@property (assign,setter=_setWebAudioEnabled:,nonatomic) BOOL _webAudioEnabled; 
@property (assign,setter=_setAcceleratedCompositingEnabled:,nonatomic) BOOL _acceleratedCompositingEnabled; 
@property (assign,setter=_setRequestAnimationFrameEnabled:,nonatomic) BOOL _requestAnimationFrameEnabled; 
@property (nonatomic,readonly) BOOL _isITPDatabaseEnabled; 
@property (assign,setter=_setServiceWorkerEntitlementDisabledForTesting:,nonatomic) BOOL _serviceWorkerEntitlementDisabledForTesting; 
@property (assign,setter=_setAccessibilityIsolatedTreeEnabled:,nonatomic) BOOL _accessibilityIsolatedTreeEnabled; 
@property (assign,nonatomic) BOOL javaScriptEnabled; 
@property (assign,nonatomic) double minimumFontSize; 
@property (assign,nonatomic) BOOL javaScriptCanOpenWindowsAutomatically; 
@property (assign,getter=isFraudulentWebsiteWarningEnabled,nonatomic) BOOL fraudulentWebsiteWarningEnabled; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_experimentalFeatures;
+(id)_internalDebugFeatures;
-(BOOL)_offlineApplicationCacheIsEnabled;
-(void)_setSafeBrowsingEnabled:(BOOL)arg1 ;
-(void)_setContentChangeObserverEnabled:(BOOL)arg1 ;
-(void)_setItpDebugModeEnabled:(BOOL)arg1 ;
-(BOOL)_needsSiteSpecificQuirks;
-(void)_setMediaSourceEnabled:(BOOL)arg1 ;
-(void)_setHiddenPageDOMTimerThrottlingAutoIncreases:(BOOL)arg1 ;
-(BOOL)_screenCaptureEnabled;
-(void)_setInAppBrowserPrivacyEnabled:(BOOL)arg1 ;
-(void)setJavaScriptCanOpenWindowsAutomatically:(BOOL)arg1 ;
-(void)_setSubpixelAntialiasedLayerTextEnabled:(BOOL)arg1 ;
-(BOOL)_simpleLineLayoutDebugBordersEnabled;
-(unsigned long long)_defaultFontSize;
-(BOOL)_diagnosticLoggingEnabled;
-(void)_setDefaultFixedPitchFontSize:(unsigned long long)arg1 ;
-(id)init;
-(void)_setLowPowerVideoAudioBufferSizeEnabled:(BOOL)arg1 ;
-(void)_setTelephoneNumberDetectionIsEnabled:(BOOL)arg1 ;
-(BOOL)_applePayCapabilityDisclosureAllowed;
-(void)_setFixedPitchFontFamily:(id)arg1 ;
-(BOOL)_iceCandidateFilteringEnabled;
-(void)_setShouldSuppressKeyboardInputDuringProvisionalNavigation:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setLogsPageMessagesToSystemConsoleEnabled:(BOOL)arg1 ;
-(void)_setRequestAnimationFrameEnabled:(BOOL)arg1 ;
-(void)_setApplePayCapabilityDisclosureAllowed:(BOOL)arg1 ;
-(void)_setMediaCaptureRequiresSecureConnection:(BOOL)arg1 ;
-(void)_setCompositingBordersVisible:(BOOL)arg1 ;
-(BOOL)_logsPageMessagesToSystemConsoleEnabled;
-(void)dealloc;
-(BOOL)_lowPowerVideoAudioBufferSizeEnabled;
-(BOOL)_domPasteAllowed;
-(BOOL)_animatedImageAsyncDecodingEnabled;
-(BOOL)_pageVisibilityBasedProcessSuppressionEnabled;
-(void)_setMockCaptureDevicesEnabled:(BOOL)arg1 ;
-(void)_setTextAutosizingEnabled:(BOOL)arg1 ;
-(unsigned long long)_visibleDebugOverlayRegions;
-(void)_setEditableLinkBehavior:(long long)arg1 ;
-(BOOL)_requestAnimationFrameEnabled;
-(BOOL)_hiddenPageDOMTimerThrottlingAutoIncreases;
-(BOOL)_serviceWorkerEntitlementDisabledForTesting;
-(BOOL)_itpDebugModeEnabled;
-(BOOL)_mockCaptureDevicesPromptEnabled;
-(void)_setResourceUsageOverlayVisible:(BOOL)arg1 ;
-(BOOL)_developerExtrasEnabled;
-(void)_setInterruptAudioOnPageVisibilityChangeEnabled:(BOOL)arg1 ;
-(void)_setDiagnosticLoggingEnabled:(BOOL)arg1 ;
-(BOOL)_deviceOrientationEventEnabled;
-(BOOL)_secureContextChecksEnabled;
-(NSString *)_fixedPitchFontFamily;
-(BOOL)_hiddenPageDOMTimerThrottlingEnabled;
-(BOOL)_accessibilityIsolatedTreeEnabled;
-(void)_setAnimatedImageAsyncDecodingEnabled:(BOOL)arg1 ;
-(void)_setWebRTCLegacyAPIEnabled:(BOOL)arg1 ;
-(BOOL)_colorFilterEnabled;
-(void)_setFullScreenEnabled:(BOOL)arg1 ;
-(void)_setShouldEnableTextAutosizingBoost:(BOOL)arg1 ;
-(BOOL)_displayListDrawingEnabled;
-(id)initWithCoder:(id)arg1 ;
-(void)_setAcceleratedCompositingEnabled:(BOOL)arg1 ;
-(void)_setNeedsInAppBrowserPrivacyQuirks:(BOOL)arg1 ;
-(BOOL)_peerConnectionEnabled;
-(BOOL)_mediaCaptureRequiresSecureConnection;
-(void)_setDisplayListDrawingEnabled:(BOOL)arg1 ;
-(void)_setAVFoundationEnabled:(BOOL)arg1 ;
-(BOOL)_isStandalone;
-(void)_setSimpleLineLayoutDebugBordersEnabled:(BOOL)arg1 ;
-(void)_setColorFilterEnabled:(BOOL)arg1 ;
-(BOOL)_interruptAudioOnPageVisibilityChangeEnabled;
-(BOOL)_largeImageAsyncDecodingEnabled;
-(BOOL)_remotePlaybackEnabled;
-(BOOL)javaScriptCanOpenWindowsAutomatically;
-(void)_setLargeImageAsyncDecodingEnabled:(BOOL)arg1 ;
-(void)setFraudulentWebsiteWarningEnabled:(BOOL)arg1 ;
-(BOOL)_isEnabledForInternalDebugFeature:(id)arg1 ;
-(void)_setDeveloperExtrasEnabled:(BOOL)arg1 ;
-(BOOL)_javaScriptCanAccessClipboard;
-(BOOL)_loadsImagesAutomatically;
-(void)_setVideoQualityIncludesDisplayCompositingEnabled:(BOOL)arg1 ;
-(BOOL)_allowsPictureInPictureMediaPlayback;
-(void)_setAllowFileAccessFromFileURLs:(BOOL)arg1 ;
-(BOOL)javaScriptEnabled;
-(BOOL)_avFoundationEnabled;
-(void)_setWebAnimationsCSSIntegrationEnabled:(BOOL)arg1 ;
-(BOOL)_webRTCLegacyAPIEnabled;
-(BOOL)isFraudulentWebsiteWarningEnabled;
-(BOOL)_punchOutWhiteBackgroundsInDarkMode;
-(void)_setPunchOutWhiteBackgroundsInDarkMode:(BOOL)arg1 ;
-(BOOL)_resourceUsageOverlayVisible;
-(void)_setDefaultFontSize:(unsigned long long)arg1 ;
-(BOOL)_isITPDatabaseEnabled;
-(void)_setAllowsPictureInPictureMediaPlayback:(BOOL)arg1 ;
-(void)setJavaScriptEnabled:(BOOL)arg1 ;
-(BOOL)_videoQualityIncludesDisplayCompositingEnabled;
-(BOOL)_isEnabledForFeature:(id)arg1 ;
-(void)_setStorageBlockingPolicy:(long long)arg1 ;
-(unsigned long long)_defaultFixedPitchFontSize;
-(double)_inactiveMediaCaptureSteamRepromptIntervalInMinutes;
-(BOOL)_shouldIgnoreMetaViewport;
-(BOOL)_allowFileAccessFromFileURLs;
-(BOOL)_mediaDevicesEnabled;
-(void)_setJavaScriptCanAccessClipboard:(BOOL)arg1 ;
-(BOOL)_webAnimationsCSSIntegrationEnabled;
-(void)_setEnabled:(BOOL)arg1 forInternalDebugFeature:(id)arg2 ;
-(void)_setNeedsSiteSpecificQuirks:(BOOL)arg1 ;
-(BOOL)_inAppBrowserPrivacyEnabled;
-(void)_setAccessibilityIsolatedTreeEnabled:(BOOL)arg1 ;
-(void)_setAcceleratedDrawingEnabled:(BOOL)arg1 ;
-(void)_setEnabled:(BOOL)arg1 forExperimentalFeature:(id)arg2 ;
-(BOOL)_isSafeBrowsingEnabled;
-(BOOL)_compositingRepaintCountersVisible;
-(BOOL)_contentChangeObserverEnabled;
-(void)_setJavaScriptRuntimeFlags:(unsigned long long)arg1 ;
-(void)_setCompositingRepaintCountersVisible:(BOOL)arg1 ;
-(BOOL)_tiledScrollingIndicatorVisible;
-(void)_setEnumeratingAllNetworkInterfacesEnabled:(BOOL)arg1 ;
-(BOOL)_mediaSourceEnabled;
-(void)_setInactiveMediaCaptureSteamRepromptIntervalInMinutes:(double)arg1 ;
-(void)_setHiddenPageDOMTimerThrottlingEnabled:(BOOL)arg1 ;
-(void)_setShouldAllowDesignSystemUIFonts:(BOOL)arg1 ;
-(BOOL)_mockCaptureDevicesEnabled;
-(void)_setSecureContextChecksEnabled:(BOOL)arg1 ;
-(void)_setServiceWorkerEntitlementDisabledForTesting:(BOOL)arg1 ;
-(BOOL)_compositingBordersVisible;
-(BOOL)_acceleratedDrawingEnabled;
-(void)_setOfflineApplicationCacheIsEnabled:(BOOL)arg1 ;
-(void)_setVisibleDebugOverlayRegions:(unsigned long long)arg1 ;
-(BOOL)_telephoneNumberDetectionIsEnabled;
-(BOOL)_simpleLineLayoutEnabled;
-(BOOL)_subpixelAntialiasedLayerTextEnabled;
-(void)_setPeerConnectionEnabled:(BOOL)arg1 ;
-(void)_setShouldIgnoreMetaViewport:(BOOL)arg1 ;
-(void)_setDeviceOrientationEventEnabled:(BOOL)arg1 ;
-(void)_setMediaDevicesEnabled:(BOOL)arg1 ;
-(void)_setMockCaptureDevicesPromptEnabled:(BOOL)arg1 ;
-(BOOL)_acceleratedCompositingEnabled;
-(void)_setEnabled:(BOOL)arg1 forFeature:(id)arg2 ;
-(void)_setScreenCaptureEnabled:(BOOL)arg1 ;
-(BOOL)_shouldAllowUserInstalledFonts;
-(BOOL)_webAudioEnabled;
-(void)_setDOMPasteAllowed:(BOOL)arg1 ;
-(BOOL)_needsInAppBrowserPrivacyQuirks;
-(void)setMinimumFontSize:(double)arg1 ;
-(void)_setSimpleLineLayoutEnabled:(BOOL)arg1 ;
-(BOOL)_shouldAllowDesignSystemUIFonts;
-(BOOL)_fullScreenEnabled;
-(BOOL)_isEnabledForExperimentalFeature:(id)arg1 ;
-(void)_setPageVisibilityBasedProcessSuppressionEnabled:(BOOL)arg1 ;
-(BOOL)_enumeratingAllNetworkInterfacesEnabled;
-(void)_setShouldAllowUserInstalledFonts:(BOOL)arg1 ;
-(unsigned long long)_javaScriptRuntimeFlags;
-(BOOL)_textAutosizingEnabled;
-(void)_setICECandidateFilteringEnabled:(BOOL)arg1 ;
-(double)minimumFontSize;
-(Object*)_apiObject;
-(void)_setLoadsImagesAutomatically:(BOOL)arg1 ;
-(BOOL)_shouldSuppressKeyboardInputDuringProvisionalNavigation;
-(void)_setTiledScrollingIndicatorVisible:(BOOL)arg1 ;
-(void)_setWebAudioEnabled:(BOOL)arg1 ;
-(long long)_storageBlockingPolicy;
-(void)_setRemotePlaybackEnabled:(BOOL)arg1 ;
-(void)_setStandalone:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldEnableTextAutosizingBoost;
-(long long)_editableLinkBehavior;
@end

