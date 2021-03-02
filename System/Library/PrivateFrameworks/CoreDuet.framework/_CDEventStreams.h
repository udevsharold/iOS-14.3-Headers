/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _CDEventStreams : NSObject {

	BOOL _allStreamsLoaded;
	NSDictionary* _allEventStreams;
	NSDictionary* _allKBEventStreams;

}

@property (assign,nonatomic) BOOL allStreamsLoaded;                           //@synthesize allStreamsLoaded=_allStreamsLoaded - In the implementation block
@property (nonatomic,readonly) NSDictionary * allEventStreams;                //@synthesize allEventStreams=_allEventStreams - In the implementation block
@property (nonatomic,readonly) NSDictionary * allKBEventStreams;              //@synthesize allKBEventStreams=_allKBEventStreams - In the implementation block
+(void)loadAllEventStreams;
+(id)privacyPolicyForEventStreamName:(id)arg1 ;
+(id)sharedInstance;
+(id)ephemeralitySchedule;
+(id)rateLimiterForEventStreamName:(id)arg1 ;
+(id)eventStreamPropertiesForKBName:(id)arg1 ;
+(id)eventStreamPropertiesForName:(id)arg1 ;
+(id)eventStreamPropertiesForEventStream:(id)arg1 ;
+(id)contentProviderPlistEventStreamsForPath:(id)arg1 ;
+(id)eventStreamForName:(id)arg1 ;
-(void)setAllKBEventStreams:(NSDictionary *)arg1 ;
-(id)init;
-(void)setAllStreamsLoaded:(BOOL)arg1 ;
-(void)setAllEventStreams:(NSDictionary *)arg1 ;
-(NSDictionary *)allKBEventStreams;
-(NSDictionary *)allEventStreams;
-(id)_eventStreamForName:(id)arg1 orKBName:(id)arg2 ;
-(BOOL)allStreamsLoaded;
@end
