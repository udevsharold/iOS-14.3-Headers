/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ATXMPBScreenLogUnlockSessionTracker : PBCodable <NSCopying> {

	unsigned _numEngagementsInAppLibrary;
	unsigned _numEngagementsInAppPredictionPanel;
	unsigned _numEngagementsInAppPredictionPanelTodayPage;
	unsigned _numEngagementsInSpotlightActions;
	unsigned _numEngagementsInSpotlightApps;
	unsigned _numEngagementsInSuggestionsWidget;
	unsigned _numEngagementsInSuggestionsWidgetTodayPage;
	unsigned _sessionLengthInSeconds;
	BOOL _appLibraryEnabled;
	BOOL _appLibraryViewed;
	BOOL _appPredictionPanelEnabled;
	BOOL _appPredictionPanelTodayPageEnabled;
	BOOL _appPredictionPanelTodayPageViewed;
	BOOL _appPredictionPanelViewed;
	BOOL _spotlightActionsViewed;
	BOOL _spotlightAppsViewed;
	BOOL _spotlightEnabled;
	BOOL _suggestionsWidgetEnabled;
	BOOL _suggestionsWidgetTodayPageEnabled;
	BOOL _suggestionsWidgetTodayPageViewed;
	BOOL _suggestionsWidgetViewed;
	SCD_Struct_AT9 _has;

}

