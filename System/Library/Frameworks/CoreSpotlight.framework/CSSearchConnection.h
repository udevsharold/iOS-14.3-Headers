/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSXPCConnection.h>

@class NSMutableDictionary;

@interface CSSearchConnection : CSXPCConnection {

	BOOL _previouslyInitialized;
	NSMutableDictionary* _queries;

}

@property (nonatomic,retain) NSMutableDictionary * queries;              //@synthesize queries=_queries - In the implementation block
@property (nonatomic,readonly) BOOL previouslyInitialized;               //@synthesize previouslyInitialized=_previouslyInitialized - In the implementation block
+(id)sharedSearchConnection;
+(id)sharedCSUserFSConnection;
-(void)preheat:(id)arg1 ;
-(void)cancelQuery:(unsigned long long)arg1 ;
-(NSMutableDictionary *)queries;
-(id)queryForID:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)startQuery:(id)arg1 context:(id)arg2 ;
-(void)handleError:(id)arg1 ;
-(id)removeQueryForID:(id)arg1 ;
-(void)handleReply:(id)arg1 ;
-(id)init;
-(void)setQuery:(id)arg1 forID:(id)arg2 ;
-(BOOL)previouslyInitialized;
-(id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(BOOL)arg4 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setQueries:(NSMutableDictionary *)arg1 ;
@end
