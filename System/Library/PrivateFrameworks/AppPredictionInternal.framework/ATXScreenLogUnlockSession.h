/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface ATXScreenLogUnlockSession : NSObject <NSSecureCoding> {

	BOOL _spotlightEnabled;
	BOOL _hasSuggestionsWidget;
	BOOL _hasSuggestionsWidgetInTodayPage;
	BOOL _hasAppPredictionPanel;
	BOOL _hasAppPredictionPanelInTodayPage;
	BOOL _appLibraryEnabled;
	NSDate* _sessionStartDate;
	NSDate* _sessionEndDate;
	unsigned long long _numEngagementsInSpotlightApps;
	unsigned long long _numEngagementsInSpotlightActions;
	unsigned long long _numEngagementsInSuggestionsWidget;
	unsigned long long _numEngagementsInSuggestionsWidgetTodayPage;
	unsigned long long _numEngagementsInAppPredictionPanel;
	unsigned long long _numEngagementsInAppPredictionPanelTodayPage;
	unsigned long long _numEngagementsInAppLibrary;
	unsigned long long _numViewsInSpotlightApps;
	unsigned long long _numViewsInSpotlightActions;
	unsigned long long _numViewsInSuggestionsWidget;
	unsigned long long _numViewsInSuggestionsWidgetTodayPage;
	unsigned long long _numViewsInAppPredictionPanel;
	unsigned long long _numViewsInAppPredictionPanelTodayPage;
	unsigned long long _numViewsInAppLibrary;

}

