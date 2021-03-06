/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKKnowledgeStore, NSArray;

@interface VSSiriServerConfiguration : NSObject {

	CKKnowledgeStore* _knowledgeStore;

}

@property (nonatomic,retain) CKKnowledgeStore * knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) BOOL disableOsprey; 
@property (nonatomic,readonly) BOOL shouldDelayVoiceUpdate; 
@property (nonatomic,readonly) NSArray * whitelistedAppId; 
+(id)defaultConfig;
-(id)init;
-(void)setKnowledgeStore:(CKKnowledgeStore *)arg1 ;
-(CKKnowledgeStore *)knowledgeStore;
-(id)experimentIdentifier;
-(BOOL)disableOsprey;
-(double)deviceWaitTimeForAppId:(id)arg1 ;
-(double)timeoutForAppId:(id)arg1 ;
-(BOOL)shouldDelayVoiceUpdate;
-(id)dictForKey:(id)arg1 ;
-(id)configForAppId:(id)arg1 key:(id)arg2 ;
-(NSArray *)whitelistedAppId;
@end

