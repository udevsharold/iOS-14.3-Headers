/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {

	NSArray* _plugins;
	HDDaemon* _daemon;
	NSArray* _allowablePluginDirectoryPaths;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;                           //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,copy) NSArray * allowablePluginDirectoryPaths;              //@synthesize allowablePluginDirectoryPaths=_allowablePluginDirectoryPaths - In the implementation block
-(void)setDaemon:(HDDaemon *)arg1 ;
-(HDDaemon *)daemon;
-(void)setAllowablePluginDirectoryPaths:(NSArray *)arg1 ;
-(id)_pluginsDirectoryPath;
-(Class)_loadPrincipalClassConformingToProtocols:(id)arg1 fromBundleAtPath:(id)arg2 ;
-(id)_principalClassProtocols;
-(id)createExtensionsForDaemon:(id)arg1 ;
-(id)_pluginDirectoryPaths;
-(id)pluginsConformingToProtocol:(id)arg1 ;
-(id)_loadPrincipalClassesConformingToProtocols:(id)arg1 fromBundlesInDirectoryAtPath:(id)arg2 error:(id*)arg3 ;
-(NSArray *)allowablePluginDirectoryPaths;
-(id)_pluginClasses;
-(id)initWithDaemon:(id)arg1 ;
-(id)_builtInPluginClasses;
-(void)_loadPlugins;
-(id)_createPluginsFromClasses:(id)arg1 ;
-(id)createExtensionsForProfile:(id)arg1 ;
-(id)_internalPluginsDirectoryPaths;
@end
