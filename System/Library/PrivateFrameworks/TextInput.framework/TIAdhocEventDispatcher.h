/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TIAdhocEventDispatcher : NSObject {

	NSMutableDictionary* _eventSpecMap;

}

@property (nonatomic,retain) NSMutableDictionary * eventSpecMap;              //@synthesize eventSpecMap=_eventSpecMap - In the implementation block
+(id)sharedInstance;
-(NSMutableDictionary *)eventSpecMap;
-(id)initFromConfig:(id)arg1 ;
-(void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long*)arg2 ;
-(id)replacePeriodsInString:(id)arg1 ;
-(void)setEventSpecMap:(NSMutableDictionary *)arg1 ;
-(void)dispatchEventForStatisticWithName:(id)arg1 andValue:(long long*)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)loadEventSpecMapFromConfig:(id)arg1 ;
@end
