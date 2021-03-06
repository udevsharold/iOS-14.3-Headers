/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconListLayoutProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSString;

@interface SBHDefaultIconListLayoutProvider : NSObject <SBIconListLayoutProvider, BSDescriptionProviding> {

	NSMutableDictionary* _cachedListLayouts;
	unsigned long long _screenType;
	unsigned long long _layoutOptions;

}

@property (nonatomic,readonly) unsigned long long screenType;                 //@synthesize screenType=_screenType - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)currentDeviceScreenType;
+(id)frameworkFallbackInstance;
-(void)configureGridSizeClassSizes:(SBHIconGridSizeClassSizes*)arg1 forScreenType:(unsigned long long)arg2 numberOfColumns:(unsigned long long)arg3 ;
-(void)configureSupportedIconGridSizeClasses:(unsigned long long*)arg1 forScreenType:(unsigned long long)arg2 iconLocation:(id)arg3 ;
-(id)init;
-(void)configureLabelConfigurations:(id)arg1 forScreenType:(unsigned long long)arg2 ;
-(id)initWithLayoutOptions:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)configureIconAccessoryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
-(void)configureAppLibraryConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
-(id)succinctDescription;
-(id)makeLayoutForIconLocation:(id)arg1 ;
-(unsigned long long)layoutOptions;
-(UIEdgeInsets)homeScreenSearchOverlayInsetsForScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2 forAppLibrary:(BOOL)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithScreenType:(unsigned long long)arg1 ;
-(void)configureRootFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
-(NSString *)description;
-(id)layoutForIconLocation:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)configureSidebarConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 getBottomSearchOffset:(double*)arg4 ;
-(id)initWithScreenType:(unsigned long long)arg1 layoutOptions:(unsigned long long)arg2 ;
-(unsigned long long)screenType;
-(void)configureFolderIconConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 numberOfRows:(unsigned long long)arg3 layoutOptions:(unsigned long long)arg4 ;
-(void)configureFloatyFolderConfiguration:(id)arg1 forScreenType:(unsigned long long)arg2 layoutOptions:(unsigned long long)arg3 ;
@end

