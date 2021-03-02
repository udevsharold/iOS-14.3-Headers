/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDInteractionAdvising, OS_dispatch_queue;
@class NSObject, _CDCachedPeopleSuggestion, _CDInteractionStoreNotificationReceiver, _CDPeopleSuggesterContext, _CDPeopleSuggesterSettings;

@interface _CDPeopleSuggester : NSObject {

	id<_CDInteractionAdvising> _advisor;
	NSObject*<OS_dispatch_queue> _queue;
	_CDCachedPeopleSuggestion* _cache;
	_CDInteractionStoreNotificationReceiver* _receiver;
	int _settingsNotifyToken;
	BOOL _enableCaching;
	_CDPeopleSuggesterContext* _context;
	_CDPeopleSuggesterSettings* _settings;
	double _cacheTimeoutSeconds;

}

@property (assign) BOOL enableCaching;                                 //@synthesize enableCaching=_enableCaching - In the implementation block
@property (assign) double cacheTimeoutSeconds;                         //@synthesize cacheTimeoutSeconds=_cacheTimeoutSeconds - In the implementation block
@property (retain) _CDPeopleSuggesterContext * context;                //@synthesize context=_context - In the implementation block
@property (retain) _CDPeopleSuggesterSettings * settings;              //@synthesize settings=_settings - In the implementation block
+(id)peopleSuggesterWithDirectDBAccess;
+(id)createAdvisorSettingsFromContext:(id)arg1 settings:(id)arg2 ;
+(id)peopleSuggester;
+(id)restrictedPrefixForPrefix:(id)arg1 ;
+(id)peopleSuggesterUsingDaemon;
+(id)loggingTagForAutocompleteFeedback;
-(void)invalidateCache;
-(id)init;
-(void)setSettings:(_CDPeopleSuggesterSettings *)arg1 ;
-(void)setEnableCaching:(BOOL)arg1 ;
-(void)setContext:(_CDPeopleSuggesterContext *)arg1 ;
-(BOOL)enableCaching;
-(_CDPeopleSuggesterContext *)context;
-(_CDPeopleSuggesterSettings *)settings;
-(id)initWithAdvisor:(id)arg1 ;
-(void)updateSettings;
-(id)suggestPeopleWithError:(id*)arg1 ;
-(double)cacheTimeoutSeconds;
-(void)setCacheTimeoutSeconds:(double)arg1 ;
-(void)suggestPeopleWithCompletionHandler:(/*^block*/id)arg1 ;
@end
