/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:07 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBLeafIcon.h>

@protocol SBLeafIconDataSource;
@class SBHWidget, NSArray;

@interface SBWidgetIcon : SBLeafIcon {

	BOOL _allowsSuggestions;
	BOOL _allowsExternalSuggestions;
	id<SBLeafIconDataSource> _lastUserSelectedDataSource;
	unsigned long long _stackChangeReason;

}

@property (nonatomic,retain) SBHWidget * activeWidget; 
@property (nonatomic,copy,readonly) NSArray * widgets; 
@property (nonatomic,retain) id<SBLeafIconDataSource> lastUserSelectedDataSource;                        //@synthesize lastUserSelectedDataSource=_lastUserSelectedDataSource - In the implementation block
@property (assign,nonatomic) unsigned long long stackChangeReason;                                       //@synthesize stackChangeReason=_stackChangeReason - In the implementation block
@property (nonatomic,readonly) unsigned long long iconDataSourcesExcludingSuggestionsCount; 
@property (assign,nonatomic) BOOL allowsSuggestions;                                                     //@synthesize allowsSuggestions=_allowsSuggestions - In the implementation block
@property (assign,nonatomic) BOOL allowsExternalSuggestions;                                             //@synthesize allowsExternalSuggestions=_allowsExternalSuggestions - In the implementation block
-(BOOL)allowsSuggestions;
-(void)setAllowsSuggestions:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsStackConfiguration;
-(BOOL)isWidgetStackIcon;
-(BOOL)canBeReceivedByIcon;
-(BOOL)canReceiveGrabbedIcon;
-(unsigned long long)iconDataSourcesExcludingSuggestionsCount;
-(unsigned long long)supportedGridSizeClasses;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(NSArray *)widgets;
-(SBHWidget *)activeWidget;
-(id)initWithCHSAvocadoDescriptor:(id)arg1 ;
-(id)initWithCHSAvocadoDescriptors:(id)arg1 ;
-(void)setActiveWidget:(SBHWidget *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)firstWidgetPassingTest:(/*^block*/id)arg1 ;
-(void)setStackChangeReason:(unsigned long long)arg1 ;
-(id)initWithUniqueLeafIdentifier;
-(id)copyWithUniqueLeafIdentifier;
-(BOOL)allowsExternalSuggestions;
-(void)setAllowsExternalSuggestions:(BOOL)arg1 ;
-(void)setLastUserSelectedDataSource:(id<SBLeafIconDataSource>)arg1 ;
-(BOOL)isWidgetIcon;
-(id<SBLeafIconDataSource>)lastUserSelectedDataSource;
-(id)_fallbackBestDataSource;
-(void)didAddIconDataSource:(id)arg1 ;
-(void)didRemoveIconDataSource:(id)arg1 ;
-(BOOL)_hasDataSourceThatIgnoresAllOtherDataSources;
-(id)initWithWidgets:(id)arg1 ;
-(BOOL)supportsConfiguration;
-(unsigned long long)stackChangeReason;
-(id)initWithWidget:(id)arg1 ;
-(BOOL)canBeAddedToMultiItemDrag;
@end

