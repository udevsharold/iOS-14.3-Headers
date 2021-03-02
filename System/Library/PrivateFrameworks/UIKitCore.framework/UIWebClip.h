/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebClipDelegate;
@class NSString, NSURL, NSArray, UIImage, NSMutableData, NSURLConnection, NSUserActivity;

@interface UIWebClip : NSObject {

	NSString* identifier;
	NSURL* pageURL;
	NSArray* icons;
	unsigned long long currentIconIndex;
	NSURL* startupImageURL;
	NSURL* startupLandscapeImageURL;
	NSString* title;
	NSString* applicationBundleIdentifier;
	unsigned long long bundleVersion;
	BOOL fullScreen;
	BOOL classicMode;
	BOOL removalDisallowed;
	BOOL iconIsScreenShotBased;
	BOOL iconIsPrecomposed;
	BOOL iconIsPrerendered;
	unsigned long long supportedOrientations;
	long long statusBarStyle;
	UIImage* iconImage;
	UIImage* startupImage;
	UIImage* startupLandscapeImage;
	UIImage* initialLaunchImage;
	id<WebClipDelegate> delegate;
	NSMutableData* _customIconData;
	NSURLConnection* _iconConnection;
	NSMutableData* _customStartupImageData;
	NSURLConnection* _startupImageConnection;
	NSMutableData* _customStartupLandscapeImageData;
	NSURLConnection* _startupLandscapeImageConnection;
	BOOL _isAppClip;
	BOOL _scenelessBackgroundLaunch;
	BOOL _ignoreManifestScope;
	BOOL _configurationIsManaged;
	NSString* _shortcutIdentifier;
	unsigned long long _contentMode;
	unsigned long long _webClipStatusBarStyle;

}