@property (assign,nonatomic) BOOL hasSessionLengthInSeconds; 
@property (assign,nonatomic) unsigned sessionLengthInSeconds;                                   //@synthesize sessionLengthInSeconds=_sessionLengthInSeconds - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInSpotlightApps; 
@property (assign,nonatomic) unsigned numEngagementsInSpotlightApps;                            //@synthesize numEngagementsInSpotlightApps=_numEngagementsInSpotlightApps - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInSpotlightActions; 
@property (assign,nonatomic) unsigned numEngagementsInSpotlightActions;                         //@synthesize numEngagementsInSpotlightActions=_numEngagementsInSpotlightActions - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInSuggestionsWidget; 
@property (assign,nonatomic) unsigned numEngagementsInSuggestionsWidget;                        //@synthesize numEngagementsInSuggestionsWidget=_numEngagementsInSuggestionsWidget - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInAppPredictionPanel; 
@property (assign,nonatomic) unsigned numEngagementsInAppPredictionPanel;                       //@synthesize numEngagementsInAppPredictionPanel=_numEngagementsInAppPredictionPanel - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInAppLibrary; 
@property (assign,nonatomic) unsigned numEngagementsInAppLibrary;                               //@synthesize numEngagementsInAppLibrary=_numEngagementsInAppLibrary - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightEnabled; 
@property (assign,nonatomic) BOOL spotlightEnabled;                                             //@synthesize spotlightEnabled=_spotlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetEnabled; 
@property (assign,nonatomic) BOOL suggestionsWidgetEnabled;                                     //@synthesize suggestionsWidgetEnabled=_suggestionsWidgetEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelEnabled; 
@property (assign,nonatomic) BOOL appPredictionPanelEnabled;                                    //@synthesize appPredictionPanelEnabled=_appPredictionPanelEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppLibraryEnabled; 
@property (assign,nonatomic) BOOL appLibraryEnabled;                                            //@synthesize appLibraryEnabled=_appLibraryEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightAppsViewed; 
@property (assign,nonatomic) BOOL spotlightAppsViewed;                                          //@synthesize spotlightAppsViewed=_spotlightAppsViewed - In the implementation block
@property (assign,nonatomic) BOOL hasSpotlightActionsViewed; 
@property (assign,nonatomic) BOOL spotlightActionsViewed;                                       //@synthesize spotlightActionsViewed=_spotlightActionsViewed - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetViewed; 
@property (assign,nonatomic) BOOL suggestionsWidgetViewed;                                      //@synthesize suggestionsWidgetViewed=_suggestionsWidgetViewed - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelViewed; 
@property (assign,nonatomic) BOOL appPredictionPanelViewed;                                     //@synthesize appPredictionPanelViewed=_appPredictionPanelViewed - In the implementation block
@property (assign,nonatomic) BOOL hasAppLibraryViewed; 
@property (assign,nonatomic) BOOL appLibraryViewed;                                             //@synthesize appLibraryViewed=_appLibraryViewed - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetTodayPageViewed; 
@property (assign,nonatomic) BOOL suggestionsWidgetTodayPageViewed;                             //@synthesize suggestionsWidgetTodayPageViewed=_suggestionsWidgetTodayPageViewed - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelTodayPageViewed; 
@property (assign,nonatomic) BOOL appPredictionPanelTodayPageViewed;                            //@synthesize appPredictionPanelTodayPageViewed=_appPredictionPanelTodayPageViewed - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInSuggestionsWidgetTodayPage; 
@property (assign,nonatomic) unsigned numEngagementsInSuggestionsWidgetTodayPage;               //@synthesize numEngagementsInSuggestionsWidgetTodayPage=_numEngagementsInSuggestionsWidgetTodayPage - In the implementation block
@property (assign,nonatomic) BOOL hasNumEngagementsInAppPredictionPanelTodayPage; 
@property (assign,nonatomic) unsigned numEngagementsInAppPredictionPanelTodayPage;              //@synthesize numEngagementsInAppPredictionPanelTodayPage=_numEngagementsInAppPredictionPanelTodayPage - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetTodayPageEnabled; 
@property (assign,nonatomic) BOOL suggestionsWidgetTodayPageEnabled;                            //@synthesize suggestionsWidgetTodayPageEnabled=_suggestionsWidgetTodayPageEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelTodayPageEnabled; 
@property (assign,nonatomic) BOOL appPredictionPanelTodayPageEnabled;                           //@synthesize appPredictionPanelTodayPageEnabled=_appPredictionPanelTodayPageEnabled - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)setSpotlightEnabled:(BOOL)arg1 ;
-(void)setAppLibraryEnabled:(BOOL)arg1 ;
-(void)setAppPredictionPanelEnabled:(BOOL)arg1 ;
-(void)setSuggestionsWidgetEnabled:(BOOL)arg1 ;
-(BOOL)spotlightEnabled;
-(BOOL)appLibraryEnabled;
-(BOOL)appPredictionPanelEnabled;
-(BOOL)suggestionsWidgetEnabled;
-(void)setHasSpotlightEnabled:(BOOL)arg1 ;
-(BOOL)hasSpotlightEnabled;
-(void)setHasAppLibraryEnabled:(BOOL)arg1 ;
-(BOOL)hasAppLibraryEnabled;
-(void)setHasAppPredictionPanelEnabled:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelEnabled;
-(void)setHasSuggestionsWidgetEnabled:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetEnabled;
-(void)setSessionLengthInSeconds:(unsigned)arg1 ;
-(void)setHasSessionLengthInSeconds:(BOOL)arg1 ;
-(BOOL)hasSessionLengthInSeconds;
-(void)setNumEngagementsInSpotlightApps:(unsigned)arg1 ;
-(void)setHasNumEngagementsInSpotlightApps:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInSpotlightApps;
-(void)setNumEngagementsInSpotlightActions:(unsigned)arg1 ;
-(void)setHasNumEngagementsInSpotlightActions:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInSpotlightActions;
-(void)setNumEngagementsInSuggestionsWidget:(unsigned)arg1 ;
-(void)setHasNumEngagementsInSuggestionsWidget:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInSuggestionsWidget;
-(void)setNumEngagementsInAppPredictionPanel:(unsigned)arg1 ;
-(void)setHasNumEngagementsInAppPredictionPanel:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInAppPredictionPanel;
-(void)setNumEngagementsInAppLibrary:(unsigned)arg1 ;
-(void)setHasNumEngagementsInAppLibrary:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInAppLibrary;
-(void)setSpotlightAppsViewed:(BOOL)arg1 ;
-(void)setHasSpotlightAppsViewed:(BOOL)arg1 ;
-(BOOL)hasSpotlightAppsViewed;
-(void)setSpotlightActionsViewed:(BOOL)arg1 ;
-(void)setHasSpotlightActionsViewed:(BOOL)arg1 ;
-(BOOL)hasSpotlightActionsViewed;
-(void)setSuggestionsWidgetViewed:(BOOL)arg1 ;
-(void)setHasSuggestionsWidgetViewed:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetViewed;
-(void)setAppPredictionPanelViewed:(BOOL)arg1 ;
-(void)setHasAppPredictionPanelViewed:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelViewed;
-(void)setAppLibraryViewed:(BOOL)arg1 ;
-(void)setHasAppLibraryViewed:(BOOL)arg1 ;
-(BOOL)hasAppLibraryViewed;
-(void)setSuggestionsWidgetTodayPageViewed:(BOOL)arg1 ;
-(void)setHasSuggestionsWidgetTodayPageViewed:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetTodayPageViewed;
-(void)setAppPredictionPanelTodayPageViewed:(BOOL)arg1 ;
-(void)setHasAppPredictionPanelTodayPageViewed:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelTodayPageViewed;
-(void)setNumEngagementsInSuggestionsWidgetTodayPage:(unsigned)arg1 ;
-(void)setHasNumEngagementsInSuggestionsWidgetTodayPage:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInSuggestionsWidgetTodayPage;
-(void)setNumEngagementsInAppPredictionPanelTodayPage:(unsigned)arg1 ;
-(void)setHasNumEngagementsInAppPredictionPanelTodayPage:(BOOL)arg1 ;
-(BOOL)hasNumEngagementsInAppPredictionPanelTodayPage;
-(void)setSuggestionsWidgetTodayPageEnabled:(BOOL)arg1 ;
-(void)setHasSuggestionsWidgetTodayPageEnabled:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetTodayPageEnabled;
-(void)setAppPredictionPanelTodayPageEnabled:(BOOL)arg1 ;
-(void)setHasAppPredictionPanelTodayPageEnabled:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelTodayPageEnabled;
-(unsigned)sessionLengthInSeconds;
-(unsigned)numEngagementsInSpotlightApps;
-(unsigned)numEngagementsInSpotlightActions;
-(unsigned)numEngagementsInSuggestionsWidget;
-(unsigned)numEngagementsInAppPredictionPanel;
-(unsigned)numEngagementsInAppLibrary;
-(BOOL)spotlightAppsViewed;
-(BOOL)spotlightActionsViewed;
-(BOOL)suggestionsWidgetViewed;
-(BOOL)appPredictionPanelViewed;
-(BOOL)appLibraryViewed;
-(BOOL)suggestionsWidgetTodayPageViewed;
-(BOOL)appPredictionPanelTodayPageViewed;
-(unsigned)numEngagementsInSuggestionsWidgetTodayPage;
-(unsigned)numEngagementsInAppPredictionPanelTodayPage;
-(BOOL)suggestionsWidgetTodayPageEnabled;
-(BOOL)appPredictionPanelTodayPageEnabled;
@end

