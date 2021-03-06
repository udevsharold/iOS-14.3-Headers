/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface CFSiriKitVocabularyRetriever : NSObject {

	int _siriKitVocabNotificationToken;
	NSDictionary* _appContactVocabularyDictionary;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (assign) int siriKitVocabNotificationToken;                          //@synthesize siriKitVocabNotificationToken=_siriKitVocabNotificationToken - In the implementation block
@property (retain) NSDictionary * appContactVocabularyDictionary;              //@synthesize appContactVocabularyDictionary=_appContactVocabularyDictionary - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> serialQueue;                   //@synthesize serialQueue=_serialQueue - In the implementation block
+(id)sharedInstance;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)init;
-(id)vocabularyStringsForAppBundleId:(id)arg1 vocabularyType:(long long)arg2 query:(id)arg3 ;
-(void)fetchContactVocabularyEntities;
-(BOOL)isValidInputString:(id)arg1 ;
-(NSDictionary *)appContactVocabularyDictionary;
-(void)setAppContactVocabularyDictionary:(NSDictionary *)arg1 ;
-(id)vocabularyEntryWithContactNamed:(id)arg1 forApp:(id)arg2 ;
-(int)siriKitVocabNotificationToken;
-(void)setSiriKitVocabNotificationToken:(int)arg1 ;
@end

