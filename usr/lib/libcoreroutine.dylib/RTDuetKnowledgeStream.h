/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKEventStream, RTDuetKnowledgeStore;

@interface RTDuetKnowledgeStream : NSObject {

	long long _streamType;
	_DKEventStream* _eventStream;
	RTDuetKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,retain) _DKEventStream * eventStream;                       //@synthesize eventStream=_eventStream - In the implementation block
@property (nonatomic,retain) RTDuetKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) long long streamType;                             //@synthesize streamType=_streamType - In the implementation block
+(id)duetKnowledgeStreamTypeToDuetEventStream:(long long)arg1 ;
+(id)streamTypeToString:(long long)arg1 ;
-(void)purge;
-(_DKEventStream *)eventStream;
-(id)init;
-(void)setKnowledgeStore:(RTDuetKnowledgeStore *)arg1 ;
-(void)dealloc;
-(void)setEventStream:(_DKEventStream *)arg1 ;
-(RTDuetKnowledgeStore *)knowledgeStore;
-(long long)streamType;
-(id)initWithDuetKnowledgeStore:(id)arg1 streamType:(long long)arg2 ;
-(void)enumerateEventsWithinDateInterval:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithStreamType:(long long)arg1 knowledgeStore:(id)arg2 ;
-(id)_convertDuetEvent:(id)arg1 ;
@end