@property (nonatomic,retain) NSDate * sessionStartDate;                                                   //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,retain) NSDate * sessionEndDate;                                                     //@synthesize sessionEndDate=_sessionEndDate - In the implementation block
@property (assign,nonatomic) unsigned long long numEngagementsInSpotlightApps;                            //@synthesize numEngagementsInSpotlightApps=_numEngagementsInSpotlightApps - In the implementation block
@property (assign,nonatomic) unsigned long long numEngagementsInSpotlightActions;                         //@synthesize numEngagementsInSpotlightActions=_numEngagementsInSpotlightActions - In the implementation block
@property (assign,nonatomic) unsigned long long numEngagementsInSuggestionsWidget;                        //@synthesize numEngagementsInSuggestionsWidget=_numEngagementsInSuggestionsWidget - In the implementation block
@property (assign,nonatomic) unsigned long long numEngagementsInSuggestionsWidgetTodayPage;               //@synthesize numEngagementsInSuggestionsWidgetTodayPage=_numEngagementsInSuggestionsWidgetTodayPage - In the implementation block
@property (assign,nonatomic) unsigned long long numEngagementsInAppPredictionPanel;                       //@synthesize numEngagementsInAppPredictionPanel=_numEngagementsInAppPredictionPanel - In the implementation block
@property (assign,nonatomic) unsigned long long numEngagementsInAppPredictionPanelTodayPage;              //@synthesize numEngagementsInAppPredictionPanelTodayPage=_numEngagementsInAppPredictionPanelTodayPage - In the implementation block
@property (assign,nonatomic) unsigned long long numEngagementsInAppLibrary;                               //@synthesize numEngagementsInAppLibrary=_numEngagementsInAppLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long numViewsInSpotlightApps;                                  //@synthesize numViewsInSpotlightApps=_numViewsInSpotlightApps - In the implementation block
@property (assign,nonatomic) unsigned long long numViewsInSpotlightActions;                               //@synthesize numViewsInSpotlightActions=_numViewsInSpotlightActions - In the implementation block
@property (assign,nonatomic) unsigned long long numViewsInSuggestionsWidget;                              //@synthesize numViewsInSuggestionsWidget=_numViewsInSuggestionsWidget - In the implementation block
@property (assign,nonatomic) unsigned long long numViewsInSuggestionsWidgetTodayPage;                     //@synthesize numViewsInSuggestionsWidgetTodayPage=_numViewsInSuggestionsWidgetTodayPage - In the implementation block
@property (assign,nonatomic) unsigned long long numViewsInAppPredictionPanel;                             //@synthesize numViewsInAppPredictionPanel=_numViewsInAppPredictionPanel - In the implementation block
@property (assign,nonatomic) unsigned long long numViewsInAppPredictionPanelTodayPage;                    //@synthesize numViewsInAppPredictionPanelTodayPage=_numViewsInAppPredictionPanelTodayPage - In the implementation block
@property (assign,nonatomic) unsigned long long numViewsInAppLibrary;                                     //@synthesize numViewsInAppLibrary=_numViewsInAppLibrary - In the implementation block
@property (assign,nonatomic) BOOL spotlightEnabled;                                                       //@synthesize spotlightEnabled=_spotlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidget;                                                   //@synthesize hasSuggestionsWidget=_hasSuggestionsWidget - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetInTodayPage;                                        //@synthesize hasSuggestionsWidgetInTodayPage=_hasSuggestionsWidgetInTodayPage - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanel;                                                  //@synthesize hasAppPredictionPanel=_hasAppPredictionPanel - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelInTodayPage;                                       //@synthesize hasAppPredictionPanelInTodayPage=_hasAppPredictionPanelInTodayPage - In the implementation block
@property (assign,nonatomic) BOOL appLibraryEnabled;                                                      //@synthesize appLibraryEnabled=_appLibraryEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)complete;
-(id)init;
-(NSDate *)sessionEndDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)finalizeWithSessionEndDate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)sessionStartDate;
-(id)initWithSessionStartDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSpotlightEnabled:(BOOL)arg1 ;
-(void)setAppLibraryEnabled:(BOOL)arg1 ;
-(BOOL)spotlightEnabled;
-(BOOL)appLibraryEnabled;
-(void)setSessionStartDate:(NSDate *)arg1 ;
-(void)setNumEngagementsInSpotlightApps:(unsigned long long)arg1 ;
-(void)setNumEngagementsInSpotlightActions:(unsigned long long)arg1 ;
-(void)setNumEngagementsInSuggestionsWidget:(unsigned long long)arg1 ;
-(void)setNumEngagementsInAppPredictionPanel:(unsigned long long)arg1 ;
-(void)setNumEngagementsInAppLibrary:(unsigned long long)arg1 ;
-(void)setNumEngagementsInSuggestionsWidgetTodayPage:(unsigned long long)arg1 ;
-(void)setNumEngagementsInAppPredictionPanelTodayPage:(unsigned long long)arg1 ;
-(unsigned long long)numEngagementsInSpotlightApps;
-(unsigned long long)numEngagementsInSpotlightActions;
-(unsigned long long)numEngagementsInSuggestionsWidget;
-(unsigned long long)numEngagementsInAppPredictionPanel;
-(unsigned long long)numEngagementsInAppLibrary;
-(unsigned long long)numEngagementsInSuggestionsWidgetTodayPage;
-(unsigned long long)numEngagementsInAppPredictionPanelTodayPage;
-(BOOL)hasSuggestionsWidget;
-(void)setHasSuggestionsWidget:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanel;
-(void)setHasAppPredictionPanel:(BOOL)arg1 ;
-(void)setHasSuggestionsWidgetInTodayPage:(BOOL)arg1 ;
-(void)setHasAppPredictionPanelInTodayPage:(BOOL)arg1 ;
-(void)updateWithUIEventIfPossible:(id)arg1 ;
-(BOOL)hasSuggestionsWidgetInTodayPage;
-(BOOL)hasAppPredictionPanelInTodayPage;
-(unsigned long long)numViewsInSpotlightApps;
-(unsigned long long)numViewsInSpotlightActions;
-(unsigned long long)numViewsInSuggestionsWidget;
-(unsigned long long)numViewsInAppPredictionPanel;
-(unsigned long long)numViewsInAppLibrary;
-(unsigned long long)numViewsInAppPredictionPanelTodayPage;
-(unsigned long long)numViewsInSuggestionsWidgetTodayPage;
-(void)_updateWithHomeScreenEvent:(id)arg1 ;
-(void)_updateWithSpotlightEvent:(id)arg1 ;
-(void)_updateWithAppDirectoryEvent:(id)arg1 ;
-(BOOL)_widgetBundleIdIsSuggestionsWidget:(id)arg1 ;
-(void)setSessionEndDate:(NSDate *)arg1 ;
-(void)setNumViewsInSpotlightApps:(unsigned long long)arg1 ;
-(void)setNumViewsInSpotlightActions:(unsigned long long)arg1 ;
-(void)setNumViewsInSuggestionsWidget:(unsigned long long)arg1 ;
-(void)setNumViewsInSuggestionsWidgetTodayPage:(unsigned long long)arg1 ;
-(void)setNumViewsInAppPredictionPanel:(unsigned long long)arg1 ;
-(void)setNumViewsInAppPredictionPanelTodayPage:(unsigned long long)arg1 ;
-(void)setNumViewsInAppLibrary:(unsigned long long)arg1 ;
-(BOOL)isEqualToATXScreenLogUnlockSession:(id)arg1 ;
@end

