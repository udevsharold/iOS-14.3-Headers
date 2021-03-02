/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMBalloonApp.h>

@class NSExtension, LSPlugInKitProxy;

@interface _IMBalloonExtensionApp : IMBalloonApp {

	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;

}

@property (nonatomic,retain) NSExtension * extension;               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) LSPlugInKitProxy * proxy;              //@synthesize proxy=_proxy - In the implementation block
-(NSExtension *)extension;
-(id)plugin;
-(id)applicationType;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(LSPlugInKitProxy *)proxy;
-(id)itemID;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(BOOL)isEnabled;
-(void)setIsEnabled:(BOOL)arg1 ;
-(BOOL)showInBrowser;
-(BOOL)isBetaPlugin;
-(id)version;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)showableInBrowser;
-(BOOL)isLaunchProhibited;
-(BOOL)isStickerPackOnly;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4 ;
@end
