/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXHomeScreenLogUnlockSessionManagerSettingsWrapper : NSObject {

	BOOL _spotlightEnabled;
	BOOL _hasSuggestionsWidget;
	BOOL _hasSuggestionsWidgetToday;
	BOOL _hasAppPredictionPanel;
	BOOL _hasAppPredictionPanelToday;
	BOOL _appLibraryEnabled;

}

@property (assign,nonatomic) BOOL spotlightEnabled;                        //@synthesize spotlightEnabled=_spotlightEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidget;                    //@synthesize hasSuggestionsWidget=_hasSuggestionsWidget - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionsWidgetToday;               //@synthesize hasSuggestionsWidgetToday=_hasSuggestionsWidgetToday - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanel;                   //@synthesize hasAppPredictionPanel=_hasAppPredictionPanel - In the implementation block
@property (assign,nonatomic) BOOL hasAppPredictionPanelToday;              //@synthesize hasAppPredictionPanelToday=_hasAppPredictionPanelToday - In the implementation block
@property (assign,nonatomic) BOOL appLibraryEnabled;                       //@synthesize appLibraryEnabled=_appLibraryEnabled - In the implementation block
-(void)setSpotlightEnabled:(BOOL)arg1 ;
-(void)setAppLibraryEnabled:(BOOL)arg1 ;
-(BOOL)spotlightEnabled;
-(BOOL)appLibraryEnabled;
-(BOOL)hasSuggestionsWidget;
-(void)setHasSuggestionsWidget:(BOOL)arg1 ;
-(BOOL)hasSuggestionsWidgetToday;
-(void)setHasSuggestionsWidgetToday:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanel;
-(void)setHasAppPredictionPanel:(BOOL)arg1 ;
-(BOOL)hasAppPredictionPanelToday;
-(void)setHasAppPredictionPanelToday:(BOOL)arg1 ;
@end