@property (copy) NSString * identifier; 
@property (nonatomic,retain) NSURL * pageURL; 
@property (retain) NSArray * icons; 
@property (retain) NSURL * startupImageURL; 
@property (retain) NSURL * startupLandscapeImageURL; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,copy) NSString * shortcutIdentifier;                           //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * applicationLaunchURL; 
@property (nonatomic,readonly) NSUserActivity * appClipUserActivity; 
@property (nonatomic,readonly) unsigned long long bundleVersion; 
@property (assign) BOOL fullScreen; 
@property (assign) BOOL classicMode; 
@property (assign) BOOL removalDisallowed; 
@property (assign) BOOL isAppClip;                                                  //@synthesize isAppClip=_isAppClip - In the implementation block
@property (assign) BOOL scenelessBackgroundLaunch;                                  //@synthesize scenelessBackgroundLaunch=_scenelessBackgroundLaunch - In the implementation block
@property (assign) unsigned long long contentMode;                                  //@synthesize contentMode=_contentMode - In the implementation block
@property (assign) BOOL ignoreManifestScope;                                        //@synthesize ignoreManifestScope=_ignoreManifestScope - In the implementation block
@property (assign) BOOL configurationIsManaged;                                     //@synthesize configurationIsManaged=_configurationIsManaged - In the implementation block
@property (readonly) BOOL iconIsScreenShotBased; 
@property (readonly) BOOL iconIsPrecomposed; 
@property (readonly) BOOL iconIsPrerendered; 
@property (assign) unsigned long long supportedOrientations; 
@property (assign) long long statusBarStyle; 
@property (assign,nonatomic) unsigned long long webClipStatusBarStyle;              //@synthesize webClipStatusBarStyle=_webClipStatusBarStyle - In the implementation block
@property (readonly) NSString * iconImagePath; 
@property (nonatomic,retain,readonly) UIImage * iconImage; 
@property (nonatomic,retain) UIImage * startupImage; 
@property (nonatomic,retain) UIImage * startupLandscapeImage; 
@property (nonatomic,retain) UIImage * initialLaunchImage; 
@property (assign,nonatomic,__weak) id<WebClipDelegate> delegate; 
+(id)appClips;
+(id)webClips;
+(BOOL)_webClipFullScreenValueForMetaTagContent:(id)arg1 ;
+(unsigned long long)_webClipOrientationsForMetaTagContent:(id)arg1 ;
+(id)urlForWebClipWithIdentifier:(id)arg1 ;
+(id)pathForWebClipWithIdentifier:(id)arg1 ;
+(id)webClipWithURL:(id)arg1 ;
+(id)_normalizedWebClipIdentifierFromBundleIdentifier:(id)arg1 ;
+(id)webClipWithIdentifier:(id)arg1 ;
+(id)clipsIncludingWebClips:(BOOL)arg1 includingAppClips:(BOOL)arg2 ;
+(id)webClipsDirectoryPath;
+(id)_contentForMetaName:(id)arg1 inWebDocumentView:(id)arg2 ;
+(long long)_webClipStatusBarStyleForMetaTagContent:(id)arg1 ;
+(id)_webClipLinkTagsFromWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebClipLinkTags:(id)arg1 pageURL:(id)arg2 ;
+(BOOL)bundleIdentifierContainsWebClipIdentifier:(id)arg1 ;
+(id)webClipTitleForWebDocumentView:(id)arg1 ;
+(id)webClipIdentifierFromBundleIdentifier:(id)arg1 ;
+(unsigned long long)webClipOrientationsForWebDocumentView:(id)arg1 ;
+(long long)webClipStatusBarStyleForWebDocumentView:(id)arg1 ;
+(id)pathForWebClipStorageWithIdentifier:(id)arg1 ;
+(BOOL)webClipFullScreenValueForWebDocumentView:(id)arg1 ;
+(id)pathForWebClipCacheWithIdentifier:(id)arg1 ;
+(BOOL)webClipClassicModeValueForWebDocumentView:(id)arg1 ;
+(id)webClipIconsForWebDocumentView:(id)arg1 ;
-(id)_initWithIdentifier:(id)arg1 ;
-(BOOL)isAppClip;
-(void)setIsAppClip:(BOOL)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(unsigned long long)bundleVersion;
-(BOOL)iconIsPrerendered;
-(unsigned long long)contentMode;
-(void)setIcons:(NSArray *)arg1 ;
-(NSURL *)pageURL;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(void)dealloc;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(UIImage *)iconImage;
-(NSString *)shortcutIdentifier;
-(BOOL)fullScreen;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPageURL:(NSURL *)arg1 ;
-(long long)statusBarStyle;
-(NSString *)identifier;
-(id)_info;
-(void)setClassicMode:(BOOL)arg1 ;
-(BOOL)removeFromDisk;
-(void)setStartupImage:(UIImage *)arg1 ;
-(BOOL)updateOnDisk;
-(void)setSupportedOrientations:(unsigned long long)arg1 ;
-(void)setContentModeWithString:(id)arg1 ;
-(UIImage *)startupImage;
-(void)updateCustomMediaLocationsWithWebClipLinkTags:(id)arg1 baseURL:(id)arg2 ;
-(void)setRemovalDisallowed:(BOOL)arg1 ;
-(void)_readPropertiesFromBundle:(id)arg1 ;
-(void)_reloadProperties;
-(id)_launchURLWithScheme:(id)arg1 ;
-(void)setStartupLandscapeImage:(UIImage *)arg1 ;
-(BOOL)_writeImage:(id)arg1 toDiskWithFileName:(id)arg2 ;
-(void)setInitialLaunchImage:(UIImage *)arg1 ;
-(id)_bundleResourceWithName:(id)arg1 ;
-(BOOL)iconIsPrecomposed;
-(id)_bundleImageWithName:(id)arg1 ;
-(BOOL)createOnDisk;
-(void)_setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 isScreenShotBased:(BOOL)arg3 ;
-(void)cancelMediaUpdate;
-(id)getStartupImage:(long long)arg1 ;
-(void)stopLoadingCustomIcon;
-(void)stopLoadingStartupImage;
-(void)setStartupImageURL:(NSURL *)arg1 ;
-(void)stopLoadingStartupLandscapeImage;
-(void)setStartupLandscapeImageURL:(NSURL *)arg1 ;
-(void)requestCustomIconUpdate;
-(void)requestCustomPortraitStartupImageUpdate;
-(NSString *)iconImagePath;
-(void)requestCustomLandscapeStartupImageUpdate;
-(BOOL)tryLoadingNextCustomIcon;
-(void)setIconImage:(id)arg1 isPrecomposed:(BOOL)arg2 ;
-(void)requestIconUpdateInSpringBoard;
-(UIImage *)initialLaunchImage;
-(NSUserActivity *)appClipUserActivity;
-(UIImage *)startupLandscapeImage;
-(void)configureWithMetaTags:(id)arg1 linkTags:(id)arg2 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(id)generateIconImageForFormat:(int)arg1 scale:(double)arg2 ;
-(void)setIconImageFromScreenshot:(id)arg1 ;
-(NSURL *)startupImageURL;
-(void)updateCustomMediaLocationsFromWebDocumentView:(id)arg1 ;
-(NSURL *)startupLandscapeImageURL;
-(BOOL)removalDisallowed;
-(BOOL)iconIsScreenShotBased;
-(unsigned long long)supportedOrientations;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(BOOL)scenelessBackgroundLaunch;
-(BOOL)ignoreManifestScope;
-(void)setScenelessBackgroundLaunch:(BOOL)arg1 ;
-(void)setIgnoreManifestScope:(BOOL)arg1 ;
-(BOOL)configurationIsManaged;
-(void)setConfigurationIsManaged:(BOOL)arg1 ;
-(unsigned long long)webClipStatusBarStyle;
-(void)setWebClipStatusBarStyle:(unsigned long long)arg1 ;
-(void)setContentMode:(unsigned long long)arg1 ;
-(void)setDelegate:(id<WebClipDelegate>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSURL *)applicationLaunchURL;
-(BOOL)classicMode;
-(void)setStatusBarStyle:(long long)arg1 ;
-(NSArray *)icons;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(id)bundleIdentifier;
-(NSString *)title;
-(id<WebClipDelegate>)delegate;
@end
